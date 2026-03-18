/*
 * XREFs of log @ 0x1C00DDBE8
 * Callers:
 *     ?CitpDPCalcInit@@YAXPEAU_CIT_DP_CALC_CONTEXT@@NN@Z @ 0x1C023F3C4 (-CitpDPCalcInit@@YAXPEAU_CIT_DP_CALC_CONTEXT@@NN@Z.c)
 * Callees:
 *     _handle_error @ 0x1C00DE008 (_handle_error.c)
 */

double __cdecl log(double X)
{
  double v1; // r8
  double v2; // xmm4_8
  __int64 v3; // r8
  int v4; // r9d
  double v5; // xmm4_8
  double v6; // xmm3_8
  double v7; // xmm2_8
  __int64 v8; // rdx
  int v9; // r8d
  double v10; // xmm3_8
  int v11; // [rsp+20h] [rbp-38h]
  double v12; // [rsp+30h] [rbp-28h]
  __int64 v13; // [rsp+60h] [rbp+8h]

  v1 = X;
  v2 = X;
  if ( (*(_QWORD *)&X & 0x7FF0000000000000LL) == 0x7FF0000000000000LL )
  {
    if ( (*(_QWORD *)&X & 0xFFFFFFFFFFFFFLL) != 0 )
    {
      X = 0.0;
      v3 = *(_QWORD *)&v1 | 0x8000000000000LL;
      v12 = v2;
      v11 = 0;
LABEL_4:
      handle_error("log", 26LL, v3, 1LL, v11, 33, *(_QWORD *)&v12, 0LL, 1);
      return X;
    }
    if ( X >= 0.0 )
      return X;
LABEL_7:
    X = 0.0;
    v3 = 0xFFF8000000000000uLL;
    v12 = v2;
    v11 = 8;
    goto LABEL_4;
  }
  if ( (*(_QWORD *)&X & 0x7FFFFFFFFFFFFFFFLL) == 0 )
  {
    X = 0.0;
    handle_error("log", 26LL, 0xFFF0000000000000uLL, 2LL, 4, 34, *(_QWORD *)&v2, 0LL, 1);
    return X;
  }
  v4 = 0;
  if ( X < 0.0 )
    goto LABEL_7;
  if ( (unsigned __int64)(*(_QWORD *)&X - 0x3FEE0FAA00000000LL) > 0x2F88200000000LL )
  {
    if ( *(_QWORD *)&X < 0x10000000000000uLL )
    {
      v4 = 60;
      v1 = COERCE_DOUBLE(*(_QWORD *)&X | 0x3D0000000000000LL) - 2.565335500811485e-290;
    }
    v13 = *(_QWORD *)&v1 & 0xFFFFFFFFFFFFFLL | 0x3FE0000000000000LL;
    v8 = ((*(_QWORD *)&v1 >> 45) & 1) + ((*(_QWORD *)&v1 >> 46) & 0x3F | 0x40);
    v9 = ((*(_QWORD *)&v1 >> 52) & 0x7FF) - v4 - 1023;
    v10 = (*(double *)&v13 - (double)(int)v8 * 0.0078125)
        / ((*(double *)&v13 - (double)(int)v8 * 0.0078125) * 0.5 + (double)(int)v8 * 0.0078125);
    return ((v10 * v10 * 0.002232198107585598 + 0.01249999999781387) * (v10 * v10) + 0.08333333333333336)
         * (v10
          * v10)
         * v10
         + v10
         + qword_1C02527C0[v8]
         + (double)v9 * 0.00000005769999047543285
         + (double)v9 * 0.6931471228599548
         + qword_1C02525B0[v8];
  }
  else
  {
    v5 = X - 1.0;
    v6 = v5 / (v5 + 2.0);
    v7 = v6 + v6;
    return (((v7 * v7 * 0.0004348877777076146 + 0.002232139987919448) * (v7 * v7) + 0.01250000000377175) * (v7 * v7)
          + 0.08333333333333179)
         * (v7
          * v7
          * v7)
         - v6 * v5
         + v5;
  }
}
