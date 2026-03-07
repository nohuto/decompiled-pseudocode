__int64 __fastcall vArctan(int a1, int a2, float *a3, int *a4)
{
  float v4; // xmm1_4
  float v6; // xmm4_4
  int v8; // eax
  unsigned int v9; // edi
  int v10; // edx
  _DWORD *v11; // r8
  float v12; // xmm4_4
  __int64 result; // rax
  float v14; // xmm2_4
  float v15; // xmm3_4
  float v16; // xmm3_4
  int v17; // xmm5_4
  float *v18; // rax
  int v19[6]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(float *)&a1;
  v6 = *(float *)&a2;
  v19[0] = a1;
  if ( *(float *)&a1 >= 0.0 )
  {
    v8 = 2;
    v9 = 0;
  }
  else
  {
    v8 = 3;
    v9 = 1;
    LODWORD(v4) = a1 ^ _xmm;
    v19[0] = a1 ^ _xmm;
  }
  if ( *(float *)&a2 < 0.0 )
  {
    v9 = v8;
    LODWORD(v6) = a2 ^ _xmm;
  }
  if ( v6 > v4 )
  {
    *(float *)v19 = v6;
    v4 = v6;
    v9 |= 4u;
  }
  if ( !EFLOAT::bIsZero((EFLOAT *)v19) )
  {
    v19[0] = v10;
    bFToL((float)(v12 * FP_ARCTAN_TABLE_SIZE) / v4, v19, 5u);
    v14 = gaefArctan[v19[0]];
    *a3 = gaefArctan[v19[0] + 1];
    v15 = *a3 - v14;
    v16 = (float)(v15 * eFraction()) + v14;
    *a3 = v16;
    switch ( v9 )
    {
      case 1u:
        v18 = (float *)FP_180_0;
        break;
      case 2u:
        v18 = (float *)FP_360_0;
        break;
      case 3u:
        v18 = (float *)FP_180_0;
        goto LABEL_25;
      case 4u:
        v18 = (float *)FP_90_0;
        break;
      default:
        switch ( v9 )
        {
          case 5u:
            v18 = (float *)FP_90_0;
            break;
          case 6u:
            v18 = (float *)FP_270_0;
            break;
          case 7u:
            v18 = (float *)FP_270_0;
            goto LABEL_24;
          default:
LABEL_26:
            result = v9;
            v10 = byte_1C032AB90[v9];
            goto LABEL_27;
        }
LABEL_25:
        *a3 = v16 + *v18;
        goto LABEL_26;
    }
LABEL_24:
    LODWORD(v16) ^= v17;
    goto LABEL_25;
  }
  result = FP_0_0;
  *v11 = FP_0_0;
LABEL_27:
  *a4 = v10;
  return result;
}
