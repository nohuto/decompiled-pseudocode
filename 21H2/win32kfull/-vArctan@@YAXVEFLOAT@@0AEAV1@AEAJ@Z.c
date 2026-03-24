/*
 * XREFs of ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1C02B0DA4
 * Callers:
 *     ?lfOrientation@IFIOBJ@@QEAAJXZ @ 0x1C00626B8 (-lfOrientation@IFIOBJ@@QEAAJXZ.c)
 *     cjIFIMetricsToOTMW @ 0x1C0064510 (cjIFIMetricsToOTMW.c)
 *     GreAngleArc @ 0x1C029FD70 (GreAngleArc.c)
 *     NtGdiArcInternal @ 0x1C02B1280 (NtGdiArcInternal.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0098748 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     bFToL @ 0x1C00FB538 (bFToL.c)
 *     eFraction @ 0x1C02E04BC (eFraction.c)
 */

void __fastcall vArctan(int a1, int a2, float *a3, int *a4)
{
  float v4; // xmm1_4
  float v5; // xmm4_4
  int v8; // ecx
  unsigned int v9; // eax
  __int64 v10; // rdi
  int v11; // edx
  _DWORD *v12; // r8
  float v13; // xmm4_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  float v16; // xmm3_4
  int v17; // xmm5_4
  float *v18; // rax
  float *v19; // rax
  int v20[6]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(float *)&a1;
  v5 = *(float *)&a2;
  v20[0] = a1;
  v8 = 1;
  if ( *(float *)v20 >= 0.0 )
  {
    v9 = 0;
    v10 = 2LL;
  }
  else
  {
    v9 = 1;
    v10 = 3LL;
  }
  if ( v9 )
  {
    LODWORD(v4) ^= _xmm;
    *(float *)v20 = v4;
  }
  if ( *(float *)&a2 >= 0.0 )
    v8 = 0;
  else
    LODWORD(v5) = a2 ^ _xmm;
  if ( !v8 )
    v10 = v9;
  if ( v5 > v4 )
  {
    *(float *)v20 = v5;
    v4 = v5;
    v10 = (unsigned int)v10 | 4;
  }
  if ( !EFLOAT::bIsZero((EFLOAT *)v20) )
  {
    v20[0] = v11;
    bFToL((float)(v13 * FP_ARCTAN_TABLE_SIZE) / v4, v20, 5u);
    v14 = gaefArctan[v20[0]];
    *a3 = gaefArctan[v20[0] + 1];
    v15 = *a3 - v14;
    v16 = (float)(v15 * eFraction()) + v14;
    *a3 = v16;
    switch ( (_DWORD)v10 )
    {
      case 1:
        v19 = (float *)FP_180_0;
        break;
      case 2:
        v18 = (float *)FP_360_0;
        goto LABEL_23;
      case 3:
        v19 = (float *)FP_180_0;
        goto LABEL_31;
      case 4:
        v19 = (float *)FP_90_0;
        break;
      default:
        switch ( (_DWORD)v10 )
        {
          case 5:
            v19 = (float *)FP_90_0;
            break;
          case 6:
            v19 = (float *)FP_270_0;
            break;
          case 7:
            v18 = (float *)FP_270_0;
LABEL_23:
            *a3 = *v18 + COERCE_FLOAT(LODWORD(v16) ^ v17);
            goto LABEL_32;
          default:
LABEL_32:
            v11 = byte_1C02FBBE8[v10];
            goto LABEL_33;
        }
LABEL_31:
        *a3 = v16 + *v19;
        goto LABEL_32;
    }
    LODWORD(v16) ^= v17;
    goto LABEL_31;
  }
  *v12 = FP_0_0;
LABEL_33:
  *a4 = v11;
}
