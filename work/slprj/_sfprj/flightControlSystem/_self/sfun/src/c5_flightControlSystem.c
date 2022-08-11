/* Include files */

#include "flightControlSystem_sfun.h"
#include "c5_flightControlSystem.h"
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c5_emlrtMCI = { 13, /* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtMCInfo c5_b_emlrtMCI = { 13,/* lineNo */
  13,                                  /* colNo */
  "toLogicalCheck",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\toLogicalCheck.m"/* pName */
};

static emlrtMCInfo c5_c_emlrtMCI = { 87,/* lineNo */
  33,                                  /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c5_d_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo c5_e_emlrtMCI = { 13,/* lineNo */
  37,                                  /* colNo */
  "validateinteger",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validateinteger.m"/* pName */
};

static emlrtMCInfo c5_f_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatenonnan",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnan.m"/* pName */
};

static emlrtMCInfo c5_g_emlrtMCI = { 454,/* lineNo */
  5,                                   /* colNo */
  "houghpeaks",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pName */
};

static emlrtMCInfo c5_h_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatepositive",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatepositive.m"/* pName */
};

static emlrtMCInfo c5_i_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validateodd",                       /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validateodd.m"/* pName */
};

static emlrtMCInfo c5_j_emlrtMCI = { 474,/* lineNo */
  1,                                   /* colNo */
  "houghpeaks",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pName */
};

static emlrtMCInfo c5_k_emlrtMCI = { 40,/* lineNo */
  15,                                  /* colNo */
  "ind2sub",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pName */
};

static emlrtMCInfo c5_l_emlrtMCI = { 18,/* lineNo */
  15,                                  /* colNo */
  "mean",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\mean.m"/* pName */
};

static emlrtRSInfo c5_emlrtRSI = { 2,  /* lineNo */
  "Image Processing System/MATLAB Function2",/* fcnName */
  "#flightControlSystem:2870"          /* pathName */
};

static emlrtRSInfo c5_b_emlrtRSI = { 3,/* lineNo */
  "Image Processing System/MATLAB Function2",/* fcnName */
  "#flightControlSystem:2870"          /* pathName */
};

static emlrtRSInfo c5_c_emlrtRSI = { 4,/* lineNo */
  "Image Processing System/MATLAB Function2",/* fcnName */
  "#flightControlSystem:2870"          /* pathName */
};

static emlrtRSInfo c5_d_emlrtRSI = { 5,/* lineNo */
  "Image Processing System/MATLAB Function2",/* fcnName */
  "#flightControlSystem:2870"          /* pathName */
};

