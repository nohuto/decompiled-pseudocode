/*
 * XREFs of exp @ 0x1C00DD7F8
 * Callers:
 *     ?CitpDPCalcInit@@YAXPEAU_CIT_DP_CALC_CONTEXT@@NN@Z @ 0x1C023F3C4 (-CitpDPCalcInit@@YAXPEAU_CIT_DP_CALC_CONTEXT@@NN@Z.c)
 * Callees:
 *     splitexp @ 0x1C00DDABC (splitexp.c)
 *     _handle_error @ 0x1C00DE008 (_handle_error.c)
 */

double __cdecl exp(double X)
{
  __int64 v1; // r8
  __int64 v2; // r9
  double v3; // xmm4_8
  int v4; // ecx
  unsigned __int64 v5; // rax
  int v6; // edx
  int v8; // r9d
  __int64 v9; // [rsp+60h] [rbp+10h] BYREF
  double v10; // [rsp+68h] [rbp+18h]
  double v11; // [rsp+70h] [rbp+20h]
  double v12; // [rsp+78h] [rbp+28h]

  LODWORD(v9) = 0;
  v11 = 0.0;
  v10 = 0.0;
  v3 = X;
  v12 = X;
  v4 = LODWORD(X);
  v5 = *(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL;
  v6 = -17155601;
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFuLL) < 0x40862E42FEFA39EFLL )
  {
    v4 = 0;
    if ( v5 < 0x3FB0000000000000LL )
    {
      if ( v5 >= 0x3C00000000000000LL )
        v3 = X
           * (((((((((X * 0.0000002755731922398589 + 0.000002755731922398589) * X + 0.0000248015873015873) * X
                  + 0.0001984126984126984)
                 * X
                 + 0.001388888888888889)
                * X
                + 0.008333333333333333)
               * X
               + 0.04166666666666666)
              * X
              + 0.1666666666666667)
             * X
             + 0.5)
            * X
            + 1.0);
      return v3 + 1.0;
    }
LABEL_16:
    splitexp(v4, v6, v1, v2, *(__int64 *)&DOUBLE_5_689487495325456eN11, (__int64)&v9);
    v8 = v9;
    if ( (unsigned int)(v9 + 1022) > 0x7FD )
    {
      v9 = ((int)v9 - (int)v9 / 2 + 1023LL) << 52;
      return (v10 + v11) * COERCE_DOUBLE((v8 / 2 + 1023LL) << 52) * *(double *)&v9;
    }
    else
    {
      v9 = ((int)v9 + 1023LL) << 52;
      return (v10 + v11) * *(double *)&v9;
    }
  }
  v6 = 0;
  if ( v5 < 0x7FF0000000000000LL )
  {
    if ( X > 709.782712893384 )
    {
      handle_error("exp", 20LL, 0x7FF0000000000000LL, 3LL, 17, 34, *(_QWORD *)&X, 0LL, 1);
      return X;
    }
    X = DOUBLE_N745_1332191019411;
    if ( v3 < -745.1332191019411 )
    {
      handle_error("exp", 20LL, 0LL, 4LL, 18, 34, *(_QWORD *)&v3, 0LL, 1);
      return X;
    }
    goto LABEL_16;
  }
  if ( (*(_QWORD *)&X & 0xFFFFFFFFFFFFFLL) != 0 )
  {
    handle_error("exp", 20LL, *(_QWORD *)&X | 0x8000000000000LL, 1LL, 0, 33, *(_QWORD *)&X, 0LL, 1);
  }
  else if ( X < 0.0 )
  {
    return 0.0;
  }
  return X;
}