static emlrtRSInfo c5_e_emlrtRSI = { 112,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c5_f_emlrtRSI = { 128,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c5_g_emlrtRSI = { 134,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c5_h_emlrtRSI = { 698,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c5_i_emlrtRSI = { 699,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c5_j_emlrtRSI = { 704,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c5_k_emlrtRSI = { 705,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c5_l_emlrtRSI = { 106,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c5_m_emlrtRSI = { 110,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c5_n_emlrtRSI = { 854,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c5_o_emlrtRSI = { 928,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c5_p_emlrtRSI = { 1002,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c5_q_emlrtRSI = { 1030,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c5_r_emlrtRSI = { 1042,/* lineNo */
  "imfilter",                          /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imfilter.m"/* pathName */
};

static emlrtRSInfo c5_s_emlrtRSI = { 714,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c5_t_emlrtRSI = { 133,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c5_u_emlrtRSI = { 170,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c5_v_emlrtRSI = { 456,/* lineNo */
  "imhist",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imhist.m"/* pathName */
};

static emlrtRSInfo c5_w_emlrtRSI = { 14,/* lineNo */
  "warning",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+internal\\warning.m"/* pathName */
};

static emlrtRSInfo c5_x_emlrtRSI = { 752,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c5_y_emlrtRSI = { 758,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c5_ab_emlrtRSI = { 860,/* lineNo */
  "edge",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\edge.m"/* pathName */
};

static emlrtRSInfo c5_bb_emlrtRSI = { 40,/* lineNo */
  "imreconstruct",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imreconstruct.m"/* pathName */
};

static emlrtRSInfo c5_cb_emlrtRSI = { 76,/* lineNo */
  "imreconstruct",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\imreconstruct.m"/* pathName */
};

static emlrtRSInfo c5_db_emlrtRSI = { 27,/* lineNo */
  "getBinaryConnectivityMatrix",       /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\+images\\+internal\\getBinaryConnectivityMatrix.m"/* pathName */
};

static emlrtRSInfo c5_eb_emlrtRSI = { 60,/* lineNo */
  "hough",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\hough.m"/* pathName */
};

static emlrtRSInfo c5_fb_emlrtRSI = { 290,/* lineNo */
  "hough",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\hough.m"/* pathName */
};

static emlrtRSInfo c5_gb_emlrtRSI = { 111,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c5_hb_emlrtRSI = { 61,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c5_ib_emlrtRSI = { 274,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c5_jb_emlrtRSI = { 317,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c5_kb_emlrtRSI = { 321,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c5_lb_emlrtRSI = { 324,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c5_mb_emlrtRSI = { 92,/* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo c5_nb_emlrtRSI = { 427,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c5_ob_emlrtRSI = { 439,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c5_pb_emlrtRSI = { 474,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c5_qb_emlrtRSI = { 463,/* lineNo */
  "houghpeaks",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pathName */
};

static emlrtRSInfo c5_rb_emlrtRSI = { 19,/* lineNo */
  "ind2sub",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\elmat\\ind2sub.m"/* pathName */
};

static emlrtRSInfo c5_sb_emlrtRSI = { 20,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c5_tb_emlrtRSI = { 183,/* lineNo */
  "sumMatrixIncludeNaN",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\sumMatrixIncludeNaN.m"/* pathName */
};

static emlrtRTEInfo c5_emlrtRTEI = { 5,/* lineNo */
  17,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2870"          /* pName */
};

static emlrtRTEInfo c5_b_emlrtRTEI = { 99,/* lineNo */
  40,                                  /* colNo */
  "blockedSummation",                  /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\datafun\\private\\blockedSummation.m"/* pName */
};

static emlrtRTEInfo c5_c_emlrtRTEI = { 729,/* lineNo */
  9,                                   /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtRTEInfo c5_d_emlrtRTEI = { 730,/* lineNo */
  37,                                  /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtRTEInfo c5_e_emlrtRTEI = { 76,/* lineNo */
  9,                                   /* colNo */
  "eml_mtimes_helper",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_helper.m"/* pName */
};

static emlrtRTEInfo c5_f_emlrtRTEI = { 730,/* lineNo */
  9,                                   /* colNo */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\edge.m"/* pName */
};

static emlrtRTEInfo c5_g_emlrtRTEI = { 191,/* lineNo */
  5,                                   /* colNo */
  "houghpeaks",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\houghpeaks.m"/* pName */
};

static emlrtBCInfo c5_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  5,                                   /* lineNo */
  23,                                  /* colNo */
  "P",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2870",         /* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_b_emlrtBCI = { 1,/* iFirst */
  180,                                 /* iLast */
  5,                                   /* lineNo */
  19,                                  /* colNo */
  "T",                                 /* aName */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2870",         /* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c5_emlrtDCI = { 5,  /* lineNo */
  19,                                  /* colNo */
  "Image Processing System/MATLAB Function2",/* fName */
  "#flightControlSystem:2870",         /* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c5_c_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  757,                                 /* lineNo */
  31,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_d_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  752,                                 /* lineNo */
  70,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_e_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  138,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_f_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  137,                                 /* lineNo */
  27,                                  /* colNo */
  "",                                  /* aName */
  "edge",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\edge.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_g_emlrtBCI = { 1,/* iFirst */
  118,                                 /* iLast */
  100,                                 /* lineNo */
  32,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_h_emlrtBCI = { 1,/* iFirst */
  158,                                 /* iLast */
  100,                                 /* lineNo */
  42,                                  /* colNo */
  "",                                  /* aName */
  "padarray",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\padarray.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c5_i_emlrtBCI = { 1,/* iFirst */
  393,                                 /* iLast */
  301,                                 /* lineNo */
  30,                                  /* colNo */
  "",                                  /* aName */
  "hough",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\hough.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c5_j_emlrtBCI = { 1,/* iFirst */
  118,                                 /* iLast */
  348,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "hough",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\hough.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c5_k_emlrtBCI = { 1,/* iFirst */
  2,                                   /* iLast */
  122,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "houghpeaks",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\houghpeaks.m",/* pName */
  3                                    /* checkKind */
};

static emlrtBCInfo c5_l_emlrtBCI = { 1,/* iFirst */
  393,                                 /* iLast */
  119,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "houghpeaks",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2022a\\toolbox\\images\\images\\eml\\houghpeaks.m",/* pName */
  0                                    /* checkKind */
};

static real_T c5_dv[13] = { 3.4813359214923059E-5, 0.00054457256285105158,
  0.0051667606200595222, 0.029732654490475543, 0.10377716120747747,
  0.21969625200024598, 0.28209557151935094, 0.21969625200024598,
  0.10377716120747747, 0.029732654490475543, 0.0051667606200595222,
  0.00054457256285105158, 3.4813359214923059E-5 };

static real_T c5_dv1[13] = { 0.0020299751839417137, 0.0102182810143517,
  0.058116735860084034, 0.19634433732941292, 0.37823877042972087,
  0.35505190018248872, 0.0, -0.35505190018248872, -0.37823877042972087,
  -0.19634433732941292, -0.058116735860084034, -0.0102182810143517,
  -0.0020299751839417137 };

static real_T c5_dv2[12] = { 0.0020299751839417137, 0.0102182810143517,
  0.058116735860084034, 0.19634433732941292, 0.37823877042972087,
  0.35505190018248872, -0.35505190018248872, -0.37823877042972087,
  -0.19634433732941292, -0.058116735860084034, -0.0102182810143517,
  -0.0020299751839417137 };

static boolean_T c5_bv[13] = { true, true, true, true, true, true, false, true,
  true, true, true, true, true };

static char_T c5_cv[32] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'h', 'o', 'u',
  'g', 'h', 'p', 'e', 'a', 'k', 's', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
  'F', 'i', 'n', 'i', 't', 'e' };

static char_T c5_cv1[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
  'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r',
  'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'F', 'i',
  'n', 'i', 't', 'e' };

static char_T c5_cv2[33] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'h', 'o', 'u',
  'g', 'h', 'p', 'e', 'a', 'k', 's', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
  'I', 'n', 't', 'e', 'g', 'e', 'r' };

static char_T c5_cv3[47] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
  'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't', 'r',
  'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd', 'I', 'n',
  't', 'e', 'g', 'e', 'r' };

/* Function Declarations */
static void initialize_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void initialize_params_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void mdl_start_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void mdl_terminate_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void mdl_cleanup_runtime_resources_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void enable_c5_flightControlSystem(SFc5_flightControlSystemInstanceStruct
  *chartInstance);
static void disable_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void sf_gateway_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void ext_mode_exec_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void c5_update_jit_animation_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void c5_do_animation_call_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static const mxArray *get_sim_state_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void set_sim_state_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance, const mxArray *c5_st);
static void initSimStructsc5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void c5_edge(SFc5_flightControlSystemInstanceStruct *chartInstance, const
                    emlrtStack *c5_sp, real_T c5_b_varargin_1[18644], boolean_T
                    c5_varargout_1[18644]);
static void c5_padImage(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, real_T c5_a_tmp[18644], real_T c5_c_a[20540]);
static void c5_imfilter(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, real_T c5_b_varargin_1[18644], real_T c5_b[18644]);
static void c5_b_padImage(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, real_T c5_a_tmp[18644], real_T c5_c_a[20060]);
static void c5_b_imfilter(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, real_T c5_b_varargin_1[18644], real_T c5_b[18644]);
static void c5_c_imfilter(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, real_T c5_b_varargin_1[18644], real_T c5_b[18644]);
static void c5_warning(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp);
static void c5_hough(SFc5_flightControlSystemInstanceStruct *chartInstance,
                     const emlrtStack *c5_sp, boolean_T c5_b_varargin_1[18644],
                     real_T c5_h[70740]);
static void c5_houghpeaks(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, real_T c5_b_varargin_1[70740], real_T c5_peaks_data[],
  int32_T c5_peaks_size[2]);
static void c5_validateattributes(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, real_T c5_c_a[70740]);
static void c5_b_validateattributes(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, real_T c5_c_a[2]);
static void c5_diff(SFc5_flightControlSystemInstanceStruct *chartInstance,
                    real_T c5_x[180], real_T c5_y[179]);
static void c5_b_diff(SFc5_flightControlSystemInstanceStruct *chartInstance,
                      real_T c5_x[179], real_T c5_y[178]);
static real_T c5_sumColumnB(SFc5_flightControlSystemInstanceStruct
  *chartInstance, real_T c5_x[178]);
static real_T c5_b_sumColumnB(SFc5_flightControlSystemInstanceStruct
  *chartInstance, real_T c5_x_data[], int32_T c5_vlen);
static real_T c5_emlrt_marshallIn(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c5_b_DegAngle, const char_T *c5_identifier);
static real_T c5_b_emlrt_marshallIn(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static uint8_T c5_c_emlrt_marshallIn(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c5_b_is_active_c5_flightControlSystem, const
  char_T *c5_identifier);
static uint8_T c5_d_emlrt_marshallIn(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId);
static void c5_slStringInitializeDynamicBuffers
  (SFc5_flightControlSystemInstanceStruct *chartInstance);
static void c5_chart_data_browse_helper(SFc5_flightControlSystemInstanceStruct
  *chartInstance, int32_T c5_ssIdNumber, const mxArray **c5_mxData, uint8_T
  *c5_isValueTooBig);
static const mxArray *c5_feval(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, const mxArray *c5_input0, const
  mxArray *c5_input1);
static void c5_b_feval(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, const mxArray *c5_input0, const mxArray *c5_input1);
static int32_T c5_div_nzp_s32(SFc5_flightControlSystemInstanceStruct
  *chartInstance, int32_T c5_numerator, int32_T c5_denominator, int32_T
  c5_EMLOvCount_src_loc, uint32_T c5_ssid_src_loc, int32_T c5_offset_src_loc,
  int32_T c5_length_src_loc);
static void init_dsm_address_info(SFc5_flightControlSystemInstanceStruct
  *chartInstance);
static void init_simulink_io_address(SFc5_flightControlSystemInstanceStruct
  *chartInstance);

/* Function Definitions */
static void initialize_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  emlrtStack c5_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c5_st.tls = chartInstance->c5_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c5_st, (const char_T *)
    "EMLRT:runTime:MexFunctionNeedsLicense", (const char_T *)"image_toolbox", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c5_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c5_is_active_c5_flightControlSystem = 0U;
}

static void initialize_params_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_terminate_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  static const uint32_T c5_decisionTxtEndIdx = 0U;
  static const uint32_T c5_decisionTxtStartIdx = 0U;
  setDebuggerFlag(chartInstance->S, true);
  setDataBrowseFcn(chartInstance->S, (void *)&c5_chart_data_browse_helper);
  chartInstance->c5_RuntimeVar = sfListenerCacheSimStruct(chartInstance->S);
  sfListenerInitializeRuntimeVars(chartInstance->c5_RuntimeVar,
    &chartInstance->c5_IsDebuggerActive,
    &chartInstance->c5_IsSequenceViewerPresent, 0, 0,
    &chartInstance->c5_mlFcnLineNumber, &chartInstance->c5_IsHeatMapPresent, 0);
  sim_mode_is_external(chartInstance->S);
  covrtCreateStateflowInstanceData(chartInstance->c5_covrtInstance, 1U, 0U, 1U,
    19U);
  covrtChartInitFcn(chartInstance->c5_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c5_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c5_decisionTxtStartIdx, &c5_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c5_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c5_covrtInstance, "", 4U, 0U, 1U, 0U, 0U, 0U,
                  0U, 0U, 0U, 0U, 0U, 0U);
  covrtEmlFcnInitFcn(chartInstance->c5_covrtInstance, 4U, 0U, 0U,
                     "eML_blk_kernel", 0, -1, 209);
}

static void mdl_cleanup_runtime_resources_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  sfListenerLightTerminate(chartInstance->c5_RuntimeVar);
  covrtDeleteStateflowInstanceData(chartInstance->c5_covrtInstance);
}

static void enable_c5_flightControlSystem(SFc5_flightControlSystemInstanceStruct
  *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  static char_T c5_b_cv[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c', 'o',
    'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  emlrtStack c5_b_st;
  emlrtStack c5_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c5_b_y = NULL;
  const mxArray *c5_y = NULL;
  real_T c5_P_data[4];
  real_T c5_b_x_data[2];
  real_T c5_x_data[2];
  real_T c5_b_DegAngle;
  real_T c5_c_y;
  real_T c5_d;
  int32_T c5_P_size[2];
  int32_T c5_x_size[2];
  int32_T c5_b_loop_ub;
  int32_T c5_b_vlen;
  int32_T c5_c_i1;
  int32_T c5_c_i2;
  int32_T c5_c_vlen;
  int32_T c5_d_vlen;
  int32_T c5_i;
  int32_T c5_i3;
  int32_T c5_i4;
  int32_T c5_i5;
  int32_T c5_i6;
  int32_T c5_i7;
  int32_T c5_loop_ub;
  int32_T c5_vlen;
  boolean_T c5_edgedBW[18644];
  boolean_T c5_b;
  boolean_T c5_b1;
  boolean_T c5_b2;
  c5_st.tls = chartInstance->c5_fEmlrtCtx;
  c5_b_st.prev = &c5_st;
  c5_b_st.tls = c5_st.tls;
  chartInstance->c5_JITTransitionAnimation[0] = 0U;
  _sfTime_ = sf_get_time(chartInstance->S);
  for (c5_i = 0; c5_i < 18644; c5_i++) {
    covrtSigUpdateFcn(chartInstance->c5_covrtInstance, 0U,
                      (*chartInstance->c5_BWimage)[c5_i]);
  }

  chartInstance->c5_sfEvent = CALL_EVENT;
  covrtEmlFcnEval(chartInstance->c5_covrtInstance, 4U, 0, 0);
  c5_b_st.site = &c5_emlrtRSI;
  for (c5_c_i1 = 0; c5_c_i1 < 18644; c5_c_i1++) {
    chartInstance->c5_b_dv[c5_c_i1] = (*chartInstance->c5_BWimage)[c5_c_i1];
  }

  c5_edge(chartInstance, &c5_b_st, chartInstance->c5_b_dv, c5_edgedBW);
  c5_b_st.site = &c5_b_emlrtRSI;
  c5_hough(chartInstance, &c5_b_st, c5_edgedBW, chartInstance->c5_H);
  c5_b_st.site = &c5_c_emlrtRSI;
  c5_houghpeaks(chartInstance, &c5_b_st, chartInstance->c5_H, c5_P_data,
                c5_P_size);
  c5_b_st.site = &c5_d_emlrtRSI;
  c5_c_i2 = 2;
  if ((c5_c_i2 < 1) || (c5_c_i2 > c5_P_size[1])) {
    emlrtDynamicBoundsCheckR2012b(c5_c_i2, 1, c5_P_size[1], &c5_emlrtBCI,
      &c5_b_st);
  }

  c5_i3 = c5_c_i2 - 1;
  c5_i4 = c5_P_size[0];
  c5_x_size[1] = c5_i4;
  c5_loop_ub = c5_i4 - 1;
  for (c5_i5 = 0; c5_i5 <= c5_loop_ub; c5_i5++) {
    c5_d = c5_P_data[c5_i5 + c5_P_size[0] * c5_i3];
    if (c5_d != (real_T)(int32_T)muDoubleScalarFloor(c5_d)) {
      emlrtIntegerCheckR2012b(c5_d, &c5_emlrtDCI, &c5_b_st);
    }

    c5_i6 = (int32_T)c5_d;
    if ((c5_i6 < 1) || (c5_i6 > 180)) {
      emlrtDynamicBoundsCheckR2012b(c5_i6, 1, 180, &c5_b_emlrtBCI, &c5_b_st);
    }

    c5_x_data[c5_i5] = -90.0 + (real_T)(c5_i6 - 1);
  }

  c5_b = (c5_x_size[1] == 1);
  if (c5_b || ((real_T)c5_x_size[1] != 1.0)) {
    c5_b1 = true;
  } else {
    c5_b1 = false;
  }

  if (!c5_b1) {
    c5_y = NULL;
    sf_mex_assign(&c5_y, sf_mex_create("y", c5_b_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    c5_b_y = NULL;
    sf_mex_assign(&c5_b_y, sf_mex_create("y", c5_b_cv, 10, 0U, 1U, 0U, 2, 1, 36),
                  false);
    sf_mex_call(&c5_b_st, &c5_l_emlrtMCI, "error", 0U, 2U, 14, c5_y, 14,
                sf_mex_call(&c5_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c5_b_st, NULL, "message", 1U, 1U, 14, c5_b_y)));
  }

  c5_vlen = c5_x_size[1];
  c5_b_vlen = c5_vlen;
  c5_b2 = (c5_x_size[1] == 0);
  if (c5_b2 || (c5_b_vlen == 0)) {
    c5_c_y = 0.0;
  } else {
    c5_b_loop_ub = c5_x_size[1] - 1;
    for (c5_i7 = 0; c5_i7 <= c5_b_loop_ub; c5_i7++) {
      c5_b_x_data[c5_i7] = c5_x_data[c5_i7];
    }

    c5_c_vlen = c5_b_vlen;
    c5_d_vlen = c5_c_vlen;
    c5_c_y = c5_b_sumColumnB(chartInstance, c5_b_x_data, c5_d_vlen);
  }

  c5_b_DegAngle = c5_c_y / (real_T)c5_x_size[1];
  *chartInstance->c5_DegAngle = c5_b_DegAngle;
  c5_do_animation_call_c5_flightControlSystem(chartInstance);
  covrtSigUpdateFcn(chartInstance->c5_covrtInstance, 1U,
                    *chartInstance->c5_DegAngle);
}

static void ext_mode_exec_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c5_update_jit_animation_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c5_do_animation_call_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  sfDoAnimationWrapper(chartInstance->S, false, true);
  sfDoAnimationWrapper(chartInstance->S, false, false);
}

static const mxArray *get_sim_state_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  const mxArray *c5_b_y = NULL;
  const mxArray *c5_c_y = NULL;
  const mxArray *c5_st;
  const mxArray *c5_y = NULL;
  c5_st = NULL;
  c5_st = NULL;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_createcellmatrix(2, 1), false);
  c5_b_y = NULL;
  sf_mex_assign(&c5_b_y, sf_mex_create("y", chartInstance->c5_DegAngle, 0, 0U,
    0U, 0U, 0), false);
  sf_mex_setcell(c5_y, 0, c5_b_y);
  c5_c_y = NULL;
  sf_mex_assign(&c5_c_y, sf_mex_create("y",
    &chartInstance->c5_is_active_c5_flightControlSystem, 3, 0U, 0U, 0U, 0),
                false);
  sf_mex_setcell(c5_y, 1, c5_c_y);
  sf_mex_assign(&c5_st, c5_y, false);
  return c5_st;
}

static void set_sim_state_c5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance, const mxArray *c5_st)
{
  const mxArray *c5_u;
  chartInstance->c5_doneDoubleBufferReInit = true;
  c5_u = sf_mex_dup(c5_st);
  *chartInstance->c5_DegAngle = c5_emlrt_marshallIn(chartInstance, sf_mex_dup
    (sf_mex_getcell(c5_u, 0)), "DegAngle");
  chartInstance->c5_is_active_c5_flightControlSystem = c5_c_emlrt_marshallIn
    (chartInstance, sf_mex_dup(sf_mex_getcell(c5_u, 1)),
     "is_active_c5_flightControlSystem");
  sf_mex_destroy(&c5_u);
  sf_mex_destroy(&c5_st);
}

static void initSimStructsc5_flightControlSystem
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

const mxArray *sf_c5_flightControlSystem_get_eml_resolved_functions_info(void)
{
  const mxArray *c5_nameCaptureInfo = NULL;
  c5_nameCaptureInfo = NULL;
  sf_mex_assign(&c5_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1U, 0U, 2, 0, 1), false);
  return c5_nameCaptureInfo;
}

static void c5_edge(SFc5_flightControlSystemInstanceStruct *chartInstance, const
                    emlrtStack *c5_sp, real_T c5_b_varargin_1[18644], boolean_T
                    c5_varargout_1[18644])
{
  emlrtStack c5_b_st;
  emlrtStack c5_c_st;
  emlrtStack c5_d_st;
  emlrtStack c5_st;
  real_T c5_counts[64];
  real_T c5_connDimsT[2];
  real_T c5_outSizeT[2];
  real_T c5_padSizeT[2];
  real_T c5_startT[2];
  real_T c5_b_data[1];
  real_T c5_highThresh_data[1];
  real_T c5_lowThresh_data[1];
  real_T c5_b;
  real_T c5_b_b;
  real_T c5_b_idx;
  real_T c5_b_lowThresh;
  real_T c5_b_r;
  real_T c5_b_x;
  real_T c5_b_x1;
  real_T c5_b_x2;
  real_T c5_b_y;
  real_T c5_c_a;
  real_T c5_c_b;
  real_T c5_c_varargin_1;
  real_T c5_c_x;
  real_T c5_c_y;
  real_T c5_d_a;
  real_T c5_d_b;
  real_T c5_d_i;
  real_T c5_d_idx;
  real_T c5_d_x;
  real_T c5_d_y;
  real_T c5_e_a;
  real_T c5_e_x;
  real_T c5_e_y;
  real_T c5_f_a;
  real_T c5_f_x;
  real_T c5_f_y;
  real_T c5_g_a;
  real_T c5_g_b;
  real_T c5_g_x;
  real_T c5_g_y;
  real_T c5_h_a;
  real_T c5_h_x;
  real_T c5_h_y;
  real_T c5_highThresh;
  real_T c5_highThreshTemp;
  real_T c5_i_a;
  real_T c5_i_x;
  real_T c5_i_y;
  real_T c5_j_x;
  real_T c5_k_x;
  real_T c5_lowThresh;
  real_T c5_magmax;
  real_T c5_out;
  real_T c5_r;
  real_T c5_sum;
  real_T c5_varargin_2;
  real_T c5_x;
  real_T c5_x1;
  real_T c5_x2;
  real_T c5_y;
  int32_T c5_highThresh_size[1];
  int32_T c5_lowThresh_size[1];
  int32_T c5_b_c;
  int32_T c5_b_i;
  int32_T c5_c;
  int32_T c5_c_i;
  int32_T c5_c_i1;
  int32_T c5_c_i2;
  int32_T c5_i;
  int32_T c5_i10;
  int32_T c5_i11;
  int32_T c5_i12;
  int32_T c5_i13;
  int32_T c5_i14;
  int32_T c5_i15;
  int32_T c5_i16;
  int32_T c5_i17;
  int32_T c5_i18;
  int32_T c5_i19;
  int32_T c5_i20;
  int32_T c5_i21;
  int32_T c5_i22;
  int32_T c5_i3;
  int32_T c5_i4;
  int32_T c5_i5;
  int32_T c5_i6;
  int32_T c5_i7;
  int32_T c5_i8;
  int32_T c5_i9;
  int32_T c5_idx;
  int32_T c5_loop_ub;
  int8_T c5_c_idx;
  boolean_T c5_E[18644];
  boolean_T c5_conn[13];
  boolean_T c5_b_modeFlag;
  boolean_T c5_c_modeFlag;
  boolean_T c5_e_b;
  boolean_T c5_f_b;
  boolean_T c5_modeFlag;
  boolean_T c5_nanFlag;
  boolean_T c5_tooBig;
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  c5_st.site = &c5_e_emlrtRSI;
  c5_b_st.prev = &c5_st;
  c5_b_st.tls = c5_st.tls;
  c5_c_st.prev = &c5_b_st;
  c5_c_st.tls = c5_b_st.tls;
  c5_d_st.prev = &c5_c_st;
  c5_d_st.tls = c5_c_st.tls;
  c5_b_st.site = &c5_h_emlrtRSI;
  c5_c_st.site = &c5_l_emlrtRSI;
  c5_padImage(chartInstance, &c5_c_st, c5_b_varargin_1, chartInstance->c5_a);
  c5_c_st.site = &c5_m_emlrtRSI;
  c5_d_st.site = &c5_o_emlrtRSI;
  c5_tooBig = true;
  for (c5_i = 0; c5_i < 2; c5_i++) {
    c5_tooBig = false;
  }

  if (!c5_tooBig) {
    c5_modeFlag = true;
  } else {
    c5_modeFlag = false;
  }

  if (c5_modeFlag) {
    c5_b_modeFlag = true;
  } else {
    c5_b_modeFlag = false;
  }

  c5_c_modeFlag = c5_b_modeFlag;
  if (c5_c_modeFlag) {
    for (c5_c_i1 = 0; c5_c_i1 < 2; c5_c_i1++) {
      c5_padSizeT[c5_c_i1] = 130.0 + 28.0 * (real_T)c5_c_i1;
    }

    for (c5_i3 = 0; c5_i3 < 2; c5_i3++) {
      c5_outSizeT[c5_i3] = 118.0 + 40.0 * (real_T)c5_i3;
    }

    for (c5_i5 = 0; c5_i5 < 2; c5_i5++) {
      c5_connDimsT[c5_i5] = 13.0 + -12.0 * (real_T)c5_i5;
    }

    ippfilter_real64(&chartInstance->c5_a[0], &chartInstance->c5_i1[0],
                     &c5_outSizeT[0], 2.0, &c5_padSizeT[0], &c5_dv[0],
                     &c5_connDimsT[0], true);
  } else {
    for (c5_b_i = 0; c5_b_i < 13; c5_b_i++) {
      c5_conn[c5_b_i] = true;
    }

    for (c5_c_i2 = 0; c5_c_i2 < 2; c5_c_i2++) {
      c5_padSizeT[c5_c_i2] = 130.0 + 28.0 * (real_T)c5_c_i2;
    }

    for (c5_i4 = 0; c5_i4 < 2; c5_i4++) {
      c5_outSizeT[c5_i4] = 118.0 + 40.0 * (real_T)c5_i4;
    }

    for (c5_i6 = 0; c5_i6 < 2; c5_i6++) {
      c5_connDimsT[c5_i6] = 13.0 + -12.0 * (real_T)c5_i6;
    }

    for (c5_i7 = 0; c5_i7 < 2; c5_i7++) {
      c5_startT[c5_i7] = 6.0 + -6.0 * (real_T)c5_i7;
    }

    imfilter_real64(&chartInstance->c5_a[0], &chartInstance->c5_i1[0], 2.0,
                    &c5_outSizeT[0], 2.0, &c5_padSizeT[0], &c5_dv[0], 13.0,
                    &c5_conn[0], 2.0, &c5_connDimsT[0], &c5_startT[0], 2.0, true,
                    true);
  }

  c5_b_st.site = &c5_i_emlrtRSI;
  for (c5_i8 = 0; c5_i8 < 18644; c5_i8++) {
    chartInstance->c5_b_i1[c5_i8] = chartInstance->c5_i1[c5_i8];
  }

  c5_imfilter(chartInstance, &c5_b_st, chartInstance->c5_b_i1,
              chartInstance->c5_i1);
  c5_b_st.site = &c5_j_emlrtRSI;
  c5_b_imfilter(chartInstance, &c5_b_st, c5_b_varargin_1, chartInstance->c5_i2);
  c5_b_st.site = &c5_k_emlrtRSI;
  for (c5_i9 = 0; c5_i9 < 18644; c5_i9++) {
    chartInstance->c5_b_i2[c5_i9] = chartInstance->c5_i2[c5_i9];
  }

  c5_c_imfilter(chartInstance, &c5_b_st, chartInstance->c5_b_i2,
                chartInstance->c5_i2);
  c5_x = chartInstance->c5_i1[0];
  c5_y = chartInstance->c5_i2[0];
  c5_c_a = c5_x;
  c5_b = c5_y;
  c5_b_x = c5_c_a;
  c5_b_y = c5_b;
  c5_x1 = c5_b_x;
  c5_x2 = c5_b_y;
  c5_d_a = c5_x1;
  c5_b_b = c5_x2;
  c5_r = muDoubleScalarHypot(c5_d_a, c5_b_b);
  chartInstance->c5_magGrad[0] = c5_r;
  c5_magmax = chartInstance->c5_magGrad[0];
  for (c5_idx = 0; c5_idx < 18643; c5_idx++) {
    c5_b_idx = (real_T)c5_idx + 2.0;
    c5_c_x = chartInstance->c5_i1[(int32_T)c5_b_idx - 1];
    c5_c_y = chartInstance->c5_i2[(int32_T)c5_b_idx - 1];
    c5_e_a = c5_c_x;
    c5_c_b = c5_c_y;
    c5_d_x = c5_e_a;
    c5_d_y = c5_c_b;
    c5_b_x1 = c5_d_x;
    c5_b_x2 = c5_d_y;
    c5_f_a = c5_b_x1;
    c5_d_b = c5_b_x2;
    c5_b_r = muDoubleScalarHypot(c5_f_a, c5_d_b);
    chartInstance->c5_magGrad[(int32_T)c5_b_idx - 1] = c5_b_r;
    c5_c_varargin_1 = chartInstance->c5_magGrad[(int32_T)c5_b_idx - 1];
    c5_varargin_2 = c5_magmax;
    c5_f_x = c5_c_varargin_1;
    c5_e_y = c5_varargin_2;
    c5_g_x = c5_f_x;
    c5_f_y = c5_e_y;
    c5_h_x = c5_g_x;
    c5_g_y = c5_f_y;
    c5_g_a = c5_h_x;
    c5_g_b = c5_g_y;
    c5_j_x = c5_g_a;
    c5_h_y = c5_g_b;
    c5_k_x = c5_j_x;
    c5_i_y = c5_h_y;
    c5_magmax = muDoubleScalarMax(c5_k_x, c5_i_y);
  }

  if (c5_magmax > 0.0) {
    for (c5_i10 = 0; c5_i10 < 18644; c5_i10++) {
      chartInstance->c5_magGrad[c5_i10] /= c5_magmax;
    }
  }

  c5_st.site = &c5_f_emlrtRSI;
  c5_b_st.site = &c5_s_emlrtRSI;
  c5_c_st.site = &c5_t_emlrtRSI;
  c5_d_st.site = &c5_u_emlrtRSI;
  c5_out = 1.0;
  getnumcores(&c5_out);
  for (c5_i11 = 0; c5_i11 < 64; c5_i11++) {
    c5_counts[c5_i11] = 0.0;
  }

  c5_nanFlag = false;
  for (c5_c_i = 0; c5_c_i < 18644; c5_c_i++) {
    c5_d_i = (real_T)c5_c_i + 1.0;
    c5_e_x = chartInstance->c5_magGrad[(int32_T)c5_d_i - 1];
    c5_e_b = muDoubleScalarIsNaN(c5_e_x);
    if (c5_e_b) {
      c5_nanFlag = true;
      c5_d_idx = 0.0;
    } else {
      c5_d_idx = chartInstance->c5_magGrad[(int32_T)c5_d_i - 1] * 63.0 + 0.5;
    }

    if (c5_d_idx > 63.0) {
      c5_counts[63]++;
    } else {
      c5_i_x = chartInstance->c5_magGrad[(int32_T)c5_d_i - 1];
      c5_f_b = muDoubleScalarIsInf(c5_i_x);
      if (c5_f_b) {
        c5_counts[63]++;
      } else {
        c5_h_a = c5_d_idx;
        c5_c = (int32_T)c5_h_a;
        c5_i_a = c5_d_idx;
        c5_b_c = (int32_T)c5_i_a;
        c5_counts[c5_c] = c5_counts[c5_b_c] + 1.0;
      }
    }
  }

  if (c5_nanFlag) {
    c5_d_st.site = &c5_v_emlrtRSI;
    c5_warning(chartInstance, &c5_d_st);
  }

  c5_sum = 0.0;
  c5_c_idx = 1;
  while ((!(c5_sum > 13050.8)) && ((real_T)c5_c_idx <= 64.0)) {
    c5_sum += c5_counts[c5_c_idx - 1];
    c5_i13 = c5_c_idx + 1;
    if (c5_i13 > 127) {
      c5_i13 = 127;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    } else if (c5_i13 < -128) {
      c5_i13 = -128;
      sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
    }

    c5_c_idx = (int8_T)c5_i13;
  }

  c5_i12 = c5_c_idx - 1;
  if (c5_i12 > 127) {
    c5_i12 = 127;
    sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
  } else if (c5_i12 < -128) {
    c5_i12 = -128;
    sf_data_saturate_error(chartInstance->S, 1U, 0, 0);
  }

  c5_highThreshTemp = (real_T)(int8_T)c5_i12 / 64.0;
  if (((real_T)c5_c_idx > 64.0) && (!(c5_sum > 13050.8))) {
    c5_highThresh_size[0] = 0;
    c5_lowThresh_size[0] = 0;
  } else {
    c5_highThresh_size[0] = 1;
    c5_highThresh_data[0] = c5_highThreshTemp;
    c5_loop_ub = c5_highThresh_size[0] - 1;
    for (c5_i14 = 0; c5_i14 <= c5_loop_ub; c5_i14++) {
      c5_b_data[c5_i14] = c5_highThresh_data[c5_i14];
    }

    c5_b_data[0] *= 0.4;
    c5_lowThresh_size[0] = 1;
    c5_lowThresh_data[0] = c5_b_data[0];
  }

  c5_st.site = &c5_g_emlrtRSI;
  c5_i15 = 1;
  if ((c5_i15 < 1) || (c5_i15 > c5_lowThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c5_i15, 1, c5_lowThresh_size[0],
      &c5_d_emlrtBCI, &c5_st);
  }

  c5_b_st.site = &c5_x_emlrtRSI;
  c5_lowThresh = c5_lowThresh_data[0];
  c5_c_st.site = &c5_ab_emlrtRSI;
  c5_b_lowThresh = c5_lowThresh;
  for (c5_i16 = 0; c5_i16 < 18644; c5_i16++) {
    c5_E[c5_i16] = false;
  }

  for (c5_i17 = 0; c5_i17 < 2; c5_i17++) {
    c5_connDimsT[c5_i17] = 118.0 + 40.0 * (real_T)c5_i17;
  }

  cannythresholding_real64_tbb(&chartInstance->c5_i1[0], &chartInstance->c5_i2[0],
    &chartInstance->c5_magGrad[0], &c5_connDimsT[0], c5_b_lowThresh, &c5_E[0]);
  c5_i18 = 1;
  if ((c5_i18 < 1) || (c5_i18 > c5_highThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c5_i18, 1, c5_highThresh_size[0],
      &c5_c_emlrtBCI, &c5_st);
  }

  c5_highThresh = c5_highThresh_data[0];
  for (c5_i19 = 0; c5_i19 < 18644; c5_i19++) {
    c5_varargout_1[c5_i19] = (chartInstance->c5_magGrad[c5_i19] > c5_highThresh);
  }

  c5_b_st.site = &c5_y_emlrtRSI;
  c5_c_st.site = &c5_bb_emlrtRSI;
  c5_c_st.site = &c5_cb_emlrtRSI;
  for (c5_i20 = 0; c5_i20 < 2; c5_i20++) {
    c5_connDimsT[c5_i20] = 118.0 + 40.0 * (real_T)c5_i20;
  }

  ippreconstruct_uint8((uint8_T *)&c5_varargout_1[0], (uint8_T *)&c5_E[0],
                       &c5_connDimsT[0], 2.0);
  c5_i21 = 1;
  if ((c5_i21 < 1) || (c5_i21 > c5_lowThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c5_i21, 1, c5_lowThresh_size[0],
      &c5_f_emlrtBCI, (void *)c5_sp);
  }

  c5_i22 = 1;
  if ((c5_i22 < 1) || (c5_i22 > c5_highThresh_size[0])) {
    emlrtDynamicBoundsCheckR2012b(c5_i22, 1, c5_highThresh_size[0],
      &c5_e_emlrtBCI, (void *)c5_sp);
  }
}

static void c5_padImage(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, real_T c5_a_tmp[18644], real_T c5_c_a[20540])
{
  static int32_T c5_idxA[316] = { 1, 1, 1, 1, 1, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9,
    10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28,
    29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,
    48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66,
    67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85,
    86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103,
    104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118,
    118, 118, 118, 118, 118, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12,
    13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31,
    32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
    51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69,
    70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88,
    89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105,
    106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120,
    121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135,
    136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150,
    151, 152, 153, 154, 155, 156, 157, 158 };

  emlrtStack c5_st;
  real_T c5_b_i;
  real_T c5_b_j;
  int32_T c5_c_i;
  int32_T c5_i;
  int32_T c5_j;
  (void)chartInstance;
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  c5_st.site = &c5_n_emlrtRSI;
  for (c5_j = 0; c5_j < 158; c5_j++) {
    c5_b_j = (real_T)c5_j + 1.0;
    for (c5_i = 0; c5_i < 130; c5_i++) {
      c5_b_i = (real_T)c5_i + 1.0;
      if ((c5_idxA[(int32_T)c5_b_i - 1] < 1) || (c5_idxA[(int32_T)c5_b_i - 1] >
           118)) {
        emlrtDynamicBoundsCheckR2012b(c5_idxA[(int32_T)c5_b_i - 1], 1, 118,
          &c5_g_emlrtBCI, &c5_st);
      }

      c5_c_i = c5_idxA[(int32_T)c5_b_j + 157];
      if ((c5_c_i < 1) || (c5_c_i > 158)) {
        emlrtDynamicBoundsCheckR2012b(c5_c_i, 1, 158, &c5_h_emlrtBCI, &c5_st);
      }

      c5_c_a[((int32_T)c5_b_i + 130 * ((int32_T)c5_b_j - 1)) - 1] = c5_a_tmp
        [(c5_idxA[(int32_T)c5_b_i - 1] + 118 * (c5_c_i - 1)) - 1];
    }
  }
}

static void c5_imfilter(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, real_T c5_b_varargin_1[18644], real_T c5_b[18644])
{
  emlrtStack c5_st;
  real_T c5_c_a[20060];
  real_T c5_connDimsT[2];
  real_T c5_outSizeT[2];
  real_T c5_padSizeT[2];
  real_T c5_startT[2];
  int32_T c5_b_i;
  int32_T c5_c_i1;
  int32_T c5_c_i2;
  int32_T c5_i;
  int32_T c5_i3;
  int32_T c5_i4;
  int32_T c5_i5;
  int32_T c5_i6;
  boolean_T c5_b_modeFlag;
  boolean_T c5_c_modeFlag;
  boolean_T c5_modeFlag;
  boolean_T c5_tooBig;
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  c5_st.site = &c5_l_emlrtRSI;
  c5_b_padImage(chartInstance, &c5_st, c5_b_varargin_1, c5_c_a);
  c5_tooBig = true;
  for (c5_i = 0; c5_i < 2; c5_i++) {
    c5_tooBig = false;
  }

  if (!c5_tooBig) {
    c5_modeFlag = true;
  } else {
    c5_modeFlag = false;
  }

  if (c5_modeFlag) {
    c5_b_modeFlag = true;
  } else {
    c5_b_modeFlag = false;
  }

  c5_c_modeFlag = c5_b_modeFlag;
  if (c5_c_modeFlag) {
    for (c5_c_i1 = 0; c5_c_i1 < 2; c5_c_i1++) {
      c5_padSizeT[c5_c_i1] = 118.0 + 52.0 * (real_T)c5_c_i1;
    }

    for (c5_i3 = 0; c5_i3 < 2; c5_i3++) {
      c5_outSizeT[c5_i3] = 118.0 + 40.0 * (real_T)c5_i3;
    }

    for (c5_i5 = 0; c5_i5 < 2; c5_i5++) {
      c5_connDimsT[c5_i5] = 1.0 + 12.0 * (real_T)c5_i5;
    }

    ippfilter_real64(&c5_c_a[0], &c5_b[0], &c5_outSizeT[0], 2.0, &c5_padSizeT[0],
                     &c5_dv1[0], &c5_connDimsT[0], true);
  } else {
    for (c5_b_i = 0; c5_b_i < 2; c5_b_i++) {
      c5_padSizeT[c5_b_i] = 118.0 + 52.0 * (real_T)c5_b_i;
    }

    for (c5_c_i2 = 0; c5_c_i2 < 2; c5_c_i2++) {
      c5_outSizeT[c5_c_i2] = 118.0 + 40.0 * (real_T)c5_c_i2;
    }

    for (c5_i4 = 0; c5_i4 < 2; c5_i4++) {
      c5_connDimsT[c5_i4] = 1.0 + 12.0 * (real_T)c5_i4;
    }

    for (c5_i6 = 0; c5_i6 < 2; c5_i6++) {
      c5_startT[c5_i6] = 6.0 * (real_T)c5_i6;
    }

    imfilter_real64(&c5_c_a[0], &c5_b[0], 2.0, &c5_outSizeT[0], 2.0,
                    &c5_padSizeT[0], &c5_dv2[0], 12.0, &c5_bv[0], 2.0,
                    &c5_connDimsT[0], &c5_startT[0], 2.0, true, true);
  }
}

static void c5_b_padImage(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, real_T c5_a_tmp[18644], real_T c5_c_a[20060])
{
  static int32_T c5_idxA[340] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
    15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33,
    34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52,
    53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71,
    72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
    91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107,
    108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1,
    2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22,
    23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41,
    42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60,
    61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79,
    80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98,
    99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113,
    114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128,
    129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143,
    144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158,
    158, 158, 158, 158, 158, 158 };

  emlrtStack c5_st;
  real_T c5_b_i;
  real_T c5_b_j;
  int32_T c5_c_i;
  int32_T c5_i;
  int32_T c5_j;
  (void)chartInstance;
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  c5_st.site = &c5_n_emlrtRSI;
  for (c5_j = 0; c5_j < 170; c5_j++) {
    c5_b_j = (real_T)c5_j + 1.0;
    for (c5_i = 0; c5_i < 118; c5_i++) {
      c5_b_i = (real_T)c5_i + 1.0;
      if ((c5_idxA[(int32_T)c5_b_i - 1] < 1) || (c5_idxA[(int32_T)c5_b_i - 1] >
           118)) {
        emlrtDynamicBoundsCheckR2012b(c5_idxA[(int32_T)c5_b_i - 1], 1, 118,
          &c5_g_emlrtBCI, &c5_st);
      }

      c5_c_i = c5_idxA[(int32_T)c5_b_j + 169];
      if ((c5_c_i < 1) || (c5_c_i > 158)) {
        emlrtDynamicBoundsCheckR2012b(c5_c_i, 1, 158, &c5_h_emlrtBCI, &c5_st);
      }

      c5_c_a[((int32_T)c5_b_i + 118 * ((int32_T)c5_b_j - 1)) - 1] = c5_a_tmp
        [(c5_idxA[(int32_T)c5_b_i - 1] + 118 * (c5_c_i - 1)) - 1];
    }
  }
}

static void c5_b_imfilter(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, real_T c5_b_varargin_1[18644], real_T c5_b[18644])
{
  emlrtStack c5_st;
  real_T c5_c_a[20060];
  real_T c5_connDimsT[2];
  real_T c5_outSizeT[2];
  real_T c5_padSizeT[2];
  real_T c5_startT[2];
  int32_T c5_b_i;
  int32_T c5_c_i1;
  int32_T c5_c_i2;
  int32_T c5_i;
  int32_T c5_i3;
  int32_T c5_i4;
  int32_T c5_i5;
  int32_T c5_i6;
  int32_T c5_i7;
  boolean_T c5_conn[13];
  boolean_T c5_b_modeFlag;
  boolean_T c5_c_modeFlag;
  boolean_T c5_modeFlag;
  boolean_T c5_tooBig;
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  c5_st.site = &c5_l_emlrtRSI;
  c5_b_padImage(chartInstance, &c5_st, c5_b_varargin_1, c5_c_a);
  c5_tooBig = true;
  for (c5_i = 0; c5_i < 2; c5_i++) {
    c5_tooBig = false;
  }

  if (!c5_tooBig) {
    c5_modeFlag = true;
  } else {
    c5_modeFlag = false;
  }

  if (c5_modeFlag) {
    c5_b_modeFlag = true;
  } else {
    c5_b_modeFlag = false;
  }

  c5_c_modeFlag = c5_b_modeFlag;
  if (c5_c_modeFlag) {
    for (c5_c_i1 = 0; c5_c_i1 < 2; c5_c_i1++) {
      c5_padSizeT[c5_c_i1] = 118.0 + 52.0 * (real_T)c5_c_i1;
    }

    for (c5_i3 = 0; c5_i3 < 2; c5_i3++) {
      c5_outSizeT[c5_i3] = 118.0 + 40.0 * (real_T)c5_i3;
    }

    for (c5_i5 = 0; c5_i5 < 2; c5_i5++) {
      c5_connDimsT[c5_i5] = 1.0 + 12.0 * (real_T)c5_i5;
    }

    ippfilter_real64(&c5_c_a[0], &c5_b[0], &c5_outSizeT[0], 2.0, &c5_padSizeT[0],
                     &c5_dv[0], &c5_connDimsT[0], true);
  } else {
    for (c5_b_i = 0; c5_b_i < 13; c5_b_i++) {
      c5_conn[c5_b_i] = true;
    }

    for (c5_c_i2 = 0; c5_c_i2 < 2; c5_c_i2++) {
      c5_padSizeT[c5_c_i2] = 118.0 + 52.0 * (real_T)c5_c_i2;
    }

    for (c5_i4 = 0; c5_i4 < 2; c5_i4++) {
      c5_outSizeT[c5_i4] = 118.0 + 40.0 * (real_T)c5_i4;
    }

    for (c5_i6 = 0; c5_i6 < 2; c5_i6++) {
      c5_connDimsT[c5_i6] = 1.0 + 12.0 * (real_T)c5_i6;
    }

    for (c5_i7 = 0; c5_i7 < 2; c5_i7++) {
      c5_startT[c5_i7] = 6.0 * (real_T)c5_i7;
    }

    imfilter_real64(&c5_c_a[0], &c5_b[0], 2.0, &c5_outSizeT[0], 2.0,
                    &c5_padSizeT[0], &c5_dv[0], 13.0, &c5_conn[0], 2.0,
                    &c5_connDimsT[0], &c5_startT[0], 2.0, true, true);
  }
}

static void c5_c_imfilter(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, real_T c5_b_varargin_1[18644], real_T c5_b[18644])
{
  emlrtStack c5_st;
  real_T c5_connDimsT[2];
  real_T c5_outSizeT[2];
  real_T c5_padSizeT[2];
  real_T c5_startT[2];
  int32_T c5_b_i;
  int32_T c5_c_i1;
  int32_T c5_c_i2;
  int32_T c5_i;
  int32_T c5_i3;
  int32_T c5_i4;
  int32_T c5_i5;
  int32_T c5_i6;
  boolean_T c5_b_modeFlag;
  boolean_T c5_c_modeFlag;
  boolean_T c5_modeFlag;
  boolean_T c5_tooBig;
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  c5_st.site = &c5_l_emlrtRSI;
  c5_padImage(chartInstance, &c5_st, c5_b_varargin_1, chartInstance->c5_b_a);
  c5_tooBig = true;
  for (c5_i = 0; c5_i < 2; c5_i++) {
    c5_tooBig = false;
  }

  if (!c5_tooBig) {
    c5_modeFlag = true;
  } else {
    c5_modeFlag = false;
  }

  if (c5_modeFlag) {
    c5_b_modeFlag = true;
  } else {
    c5_b_modeFlag = false;
  }

  c5_c_modeFlag = c5_b_modeFlag;
  if (c5_c_modeFlag) {
    for (c5_c_i1 = 0; c5_c_i1 < 2; c5_c_i1++) {
      c5_padSizeT[c5_c_i1] = 130.0 + 28.0 * (real_T)c5_c_i1;
    }

    for (c5_i3 = 0; c5_i3 < 2; c5_i3++) {
      c5_outSizeT[c5_i3] = 118.0 + 40.0 * (real_T)c5_i3;
    }

    for (c5_i5 = 0; c5_i5 < 2; c5_i5++) {
      c5_connDimsT[c5_i5] = 13.0 + -12.0 * (real_T)c5_i5;
    }

    ippfilter_real64(&chartInstance->c5_b_a[0], &c5_b[0], &c5_outSizeT[0], 2.0,
                     &c5_padSizeT[0], &c5_dv1[0], &c5_connDimsT[0], true);
  } else {
    for (c5_b_i = 0; c5_b_i < 2; c5_b_i++) {
      c5_padSizeT[c5_b_i] = 130.0 + 28.0 * (real_T)c5_b_i;
    }

    for (c5_c_i2 = 0; c5_c_i2 < 2; c5_c_i2++) {
      c5_outSizeT[c5_c_i2] = 118.0 + 40.0 * (real_T)c5_c_i2;
    }

    for (c5_i4 = 0; c5_i4 < 2; c5_i4++) {
      c5_connDimsT[c5_i4] = 13.0 + -12.0 * (real_T)c5_i4;
    }

    for (c5_i6 = 0; c5_i6 < 2; c5_i6++) {
      c5_startT[c5_i6] = 6.0 + -6.0 * (real_T)c5_i6;
    }

    imfilter_real64(&chartInstance->c5_b_a[0], &c5_b[0], 2.0, &c5_outSizeT[0],
                    2.0, &c5_padSizeT[0], &c5_dv2[0], 12.0, &c5_bv[0], 2.0,
                    &c5_connDimsT[0], &c5_startT[0], 2.0, true, true);
  }
}

static void c5_warning(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp)
{
  static char_T c5_msgID[27] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'i', 'm',
    'h', 'i', 's', 't', 'c', ':', 'i', 'n', 'p', 'u', 't', 'H', 'a', 's', 'N',
    'a', 'N', 's' };

  static char_T c5_b_cv[7] = { 'w', 'a', 'r', 'n', 'i', 'n', 'g' };

  static char_T c5_b_cv1[7] = { 'm', 'e', 's', 's', 'a', 'g', 'e' };

  emlrtStack c5_st;
  const mxArray *c5_b_y = NULL;
  const mxArray *c5_c_y = NULL;
  const mxArray *c5_y = NULL;
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  c5_y = NULL;
  sf_mex_assign(&c5_y, sf_mex_create("y", c5_b_cv, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c5_b_y = NULL;
  sf_mex_assign(&c5_b_y, sf_mex_create("y", c5_b_cv1, 10, 0U, 1U, 0U, 2, 1, 7),
                false);
  c5_c_y = NULL;
  sf_mex_assign(&c5_c_y, sf_mex_create("y", c5_msgID, 10, 0U, 1U, 0U, 2, 1, 27),
                false);
  c5_st.site = &c5_w_emlrtRSI;
  c5_b_feval(chartInstance, &c5_st, c5_y, c5_feval(chartInstance, &c5_st, c5_b_y,
              c5_c_y));
}

static void c5_hough(SFc5_flightControlSystemInstanceStruct *chartInstance,
                     const emlrtStack *c5_sp, boolean_T c5_b_varargin_1[18644],
                     real_T c5_h[70740])
{
  emlrtStack c5_b_st;
  emlrtStack c5_st;
  real_T c5_cost[180];
  real_T c5_sint[180];
  real_T c5_tempBin[118];
  real_T c5_b_j;
  real_T c5_b_k;
  real_T c5_b_x;
  real_T c5_c_x;
  real_T c5_d_j;
  real_T c5_d_x;
  real_T c5_e_i;
  real_T c5_e_x;
  real_T c5_myRho;
  real_T c5_tempNum;
  real_T c5_x;
  int32_T c5_nonZeroPixelMatrix[18644];
  int32_T c5_rhoIdxVector[393];
  int32_T c5_numNonZeros[158];
  int32_T c5_b_i;
  int32_T c5_b_thetaIdx;
  int32_T c5_c;
  int32_T c5_c_a;
  int32_T c5_c_i;
  int32_T c5_c_i1;
  int32_T c5_c_i2;
  int32_T c5_c_j;
  int32_T c5_d_i;
  int32_T c5_f_i;
  int32_T c5_i;
  int32_T c5_i3;
  int32_T c5_j;
  int32_T c5_k;
  int32_T c5_n;
  int32_T c5_rhoIdx;
  int32_T c5_thetaIdx;
  int32_T c5_y;
  boolean_T c5_exitg1;
  (void)chartInstance;
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  c5_st.site = &c5_eb_emlrtRSI;
  c5_b_st.prev = &c5_st;
  c5_b_st.tls = c5_st.tls;
  for (c5_i = 0; c5_i < 180; c5_i++) {
    c5_b_i = c5_i;
    c5_x = (-90.0 + (real_T)c5_b_i) * 3.1415926535897931 / 180.0;
    c5_b_x = c5_x;
    c5_b_x = muDoubleScalarCos(c5_b_x);
    c5_cost[c5_b_i] = c5_b_x;
    c5_c_x = (-90.0 + (real_T)c5_b_i) * 3.1415926535897931 / 180.0;
    c5_d_x = c5_c_x;
    c5_d_x = muDoubleScalarSin(c5_d_x);
    c5_sint[c5_b_i] = c5_d_x;
  }

  c5_b_st.site = &c5_fb_emlrtRSI;
  for (c5_j = 0; c5_j < 158; c5_j++) {
    c5_b_j = (real_T)c5_j + 1.0;
    c5_tempNum = 0.0;
    for (c5_c_i = 0; c5_c_i < 118; c5_c_i++) {
      c5_e_i = (real_T)c5_c_i + 1.0;
      if (c5_b_varargin_1[((int32_T)c5_e_i + 118 * ((int32_T)c5_b_j - 1)) - 1])
      {
        c5_tempNum++;
        c5_c_i2 = (int32_T)c5_tempNum;
        if ((c5_c_i2 < 1) || (c5_c_i2 > 118)) {
          emlrtDynamicBoundsCheckR2012b(c5_c_i2, 1, 118, &c5_j_emlrtBCI,
            &c5_b_st);
        }

        c5_tempBin[c5_c_i2 - 1] = c5_e_i;
      }
    }

    c5_numNonZeros[(int32_T)c5_b_j - 1] = (int32_T)c5_tempNum;
    c5_k = 0;
    c5_exitg1 = false;
    while ((!c5_exitg1) && (c5_k < 118)) {
      c5_b_k = (real_T)c5_k + 1.0;
      if (c5_b_k > c5_tempNum) {
        c5_exitg1 = true;
      } else {
        c5_nonZeroPixelMatrix[((int32_T)c5_b_k + 118 * ((int32_T)c5_b_j - 1)) -
          1] = (int32_T)c5_tempBin[(int32_T)c5_b_k - 1];
        c5_k++;
      }
    }
  }

  for (c5_thetaIdx = 0; c5_thetaIdx < 180; c5_thetaIdx++) {
    c5_b_thetaIdx = c5_thetaIdx;
    for (c5_d_i = 0; c5_d_i < 393; c5_d_i++) {
      c5_rhoIdxVector[c5_d_i] = 0;
    }

    for (c5_c_j = 0; c5_c_j < 158; c5_c_j++) {
      c5_d_j = (real_T)c5_c_j + 1.0;
      c5_i3 = c5_numNonZeros[(int32_T)c5_d_j - 1] - 1;
      for (c5_f_i = 1; c5_f_i - 1 <= c5_i3; c5_f_i++) {
        c5_b_i = c5_f_i - 1;
        c5_n = c5_nonZeroPixelMatrix[c5_b_i + 118 * ((int32_T)c5_d_j - 1)];
        c5_myRho = (c5_d_j - 1.0) * c5_cost[c5_b_thetaIdx] + ((real_T)c5_n - 1.0)
          * c5_sint[c5_b_thetaIdx];
        c5_e_x = c5_myRho - -196.0;
        c5_y = (int32_T)(c5_e_x + 0.5) + 1;
        c5_rhoIdx = c5_y;
        c5_c_a = c5_rhoIdxVector[c5_rhoIdx - 1] + 1;
        c5_c = c5_c_a;
        if ((c5_rhoIdx < 1) || (c5_rhoIdx > 393)) {
          emlrtDynamicBoundsCheckR2012b(c5_rhoIdx, 1, 393, &c5_i_emlrtBCI,
            &c5_st);
        }

        c5_rhoIdxVector[c5_rhoIdx - 1] = c5_c;
      }
    }

    for (c5_c_i1 = 0; c5_c_i1 < 393; c5_c_i1++) {
      c5_h[c5_c_i1 + 393 * c5_b_thetaIdx] = (real_T)c5_rhoIdxVector[c5_c_i1];
    }
  }
}

static void c5_houghpeaks(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, real_T c5_b_varargin_1[70740], real_T c5_peaks_data[],
  int32_T c5_peaks_size[2])
{
  static char_T c5_b_cv1[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T c5_cv4[43] = { 'i', 'm', 'a', 'g', 'e', 's', ':', 'h', 'o', 'u',
    'g', 'h', 'p', 'e', 'a', 'k', 's', ':', 'i', 'n', 'v', 'a', 'l', 'i', 'd',
    'T', 'h', 'e', 't', 'a', 'V', 'e', 'c', 't', 'o', 'r', 'S', 'p', 'a', 'c',
    'i', 'n', 'g' };

  static char_T c5_b_cv[32] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'h', 'o', 'u',
    'g', 'h', 'p', 'e', 'a', 'k', 's', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T c5_b_cv2[9] = { 'T', 'h', 'r', 'e', 's', 'h', 'o', 'l', 'd' };

  static char_T c5_b_cv3[5] = { 'T', 'h', 'e', 't', 'a' };

  emlrtStack c5_b_st;
  emlrtStack c5_c_st;
  emlrtStack c5_d_st;
  emlrtStack c5_st;
  const mxArray *c5_b_y = NULL;
  const mxArray *c5_c_y = NULL;
  const mxArray *c5_d_y = NULL;
  const mxArray *c5_e_y = NULL;
  const mxArray *c5_f_y = NULL;
  const mxArray *c5_i_y = NULL;
  const mxArray *c5_j_y = NULL;
  const mxArray *c5_y = NULL;
  real_T c5_b_dv1[180];
  real_T c5_thetaInterval[179];
  real_T c5_f_x[178];
  real_T c5_peakCoordinates[4];
  real_T c5_c_dv[2];
  real_T c5_b_default;
  real_T c5_b_ex;
  real_T c5_b_k;
  real_T c5_b_ndx;
  real_T c5_b_threshold;
  real_T c5_b_thresholdDefault;
  real_T c5_b_x;
  real_T c5_c_a;
  real_T c5_c_ex;
  real_T c5_c_threshold;
  real_T c5_c_x;
  real_T c5_d_a;
  real_T c5_d_k;
  real_T c5_d_x;
  real_T c5_default;
  real_T c5_e_a;
  real_T c5_e_idx;
  real_T c5_e_x;
  real_T c5_ex;
  real_T c5_g_x;
  real_T c5_g_y;
  real_T c5_h_x;
  real_T c5_h_y;
  real_T c5_iPeak;
  real_T c5_i_x;
  real_T c5_jPeak;
  real_T c5_j_x;
  real_T c5_k_x;
  real_T c5_k_y;
  real_T c5_l_x;
  real_T c5_l_y;
  real_T c5_m_x;
  real_T c5_maxTheta;
  real_T c5_maxVal;
  real_T c5_minTheta;
  real_T c5_n_x;
  real_T c5_ndx;
  real_T c5_o_x;
  real_T c5_p_x;
  real_T c5_q_x;
  real_T c5_r_x;
  real_T c5_s_x;
  real_T c5_thetaResolution;
  real_T c5_threshold;
  real_T c5_thresholdDefault;
  real_T c5_val;
  real_T c5_x;
  int32_T c5_b_iPeak;
  int32_T c5_b_idx;
  int32_T c5_b_jPeak;
  int32_T c5_c_i1;
  int32_T c5_c_i2;
  int32_T c5_c_idx;
  int32_T c5_c_k;
  int32_T c5_d_idx;
  int32_T c5_e_k;
  int32_T c5_f_a;
  int32_T c5_f_idx;
  int32_T c5_f_k;
  int32_T c5_first;
  int32_T c5_g_k;
  int32_T c5_h_k;
  int32_T c5_i;
  int32_T c5_i3;
  int32_T c5_i4;
  int32_T c5_i5;
  int32_T c5_i6;
  int32_T c5_i7;
  int32_T c5_idx;
  int32_T c5_iindx;
  int32_T c5_k;
  int32_T c5_loop_ub;
  int32_T c5_peakIdx;
  int32_T c5_rho;
  int32_T c5_rhoMax;
  int32_T c5_rhoMin;
  int32_T c5_rhoToRemove;
  int32_T c5_theta;
  int32_T c5_thetaMax;
  int32_T c5_thetaMin;
  int32_T c5_thetaToRemove;
  int32_T c5_v1;
  int32_T c5_varargout_3;
  int32_T c5_varargout_4;
  int32_T c5_vk;
  boolean_T c5_b;
  boolean_T c5_b1;
  boolean_T c5_b2;
  boolean_T c5_b3;
  boolean_T c5_b_b;
  boolean_T c5_b_p;
  boolean_T c5_c_b;
  boolean_T c5_c_p;
  boolean_T c5_d_b;
  boolean_T c5_d_p;
  boolean_T c5_e_b;
  boolean_T c5_e_p;
  boolean_T c5_exitg1;
  boolean_T c5_f_b;
  boolean_T c5_g_b;
  boolean_T c5_isDone;
  boolean_T c5_isThetaAntisymmetric;
  boolean_T c5_p;
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  c5_b_st.prev = &c5_st;
  c5_b_st.tls = c5_st.tls;
  c5_c_st.prev = &c5_b_st;
  c5_c_st.tls = c5_b_st.tls;
  c5_d_st.prev = &c5_c_st;
  c5_d_st.tls = c5_c_st.tls;
  c5_st.site = &c5_hb_emlrtRSI;
  c5_b_st.site = &c5_ib_emlrtRSI;
  c5_validateattributes(chartInstance, &c5_b_st, c5_b_varargin_1);
  c5_maxVal = 0.0;
  for (c5_k = 0; c5_k < 70740; c5_k++) {
    c5_b_k = (real_T)c5_k + 1.0;
    c5_val = c5_b_varargin_1[(int32_T)c5_b_k - 1];
    if (c5_val > c5_maxVal) {
      c5_maxVal = c5_val;
    }
  }

  c5_thresholdDefault = 0.5 * c5_maxVal;
  c5_b_thresholdDefault = c5_thresholdDefault;
  c5_default = c5_b_thresholdDefault;
  c5_b_default = c5_default;
  c5_threshold = c5_b_default;
  c5_b_threshold = c5_threshold;
  c5_b_st.site = &c5_jb_emlrtRSI;
  c5_c_threshold = c5_threshold;
  c5_c_st.site = &c5_nb_emlrtRSI;
  c5_c_a = c5_c_threshold;
  c5_d_st.site = &c5_mb_emlrtRSI;
  c5_d_a = c5_c_a;
  c5_e_a = c5_d_a;
  c5_p = true;
  c5_x = c5_e_a;
  c5_b_x = c5_x;
  c5_b = muDoubleScalarIsNaN(c5_b_x);
  c5_b_p = !c5_b;
  if (!c5_b_p) {
    c5_p = false;
  }

  if (c5_p) {
    c5_b_b = true;
  } else {
    c5_b_b = false;
  }

  if (!c5_b_b) {
    c5_y = NULL;
    sf_mex_assign(&c5_y, sf_mex_create("y", c5_b_cv, 10, 0U, 1U, 0U, 2, 1, 32),
                  false);
    c5_b_y = NULL;
    sf_mex_assign(&c5_b_y, sf_mex_create("y", c5_b_cv1, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c5_c_y = NULL;
    sf_mex_assign(&c5_c_y, sf_mex_create("y", c5_b_cv2, 10, 0U, 1U, 0U, 2, 1, 9),
                  false);
    sf_mex_call(&c5_d_st, &c5_f_emlrtMCI, "error", 0U, 2U, 14, c5_y, 14,
                sf_mex_call(&c5_d_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c5_d_st, NULL, "message", 1U, 2U, 14, c5_b_y, 14, c5_c_y)));
  }

  c5_b_st.site = &c5_kb_emlrtRSI;
  for (c5_i = 0; c5_i < 2; c5_i++) {
    c5_c_dv[c5_i] = 9.0 + -4.0 * (real_T)c5_i;
  }

  c5_c_st.site = &c5_ob_emlrtRSI;
  c5_b_validateattributes(chartInstance, &c5_c_st, c5_c_dv);
  c5_b_st.site = &c5_lb_emlrtRSI;
  c5_c_st.site = &c5_qb_emlrtRSI;
  c5_d_st.site = &c5_mb_emlrtRSI;
  c5_c_p = true;
  c5_c_k = 0;
  c5_exitg1 = false;
  while ((!c5_exitg1) && (c5_c_k < 180)) {
    c5_d_k = (real_T)c5_c_k + 1.0;
    c5_c_x = -90.0 + (real_T)((int32_T)c5_d_k - 1);
    c5_d_x = c5_c_x;
    c5_c_b = muDoubleScalarIsInf(c5_d_x);
    c5_b2 = !c5_c_b;
    c5_e_x = c5_c_x;
    c5_d_b = muDoubleScalarIsNaN(c5_e_x);
    c5_b3 = !c5_d_b;
    c5_e_b = (c5_b2 && c5_b3);
    if (c5_e_b) {
      c5_c_k++;
    } else {
      c5_c_p = false;
      c5_exitg1 = true;
    }
  }

  if (c5_c_p) {
    c5_b1 = true;
  } else {
    c5_b1 = false;
  }

  if (!c5_b1) {
    c5_d_y = NULL;
    sf_mex_assign(&c5_d_y, sf_mex_create("y", c5_cv, 10, 0U, 1U, 0U, 2, 1, 32),
                  false);
    c5_e_y = NULL;
    sf_mex_assign(&c5_e_y, sf_mex_create("y", c5_cv1, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c5_f_y = NULL;
    sf_mex_assign(&c5_f_y, sf_mex_create("y", c5_b_cv3, 10, 0U, 1U, 0U, 2, 1, 5),
                  false);
    sf_mex_call(&c5_d_st, &c5_d_emlrtMCI, "error", 0U, 2U, 14, c5_d_y, 14,
                sf_mex_call(&c5_d_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c5_d_st, NULL, "message", 1U, 2U, 14, c5_e_y, 14, c5_f_y)));
  }

  for (c5_c_i1 = 0; c5_c_i1 < 180; c5_c_i1++) {
    c5_b_dv1[c5_c_i1] = -90.0 + (real_T)c5_c_i1;
  }

  c5_diff(chartInstance, c5_b_dv1, c5_thetaInterval);
  c5_c_st.site = &c5_pb_emlrtRSI;
  c5_b_diff(chartInstance, c5_thetaInterval, c5_f_x);
  c5_g_y = c5_sumColumnB(chartInstance, c5_f_x);
  c5_g_x = c5_g_y;
  c5_h_x = c5_g_x;
  c5_i_x = c5_h_x;
  c5_h_y = muDoubleScalarAbs(c5_i_x);
  if (c5_h_y > 1.4901161193847656E-8) {
    c5_i_y = NULL;
    sf_mex_assign(&c5_i_y, sf_mex_create("y", c5_cv4, 10, 0U, 1U, 0U, 2, 1, 43),
                  false);
    c5_j_y = NULL;
    sf_mex_assign(&c5_j_y, sf_mex_create("y", c5_cv4, 10, 0U, 1U, 0U, 2, 1, 43),
                  false);
    sf_mex_call(&c5_b_st, &c5_j_emlrtMCI, "error", 0U, 2U, 14, c5_i_y, 14,
                sf_mex_call(&c5_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c5_b_st, NULL, "message", 1U, 1U, 14, c5_j_y)));
  }

  c5_isDone = false;
  for (c5_c_i2 = 0; c5_c_i2 < 70740; c5_c_i2++) {
    chartInstance->c5_hnew[c5_c_i2] = c5_b_varargin_1[c5_c_i2];
  }

  c5_peakIdx = 0;
  c5_ex = -90.0;
  for (c5_e_k = 1; c5_e_k + 1 < 181; c5_e_k++) {
    if (c5_ex > -90.0 + (real_T)c5_e_k) {
      c5_ex = -90.0 + (real_T)c5_e_k;
    }
  }

  c5_minTheta = c5_ex;
  c5_b_ex = -90.0;
  for (c5_f_k = 1; c5_f_k + 1 < 181; c5_f_k++) {
    if (c5_b_ex < -90.0 + (real_T)c5_f_k) {
      c5_b_ex = -90.0 + (real_T)c5_f_k;
    }
  }

  c5_maxTheta = c5_b_ex;
  c5_j_x = c5_maxTheta - c5_minTheta;
  c5_k_x = c5_j_x;
  c5_l_x = c5_k_x;
  c5_k_y = muDoubleScalarAbs(c5_l_x);
  c5_thetaResolution = c5_k_y / 179.0;
  c5_m_x = c5_minTheta + c5_thetaResolution * 5.0;
  c5_n_x = c5_m_x;
  c5_o_x = c5_n_x;
  c5_l_y = muDoubleScalarAbs(c5_o_x);
  c5_isThetaAntisymmetric = (c5_l_y <= c5_maxTheta);
  while (!c5_isDone) {
    for (c5_i3 = 0; c5_i3 < 70740; c5_i3++) {
      chartInstance->c5_varargin_1[c5_i3] = chartInstance->c5_hnew[c5_i3];
    }

    c5_p_x = chartInstance->c5_varargin_1[0];
    c5_q_x = c5_p_x;
    c5_f_b = muDoubleScalarIsNaN(c5_q_x);
    c5_d_p = !c5_f_b;
    if (c5_d_p) {
      c5_idx = 1;
    } else {
      c5_idx = 0;
      c5_g_k = 2;
      c5_exitg1 = false;
      while ((!c5_exitg1) && (c5_g_k < 70741)) {
        c5_r_x = chartInstance->c5_varargin_1[c5_g_k - 1];
        c5_s_x = c5_r_x;
        c5_g_b = muDoubleScalarIsNaN(c5_s_x);
        c5_e_p = !c5_g_b;
        if (c5_e_p) {
          c5_idx = c5_g_k;
          c5_exitg1 = true;
        } else {
          c5_g_k++;
        }
      }
    }

    if (c5_idx == 0) {
      c5_idx = 1;
    } else {
      c5_first = c5_idx;
      c5_c_ex = chartInstance->c5_varargin_1[c5_first - 1];
      c5_b_idx = c5_first;
      c5_i7 = c5_first;
      for (c5_h_k = c5_i7 + 1; c5_h_k < 70741; c5_h_k++) {
        if (c5_c_ex < chartInstance->c5_varargin_1[c5_h_k - 1]) {
          c5_c_ex = chartInstance->c5_varargin_1[c5_h_k - 1];
          c5_b_idx = c5_h_k;
        }
      }

      c5_idx = c5_b_idx;
    }

    c5_c_idx = c5_idx;
    c5_d_idx = c5_c_idx;
    c5_iindx = c5_d_idx;
    c5_e_idx = (real_T)c5_iindx;
    c5_st.site = &c5_gb_emlrtRSI;
    c5_ndx = c5_e_idx;
    c5_b_st.site = &c5_rb_emlrtRSI;
    c5_b_ndx = c5_ndx;
    c5_f_idx = (int32_T)c5_b_ndx - 1;
    c5_v1 = c5_f_idx;
    c5_f_a = c5_v1;
    c5_vk = c5_div_nzp_s32(chartInstance, c5_f_a, 393, 0, 1U, 0, 0);
    c5_varargout_4 = c5_vk;
    c5_v1 = (c5_v1 - c5_vk * 393) + 1;
    c5_varargout_3 = c5_v1;
    c5_iPeak = (real_T)c5_varargout_3;
    c5_jPeak = (real_T)(c5_varargout_4 + 1);
    c5_b_iPeak = (int32_T)c5_iPeak;
    c5_b_jPeak = (int32_T)c5_jPeak;
    if ((c5_b_iPeak < 1) || (c5_b_iPeak > 393)) {
      emlrtDynamicBoundsCheckR2012b(c5_b_iPeak, 1, 393, &c5_l_emlrtBCI, (void *)
        c5_sp);
    }

    if (chartInstance->c5_hnew[(c5_b_iPeak + 393 * (c5_b_jPeak - 1)) - 1] >=
        c5_b_threshold) {
      c5_peakIdx++;
      if ((c5_peakIdx < 1) || (c5_peakIdx > 2)) {
        emlrtDynamicBoundsCheckR2012b(c5_peakIdx, 1, 2, &c5_k_emlrtBCI, (void *)
          c5_sp);
      }

      c5_peakCoordinates[c5_peakIdx - 1] = (real_T)c5_b_iPeak;
      c5_peakCoordinates[c5_peakIdx + 1] = (real_T)c5_b_jPeak;
      c5_rhoMin = c5_b_iPeak - 4;
      c5_rhoMax = c5_b_iPeak + 4;
      c5_thetaMin = c5_b_jPeak;
      c5_thetaMax = c5_b_jPeak;
      if (c5_rhoMin < 1) {
        c5_rhoMin = 1;
      }

      if (c5_rhoMax > 393) {
        c5_rhoMax = 393;
      }

      for (c5_theta = c5_thetaMin - 2; c5_theta <= c5_thetaMax + 2; c5_theta++)
      {
        for (c5_rho = c5_rhoMin; c5_rho <= c5_rhoMax; c5_rho++) {
          c5_rhoToRemove = c5_rho;
          c5_thetaToRemove = c5_theta;
          if (c5_isThetaAntisymmetric) {
            if (c5_theta > 180) {
              c5_rhoToRemove = 394 - c5_rho;
              c5_thetaToRemove = c5_theta - 180;
            } else if (c5_theta < 1) {
              c5_rhoToRemove = 394 - c5_rho;
              c5_thetaToRemove = c5_theta + 180;
            }
          }

          if ((c5_thetaToRemove > 180) || (c5_thetaToRemove < 1)) {
          } else {
            chartInstance->c5_hnew[(c5_rhoToRemove + 393 * (c5_thetaToRemove - 1))
              - 1] = 0.0;
          }
        }
      }

      c5_isDone = (c5_peakIdx == 2);
    } else {
      c5_isDone = true;
    }
  }

  if (c5_peakIdx == 0) {
    c5_peaks_size[0] = 0;
    c5_peaks_size[1] = 0;
  } else {
    c5_i4 = c5_peakIdx - 1;
    c5_peaks_size[0] = c5_i4 + 1;
    c5_peaks_size[1] = 2;
    for (c5_i5 = 0; c5_i5 < 2; c5_i5++) {
      c5_loop_ub = c5_i4;
      for (c5_i6 = 0; c5_i6 <= c5_loop_ub; c5_i6++) {
        c5_peaks_data[c5_i6 + c5_peaks_size[0] * c5_i5] =
          c5_peakCoordinates[c5_i6 + (c5_i5 << 1)];
      }
    }
  }
}

static void c5_validateattributes(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, real_T c5_c_a[70740])
{
  static char_T c5_b_cv[18] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm', 'b',
    'e', 'r', ' ', '1', ',', ' ', 'H', ',' };

  static char_T c5_b_cv1[18] = { 'i', 'n', 'p', 'u', 't', ' ', 'n', 'u', 'm',
    'b', 'e', 'r', ' ', '1', ',', ' ', 'H', ',' };

  emlrtStack c5_st;
  const mxArray *c5_b_y = NULL;
  const mxArray *c5_c_y = NULL;
  const mxArray *c5_d_y = NULL;
  const mxArray *c5_e_y = NULL;
  const mxArray *c5_f_y = NULL;
  const mxArray *c5_y = NULL;
  real_T c5_b_k;
  real_T c5_b_x;
  real_T c5_c_x;
  real_T c5_d_k;
  real_T c5_d_x;
  real_T c5_e_x;
  real_T c5_f_x;
  real_T c5_g_x;
  real_T c5_h_x;
  real_T c5_i_x;
  real_T c5_x;
  int32_T c5_c_k;
  int32_T c5_k;
  boolean_T c5_b;
  boolean_T c5_b1;
  boolean_T c5_b2;
  boolean_T c5_b3;
  boolean_T c5_b4;
  boolean_T c5_b5;
  boolean_T c5_b_b;
  boolean_T c5_b_p;
  boolean_T c5_c_b;
  boolean_T c5_c_p;
  boolean_T c5_d_b;
  boolean_T c5_d_p;
  boolean_T c5_e_b;
  boolean_T c5_exitg1;
  boolean_T c5_f_b;
  boolean_T c5_g_b;
  boolean_T c5_p;
  (void)chartInstance;
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  c5_st.site = &c5_mb_emlrtRSI;
  c5_p = true;
  c5_k = 0;
  c5_exitg1 = false;
  while ((!c5_exitg1) && (c5_k < 70740)) {
    c5_b_k = (real_T)c5_k + 1.0;
    c5_x = c5_c_a[(int32_T)c5_b_k - 1];
    c5_b_x = c5_x;
    c5_b_b = muDoubleScalarIsInf(c5_b_x);
    c5_b1 = !c5_b_b;
    c5_c_x = c5_x;
    c5_c_b = muDoubleScalarIsNaN(c5_c_x);
    c5_b2 = !c5_c_b;
    c5_d_b = (c5_b1 && c5_b2);
    if (c5_d_b) {
      c5_k++;
    } else {
      c5_p = false;
      c5_exitg1 = true;
    }
  }

  if (c5_p) {
    c5_b = true;
  } else {
    c5_b = false;
  }

  if (!c5_b) {
    c5_y = NULL;
    sf_mex_assign(&c5_y, sf_mex_create("y", c5_cv, 10, 0U, 1U, 0U, 2, 1, 32),
                  false);
    c5_b_y = NULL;
    sf_mex_assign(&c5_b_y, sf_mex_create("y", c5_cv1, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c5_c_y = NULL;
    sf_mex_assign(&c5_c_y, sf_mex_create("y", c5_b_cv, 10, 0U, 1U, 0U, 2, 1, 18),
                  false);
    sf_mex_call(&c5_st, &c5_d_emlrtMCI, "error", 0U, 2U, 14, c5_y, 14,
                sf_mex_call(&c5_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c5_st, NULL, "message", 1U, 2U, 14, c5_b_y, 14, c5_c_y)));
  }

  c5_st.site = &c5_mb_emlrtRSI;
  c5_b_p = true;
  c5_c_k = 0;
  c5_exitg1 = false;
  while ((!c5_exitg1) && (c5_c_k < 70740)) {
    c5_d_k = (real_T)c5_c_k + 1.0;
    c5_d_x = c5_c_a[(int32_T)c5_d_k - 1];
    c5_e_x = c5_d_x;
    c5_f_x = c5_e_x;
    c5_e_b = muDoubleScalarIsInf(c5_f_x);
    c5_b4 = !c5_e_b;
    c5_g_x = c5_e_x;
    c5_f_b = muDoubleScalarIsNaN(c5_g_x);
    c5_b5 = !c5_f_b;
    c5_g_b = (c5_b4 && c5_b5);
    if (c5_g_b) {
      c5_h_x = c5_d_x;
      c5_i_x = c5_h_x;
      if (c5_i_x == c5_d_x) {
        c5_c_p = true;
      } else {
        c5_c_p = false;
      }
    } else {
      c5_c_p = false;
    }

    c5_d_p = c5_c_p;
    if (c5_d_p) {
      c5_c_k++;
    } else {
      c5_b_p = false;
      c5_exitg1 = true;
    }
  }

  if (c5_b_p) {
    c5_b3 = true;
  } else {
    c5_b3 = false;
  }

  if (!c5_b3) {
    c5_d_y = NULL;
    sf_mex_assign(&c5_d_y, sf_mex_create("y", c5_cv2, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    c5_e_y = NULL;
    sf_mex_assign(&c5_e_y, sf_mex_create("y", c5_cv3, 10, 0U, 1U, 0U, 2, 1, 47),
                  false);
    c5_f_y = NULL;
    sf_mex_assign(&c5_f_y, sf_mex_create("y", c5_b_cv1, 10, 0U, 1U, 0U, 2, 1, 18),
                  false);
    sf_mex_call(&c5_st, &c5_e_emlrtMCI, "error", 0U, 2U, 14, c5_d_y, 14,
                sf_mex_call(&c5_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c5_st, NULL, "message", 1U, 2U, 14, c5_e_y, 14, c5_f_y)));
  }
}

static void c5_b_validateattributes(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, real_T c5_c_a[2])
{
  static char_T c5_b_cv3[43] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'O', 'd', 'd' };

  static char_T c5_b_cv2[29] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'h', 'o',
    'u', 'g', 'h', 'p', 'e', 'a', 'k', 's', ':', 'e', 'x', 'p', 'e', 'c', 't',
    'e', 'd', 'O', 'd', 'd' };

  static char_T c5_b_cv[9] = { 'N', 'H', 'o', 'o', 'd', 'S', 'i', 'z', 'e' };

  static char_T c5_b_cv1[9] = { 'N', 'H', 'o', 'o', 'd', 'S', 'i', 'z', 'e' };

  static char_T c5_cv4[9] = { 'N', 'H', 'o', 'o', 'd', 'S', 'i', 'z', 'e' };

  emlrtStack c5_st;
  const mxArray *c5_b_y = NULL;
  const mxArray *c5_c_y = NULL;
  const mxArray *c5_d_y = NULL;
  const mxArray *c5_e_y = NULL;
  const mxArray *c5_f_y = NULL;
  const mxArray *c5_g_y = NULL;
  const mxArray *c5_h_y = NULL;
  const mxArray *c5_i_y = NULL;
  const mxArray *c5_y = NULL;
  real_T c5_b_k;
  real_T c5_b_x;
  real_T c5_c_x;
  real_T c5_d_a;
  real_T c5_d_k;
  real_T c5_d_x;
  real_T c5_e_x;
  real_T c5_f_k;
  real_T c5_f_x;
  real_T c5_g_x;
  real_T c5_h_x;
  real_T c5_i_x;
  real_T c5_j_x;
  real_T c5_k_x;
  real_T c5_l_x;
  real_T c5_m_x;
  real_T c5_n_x;
  real_T c5_o_x;
  real_T c5_r;
  real_T c5_x;
  int32_T c5_c_k;
  int32_T c5_e_k;
  int32_T c5_k;
  boolean_T c5_b;
  boolean_T c5_b1;
  boolean_T c5_b2;
  boolean_T c5_b3;
  boolean_T c5_b4;
  boolean_T c5_b5;
  boolean_T c5_b6;
  boolean_T c5_b_b;
  boolean_T c5_b_p;
  boolean_T c5_c_b;
  boolean_T c5_c_p;
  boolean_T c5_d_b;
  boolean_T c5_d_p;
  boolean_T c5_e_b;
  boolean_T c5_e_p;
  boolean_T c5_exitg1;
  boolean_T c5_f_b;
  boolean_T c5_f_p;
  boolean_T c5_g_b;
  boolean_T c5_h_b;
  boolean_T c5_i_b;
  boolean_T c5_p;
  boolean_T c5_rEQ0;
  (void)chartInstance;
  c5_st.prev = c5_sp;
  c5_st.tls = c5_sp->tls;
  c5_st.site = &c5_mb_emlrtRSI;
  c5_p = true;
  c5_k = 0;
  c5_exitg1 = false;
  while ((!c5_exitg1) && (c5_k < 2)) {
    c5_b_k = (real_T)c5_k + 1.0;
    c5_x = c5_c_a[(int32_T)c5_b_k - 1];
    c5_b_x = c5_x;
    c5_b_b = muDoubleScalarIsInf(c5_b_x);
    c5_b1 = !c5_b_b;
    c5_c_x = c5_x;
    c5_c_b = muDoubleScalarIsNaN(c5_c_x);
    c5_b2 = !c5_c_b;
    c5_d_b = (c5_b1 && c5_b2);
    if (c5_d_b) {
      c5_k++;
    } else {
      c5_p = false;
      c5_exitg1 = true;
    }
  }

  if (c5_p) {
    c5_b = true;
  } else {
    c5_b = false;
  }

  if (!c5_b) {
    c5_y = NULL;
    sf_mex_assign(&c5_y, sf_mex_create("y", c5_cv, 10, 0U, 1U, 0U, 2, 1, 32),
                  false);
    c5_b_y = NULL;
    sf_mex_assign(&c5_b_y, sf_mex_create("y", c5_cv1, 10, 0U, 1U, 0U, 2, 1, 46),
                  false);
    c5_c_y = NULL;
    sf_mex_assign(&c5_c_y, sf_mex_create("y", c5_b_cv, 10, 0U, 1U, 0U, 2, 1, 9),
                  false);
    sf_mex_call(&c5_st, &c5_d_emlrtMCI, "error", 0U, 2U, 14, c5_y, 14,
                sf_mex_call(&c5_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c5_st, NULL, "message", 1U, 2U, 14, c5_b_y, 14, c5_c_y)));
  }

  c5_st.site = &c5_mb_emlrtRSI;
  c5_b_p = true;
  c5_c_k = 0;
  c5_exitg1 = false;
  while ((!c5_exitg1) && (c5_c_k < 2)) {
    c5_d_k = (real_T)c5_c_k + 1.0;
    c5_d_x = c5_c_a[(int32_T)c5_d_k - 1];
    c5_e_x = c5_d_x;
    c5_f_x = c5_e_x;
    c5_e_b = muDoubleScalarIsInf(c5_f_x);
    c5_b4 = !c5_e_b;
    c5_g_x = c5_e_x;
    c5_f_b = muDoubleScalarIsNaN(c5_g_x);
    c5_b5 = !c5_f_b;
    c5_g_b = (c5_b4 && c5_b5);
    if (c5_g_b) {
      c5_h_x = c5_d_x;
      c5_i_x = c5_h_x;
      if (c5_i_x == c5_d_x) {
        c5_d_p = true;
      } else {
        c5_d_p = false;
      }
    } else {
      c5_d_p = false;
    }

    c5_e_p = c5_d_p;
    if (c5_e_p) {
      c5_c_k++;
    } else {
      c5_b_p = false;
      c5_exitg1 = true;
    }
  }

  if (c5_b_p) {
    c5_b3 = true;
  } else {
    c5_b3 = false;
  }

  if (!c5_b3) {
    c5_d_y = NULL;
    sf_mex_assign(&c5_d_y, sf_mex_create("y", c5_cv2, 10, 0U, 1U, 0U, 2, 1, 33),
                  false);
    c5_e_y = NULL;
    sf_mex_assign(&c5_e_y, sf_mex_create("y", c5_cv3, 10, 0U, 1U, 0U, 2, 1, 47),
                  false);
    c5_f_y = NULL;
    sf_mex_assign(&c5_f_y, sf_mex_create("y", c5_b_cv1, 10, 0U, 1U, 0U, 2, 1, 9),
                  false);
    sf_mex_call(&c5_st, &c5_e_emlrtMCI, "error", 0U, 2U, 14, c5_d_y, 14,
                sf_mex_call(&c5_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c5_st, NULL, "message", 1U, 2U, 14, c5_e_y, 14, c5_f_y)));
  }

  c5_st.site = &c5_mb_emlrtRSI;
  c5_st.site = &c5_mb_emlrtRSI;
  c5_c_p = true;
  c5_e_k = 0;
  c5_exitg1 = false;
  while ((!c5_exitg1) && (c5_e_k < 2)) {
    c5_f_k = (real_T)c5_e_k + 1.0;
    c5_j_x = c5_c_a[(int32_T)c5_f_k - 1];
    c5_k_x = c5_j_x;
    c5_d_a = c5_k_x;
    c5_l_x = c5_d_a;
    c5_m_x = c5_l_x;
    c5_n_x = c5_m_x;
    c5_h_b = muDoubleScalarIsNaN(c5_n_x);
    if (c5_h_b) {
      c5_r = rtNaN;
    } else {
      c5_o_x = c5_m_x;
      c5_i_b = muDoubleScalarIsInf(c5_o_x);
      if (c5_i_b) {
        c5_r = rtNaN;
      } else {
        c5_r = muDoubleScalarRem(c5_m_x, 2.0);
        c5_rEQ0 = (c5_r == 0.0);
        if (c5_rEQ0) {
          c5_r = 0.0;
        }
      }
    }

    c5_f_p = (c5_r == 1.0);
    if (c5_f_p) {
      c5_e_k++;
    } else {
      c5_c_p = false;
      c5_exitg1 = true;
    }
  }

  if (c5_c_p) {
    c5_b6 = true;
  } else {
    c5_b6 = false;
  }

  if (!c5_b6) {
    c5_g_y = NULL;
    sf_mex_assign(&c5_g_y, sf_mex_create("y", c5_b_cv2, 10, 0U, 1U, 0U, 2, 1, 29),
                  false);
    c5_h_y = NULL;
    sf_mex_assign(&c5_h_y, sf_mex_create("y", c5_b_cv3, 10, 0U, 1U, 0U, 2, 1, 43),
                  false);
    c5_i_y = NULL;
    sf_mex_assign(&c5_i_y, sf_mex_create("y", c5_cv4, 10, 0U, 1U, 0U, 2, 1, 9),
                  false);
    sf_mex_call(&c5_st, &c5_i_emlrtMCI, "error", 0U, 2U, 14, c5_g_y, 14,
                sf_mex_call(&c5_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c5_st, NULL, "message", 1U, 2U, 14, c5_h_y, 14, c5_i_y)));
  }
}

static void c5_diff(SFc5_flightControlSystemInstanceStruct *chartInstance,
                    real_T c5_x[180], real_T c5_y[179])
{
  real_T c5_tmp1;
  real_T c5_tmp2;
  real_T c5_work;
  int32_T c5_ixLead;
  int32_T c5_iyLead;
  int32_T c5_m;
  (void)chartInstance;
  c5_ixLead = 1;
  c5_iyLead = 0;
  c5_work = c5_x[0];
  for (c5_m = 0; c5_m < 179; c5_m++) {
    c5_tmp1 = c5_x[c5_ixLead];
    c5_tmp2 = c5_work;
    c5_work = c5_tmp1;
    c5_tmp1 -= c5_tmp2;
    c5_ixLead++;
    c5_y[c5_iyLead] = c5_tmp1;
    c5_iyLead++;
  }
}

static void c5_b_diff(SFc5_flightControlSystemInstanceStruct *chartInstance,
                      real_T c5_x[179], real_T c5_y[178])
{
  real_T c5_tmp1;
  real_T c5_tmp2;
  real_T c5_work;
  int32_T c5_ixLead;
  int32_T c5_iyLead;
  int32_T c5_m;
  (void)chartInstance;
  c5_ixLead = 1;
  c5_iyLead = 0;
  c5_work = c5_x[0];
  for (c5_m = 0; c5_m < 178; c5_m++) {
    c5_tmp1 = c5_x[c5_ixLead];
    c5_tmp2 = c5_work;
    c5_work = c5_tmp1;
    c5_tmp1 -= c5_tmp2;
    c5_ixLead++;
    c5_y[c5_iyLead] = c5_tmp1;
    c5_iyLead++;
  }
}

static real_T c5_sumColumnB(SFc5_flightControlSystemInstanceStruct
  *chartInstance, real_T c5_x[178])
{
  real_T c5_y;
  int32_T c5_b_k;
  int32_T c5_k;
  (void)chartInstance;
  c5_y = c5_x[0];
  for (c5_k = 0; c5_k < 177; c5_k++) {
    c5_b_k = c5_k;
    c5_y += c5_x[c5_b_k + 1];
  }

  return c5_y;
}

static real_T c5_b_sumColumnB(SFc5_flightControlSystemInstanceStruct
  *chartInstance, real_T c5_x_data[], int32_T c5_vlen)
{
  real_T c5_y;
  int32_T c5_b_vlen;
  int32_T c5_i;
  int32_T c5_k;
  (void)chartInstance;
  c5_b_vlen = c5_vlen - 1;
  c5_y = c5_x_data[0];
  c5_i = c5_b_vlen - 1;
  for (c5_k = 0; c5_k <= c5_i; c5_k++) {
    c5_y += c5_x_data[1];
  }

  return c5_y;
}

static real_T c5_emlrt_marshallIn(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c5_b_DegAngle, const char_T *c5_identifier)
{
  emlrtMsgIdentifier c5_thisId;
  real_T c5_y;
  c5_thisId.fIdentifier = (const char_T *)c5_identifier;
  c5_thisId.fParent = NULL;
  c5_thisId.bParentIsCell = false;
  c5_y = c5_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c5_b_DegAngle),
    &c5_thisId);
  sf_mex_destroy(&c5_b_DegAngle);
  return c5_y;
}

static real_T c5_b_emlrt_marshallIn(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  real_T c5_d;
  real_T c5_y;
  (void)chartInstance;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), &c5_d, 1, 0, 0U, 0, 0U, 0);
  c5_y = c5_d;
  sf_mex_destroy(&c5_u);
  return c5_y;
}

static uint8_T c5_c_emlrt_marshallIn(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c5_b_is_active_c5_flightControlSystem, const
  char_T *c5_identifier)
{
  emlrtMsgIdentifier c5_thisId;
  uint8_T c5_y;
  c5_thisId.fIdentifier = (const char_T *)c5_identifier;
  c5_thisId.fParent = NULL;
  c5_thisId.bParentIsCell = false;
  c5_y = c5_d_emlrt_marshallIn(chartInstance, sf_mex_dup
    (c5_b_is_active_c5_flightControlSystem), &c5_thisId);
  sf_mex_destroy(&c5_b_is_active_c5_flightControlSystem);
  return c5_y;
}

static uint8_T c5_d_emlrt_marshallIn(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const mxArray *c5_u, const emlrtMsgIdentifier *c5_parentId)
{
  uint8_T c5_b_u;
  uint8_T c5_y;
  (void)chartInstance;
  sf_mex_import(c5_parentId, sf_mex_dup(c5_u), &c5_b_u, 1, 3, 0U, 0, 0U, 0);
  c5_y = c5_b_u;
  sf_mex_destroy(&c5_u);
  return c5_y;
}

static void c5_slStringInitializeDynamicBuffers
  (SFc5_flightControlSystemInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c5_chart_data_browse_helper(SFc5_flightControlSystemInstanceStruct
  *chartInstance, int32_T c5_ssIdNumber, const mxArray **c5_mxData, uint8_T
  *c5_isValueTooBig)
{
  real_T c5_d;
  *c5_mxData = NULL;
  *c5_mxData = NULL;
  *c5_isValueTooBig = 0U;
  switch (c5_ssIdNumber) {
   case 4U:
    sf_mex_assign(c5_mxData, sf_mex_create("mxData", *chartInstance->c5_BWimage,
      0, 0U, 1U, 0U, 2, 118, 158), false);
    break;

   case 5U:
    c5_d = *chartInstance->c5_DegAngle;
    sf_mex_assign(c5_mxData, sf_mex_create("mxData", &c5_d, 0, 0U, 0U, 0U, 0),
                  false);
    break;
  }
}

static const mxArray *c5_feval(SFc5_flightControlSystemInstanceStruct
  *chartInstance, const emlrtStack *c5_sp, const mxArray *c5_input0, const
  mxArray *c5_input1)
{
  const mxArray *c5_m = NULL;
  (void)chartInstance;
  c5_m = NULL;
  sf_mex_assign(&c5_m, sf_mex_call(c5_sp, NULL, "feval", 1U, 2U, 14, sf_mex_dup
    (c5_input0), 14, sf_mex_dup(c5_input1)), false);
  sf_mex_destroy(&c5_input0);
  sf_mex_destroy(&c5_input1);
  return c5_m;
}

static void c5_b_feval(SFc5_flightControlSystemInstanceStruct *chartInstance,
  const emlrtStack *c5_sp, const mxArray *c5_input0, const mxArray *c5_input1)
{
  (void)chartInstance;
  sf_mex_call(c5_sp, NULL, "feval", 0U, 2U, 14, sf_mex_dup(c5_input0), 14,
              sf_mex_dup(c5_input1));
  sf_mex_destroy(&c5_input0);
  sf_mex_destroy(&c5_input1);
}

static int32_T c5_div_nzp_s32(SFc5_flightControlSystemInstanceStruct
  *chartInstance, int32_T c5_numerator, int32_T c5_denominator, int32_T
  c5_EMLOvCount_src_loc, uint32_T c5_ssid_src_loc, int32_T c5_offset_src_loc,
  int32_T c5_length_src_loc)
{
  int32_T c5_quotient;
  uint32_T c5_absDenominator;
  uint32_T c5_absNumerator;
  uint32_T c5_tempAbsQuotient;
  boolean_T c5_quotientNeedsNegation;
  (void)chartInstance;
  (void)c5_EMLOvCount_src_loc;
  (void)c5_ssid_src_loc;
  (void)c5_offset_src_loc;
  (void)c5_length_src_loc;
  if (c5_numerator < 0) {
    c5_absNumerator = ~(uint32_T)c5_numerator + 1U;
  } else {
    c5_absNumerator = (uint32_T)c5_numerator;
  }

  if (c5_denominator < 0) {
    c5_absDenominator = ~(uint32_T)c5_denominator + 1U;
  } else {
    c5_absDenominator = (uint32_T)c5_denominator;
  }

  c5_quotientNeedsNegation = ((c5_numerator < 0) != (c5_denominator < 0));
  c5_tempAbsQuotient = c5_absNumerator / c5_absDenominator;
  if (c5_quotientNeedsNegation) {
    c5_quotient = -(int32_T)c5_tempAbsQuotient;
  } else {
    c5_quotient = (int32_T)c5_tempAbsQuotient;
  }

  return c5_quotient;
}

static void init_dsm_address_info(SFc5_flightControlSystemInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc5_flightControlSystemInstanceStruct
  *chartInstance)
{
  chartInstance->c5_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c5_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c5_BWimage = (real_T (*)[18644])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c5_DegAngle = (real_T *)ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c5_flightControlSystem_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(255716854U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(1039400841U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2841354792U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1945391414U);
}

mxArray *sf_c5_flightControlSystem_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,5);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "images.internal.coder.buildable.IppfilterBuildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "images.internal.coder.buildable.ImfilterBuildable"));
  mxSetCell(mxcell3p, 2, mxCreateString(
             "images.internal.coder.buildable.GetnumcoresBuildable"));
  mxSetCell(mxcell3p, 3, mxCreateString(
             "images.internal.coder.buildable.CannyThresholdingTbbBuildable"));
  mxSetCell(mxcell3p, 4, mxCreateString(
             "images.internal.coder.buildable.IppreconstructBuildable"));
  return(mxcell3p);
}

mxArray *sf_c5_flightControlSystem_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("ippfilter_real64");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c5_flightControlSystem_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c5_flightControlSystem(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPhDBxMDABqQ4IEwwYIXyGaFijHBxFri4AhCXVBakgsSLi5I9U4B0XmIumJ9YWuG"
    "Zl5YPNt+CAWE+GxbzGZHM54SKQ8AHe8r0izig62fBop8DSb8AlO+Smu6Yl56TygcVp8wdCg6U6Y"
    "fYH0DAHwpo/gDxM4vjE5NLMstS45NN49NyMtMzSpzz80qK8nOCK4tLUnNh/gMAQWkeVg=="
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c5_flightControlSystem_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sTIPGu8ZKUEZCLddXCSnjtH";
}

static void sf_opaque_initialize_c5_flightControlSystem(void *chartInstanceVar)
{
  initialize_params_c5_flightControlSystem
    ((SFc5_flightControlSystemInstanceStruct*) chartInstanceVar);
  initialize_c5_flightControlSystem((SFc5_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_enable_c5_flightControlSystem(void *chartInstanceVar)
{
  enable_c5_flightControlSystem((SFc5_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_disable_c5_flightControlSystem(void *chartInstanceVar)
{
  disable_c5_flightControlSystem((SFc5_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_gateway_c5_flightControlSystem(void *chartInstanceVar)
{
  sf_gateway_c5_flightControlSystem((SFc5_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c5_flightControlSystem(SimStruct*
  S)
{
  return get_sim_state_c5_flightControlSystem
    ((SFc5_flightControlSystemInstanceStruct *)sf_get_chart_instance_ptr(S));/* raw sim ctx */
}

static void sf_opaque_set_sim_state_c5_flightControlSystem(SimStruct* S, const
  mxArray *st)
{
  set_sim_state_c5_flightControlSystem((SFc5_flightControlSystemInstanceStruct*)
    sf_get_chart_instance_ptr(S), st);
}

static void sf_opaque_cleanup_runtime_resources_c5_flightControlSystem(void
  *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc5_flightControlSystemInstanceStruct*) chartInstanceVar
      )->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_flightControlSystem_optimization_info();
    }

    mdl_cleanup_runtime_resources_c5_flightControlSystem
      ((SFc5_flightControlSystemInstanceStruct*) chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c5_flightControlSystem(void *chartInstanceVar)
{
  mdl_start_c5_flightControlSystem((SFc5_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_mdl_terminate_c5_flightControlSystem(void
  *chartInstanceVar)
{
  mdl_terminate_c5_flightControlSystem((SFc5_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

static void sf_opaque_init_subchart_simstructs(void *chartInstanceVar)
{
  initSimStructsc5_flightControlSystem((SFc5_flightControlSystemInstanceStruct*)
    chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c5_flightControlSystem(SimStruct *S)
{
  int i;
  for (i=0;i<ssGetNumRunTimeParams(S);i++) {
    if (ssGetSFcnParamTunable(S,i)) {
      ssUpdateDlgParamAsRunTimeParam(S,i);
    }
  }

  sf_warn_if_symbolic_dimension_param_changed(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c5_flightControlSystem
      ((SFc5_flightControlSystemInstanceStruct*)sf_get_chart_instance_ptr(S));
    initSimStructsc5_flightControlSystem((SFc5_flightControlSystemInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c5_flightControlSystem_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [21] = {
    "eNrtWE9vG0UUn1ihakWJckBClZDqIxek0lKpSFCSrO3UwiEW66Qol2iy++wdPDuznT92zOfhwo0",
    "zF8S34GNw5Mib9dq1NsbesSG0iJU2m9md37z3fvP+jclO+4TgtYf33QeE3HFPvGtker1TjHcW7u",
    "n7XfJ5MT54lxBh0y5VNNXE/xI0hW9AS24Nk6It+rI6lok+KBARLpBJZbzkapZazsSwZUXkJOuXC",
    "YuSMJGWx0e4II1PBZ/8ldzMmi5KbDAFkWkBxCZR0g6SFqeD1SwoMw4SiIbapt5caTChzZyp+sRy",
    "wzIOzWuI2kIbiizoNfaGhhoIzLUfyc5eHc7QMs04o6I61wnVIWToHQbOshj/nlqD7FXCRglV5gg",
    "SOgLdYcNcuhRQSTrTOPuKCWqkYpQ3Ux641Sra2+Vo44mMgfvuEdp7pIAOM8mE8QyIsIU8NwW94t",
    "CAKzvwlBvCK+ui4ZzBGJTf/vYDOQJFB3Aq/HTO96h5nTvlPJYqYg1L4Zyqwwh9V0Pslzcw6HRI0",
    "R2hh8t4YSGnuK17io3QN/zk2rTtwn+jXGfTqffrjbC53OYIvP1qLrcViYByrv2wPZl1YAQ8l9+g",
    "hm6Ancr3AGvN4p5E73DZxjNjWcEwEgpsIEXMqnvlqITKC9vXWKQqwFnqwgBipHmu+nyhdXFktZF",
    "pgCmn0elUlHcT2xYGVJ9GULnGKMo0oMK5X3nKjZl2gYRoZMnkVlZeYRqDG0GJ7lvRGEs1RI59i9",
    "lrrlwk+KEhHmBiNpAnuSZ69znltqLOqR5g/KB7nGnMsn5yEeviZyNwRKMEYlc5GYcTzLO4QNUt1",
    "q7kH6K1I2YmDdCRYlnVSLKY0LHoOpZ6kwzOxFDIsWgpmYZF57XCrwAwa1AlmBgcYQlXkxYqX01r",
    "Ba96eXb3bXIcz9RweuV84xgEVkNnq+saaIRR1RSRjFGhbbAh+x6bGKGZNlioJ9NSH+f99yPyuv+",
    "+X6H/nvXtq3DkBo7McbPnRwv4nSVyycKzLO9ebbWeNfxvp8AdLODeK8nZLeHcvH28H57+Uj/+4u",
    "cnv/5w8eDlZz9+uo38n2p+55u9YvzhrMeZZ9TRjaTj5r5Y0Gt3yfofLKy/X4x1r909ts8uvjprX",
    "gSdOP42CMV35sV0f9boWyvpO3tfd30VBlwevypqx8UZy42pnfb+bv1nC/reWcPHvQV/IuT3L7fD",
    "v39Qxi/j626JLzduwOBQDDgs+u/metQPtsNP5XfX2FEv2VHP++1L6rIqXEZPL/ucDRLXJhgleTj",
    "BzJDu/Q3x5osjt4x7W/T8n5d/3r4q9e62ceSWcdva51vH3/b5j1bkXVKav/8G21F+btrPvWl2/U",
    "b8+q2Hxfj5/OwfJIzHS04fxWc8IPSXff2P+PcfnvzN+sum46/4kfjiyaGgfILHjelxrnjdVe63v",
    "vknBVQvP9P9G/WELDkvLOur7pfi243HTMRyrD/+5PHTx9vUpz8BtkoO/A==",
    ""
  };

  static char newstr [1485] = "";
  newstr[0] = '\0';
  for (i = 0; i < 21; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c5_flightControlSystem(SimStruct *S)
{
  const char* newstr = sf_c5_flightControlSystem_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(549408543U));
  ssSetChecksum1(S,(867843399U));
  ssSetChecksum2(S,(425370817U));
  ssSetChecksum3(S,(883505495U));
}

static void mdlRTW_c5_flightControlSystem(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c5_flightControlSystem(SimStruct *S)
{
  SFc5_flightControlSystemInstanceStruct *chartInstance;
  chartInstance = (SFc5_flightControlSystemInstanceStruct *)utMalloc(sizeof
    (SFc5_flightControlSystemInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc5_flightControlSystemInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway =
    sf_opaque_gateway_c5_flightControlSystem;
  chartInstance->chartInfo.initializeChart =
    sf_opaque_initialize_c5_flightControlSystem;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c5_flightControlSystem;
  chartInstance->chartInfo.mdlTerminate =
    sf_opaque_mdl_terminate_c5_flightControlSystem;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c5_flightControlSystem;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c5_flightControlSystem;
  chartInstance->chartInfo.disableChart =
    sf_opaque_disable_c5_flightControlSystem;
  chartInstance->chartInfo.getSimState =
    sf_opaque_get_sim_state_c5_flightControlSystem;
  chartInstance->chartInfo.setSimState =
    sf_opaque_set_sim_state_c5_flightControlSystem;
  chartInstance->chartInfo.getSimStateInfo =
    sf_get_sim_state_info_c5_flightControlSystem;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c5_flightControlSystem;
  chartInstance->chartInfo.mdlSetWorkWidths =
    mdlSetWorkWidths_c5_flightControlSystem;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->chartInfo.chartStateSetterFcn = NULL;
  chartInstance->chartInfo.chartStateGetterFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0,
    chartInstance->c5_JITStateAnimation,
    chartInstance->c5_JITTransitionAnimation);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c5_flightControlSystem(chartInstance);
}

void c5_flightControlSystem_method_dispatcher(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c5_flightControlSystem(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c5_flightControlSystem(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c5_flightControlSystem(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c5_flightControlSystem_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
