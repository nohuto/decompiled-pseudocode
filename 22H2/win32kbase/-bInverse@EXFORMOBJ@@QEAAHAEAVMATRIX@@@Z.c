/*
 * XREFs of ?bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z @ 0x1C0022460
 * Callers:
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C00245D0 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C00245AC (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     bFToL @ 0x1C0082B80 (bFToL.c)
 */

__int64 __fastcall EXFORMOBJ::bInverse(float **this, struct MATRIX *a2)
{
  float *v2; // rbx
  float v3; // xmm2_4
  float v5; // xmm3_4
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // r8
  int v9; // xmm0_4
  int v10; // eax
  float v11; // xmm2_4
  __int64 v12; // rcx
  __int64 v13; // r8
  float v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = *this;
  *((_DWORD *)*this + 8) = *((_DWORD *)a2 + 8) & 0xFFFFFFE7 | 0x10;
  if ( (*((_DWORD *)a2 + 8) & 2) != 0 )
  {
    v2[1] = 0.0;
    v2[2] = 0.0;
    *v2 = 0.0625;
    v2[3] = 0.0625;
    v2[4] = *((float *)a2 + 4);
    v2[5] = *((float *)a2 + 5);
    v3 = COERCE_FLOAT(*((_DWORD *)v2 + 4) ^ _xmm) * 0.0625;
    *((_DWORD *)v2 + 5) ^= _xmm;
    v2[4] = v3;
    v2[5] = v2[5] * 0.0625;
    *((_DWORD *)v2 + 6) = -(*((int *)a2 + 6) >> 4);
    *((_DWORD *)v2 + 7) = -(*((int *)a2 + 7) >> 4);
    return 1LL;
  }
  v5 = (float)(*((float *)a2 + 3) * *(float *)a2) - (float)(*((float *)a2 + 2) * *((float *)a2 + 1));
  v14 = v5;
  if ( !(unsigned int)EFLOAT::bIsZero((EFLOAT *)&v14) )
  {
    if ( (v8 & 1) != 0 )
    {
      v2[1] = 0.0;
      v9 = 0;
    }
    else
    {
      *((_DWORD *)v2 + 1) = COERCE_UNSIGNED_INT(*(float *)(v6 + 4) / v5) ^ _xmm;
      v9 = COERCE_UNSIGNED_INT(*(float *)(v6 + 8) / v5) ^ _xmm;
    }
    *((_DWORD *)v2 + 2) = v9;
    *v2 = *(float *)(v6 + 12) / v5;
    v2[3] = *(float *)v6 / v5;
    v10 = *(_DWORD *)(v6 + 32);
    if ( (v10 & 0x40) != 0 )
    {
      v2[4] = 0.0;
      v2[5] = 0.0;
      v2[6] = 0.0;
      v2[7] = 0.0;
      return 1LL;
    }
    if ( (v10 & 1) != 0 )
    {
      v2[4] = *v2 * *(float *)(v6 + 16);
      v11 = v2[3] * *(float *)(v6 + 20);
    }
    else
    {
      v2[4] = (float)(v2[2] * *(float *)(v6 + 20)) + (float)(*v2 * *(float *)(v6 + 16));
      v11 = (float)(v2[3] * *(float *)(v6 + 20)) + (float)(v2[1] * *(float *)(v6 + 16));
    }
    v2[5] = v11;
    *((_DWORD *)v2 + 4) ^= _xmm;
    *((_DWORD *)v2 + 5) = LODWORD(v11) ^ _xmm;
    if ( (unsigned int)bFToL(v7, v2 + 6, 6LL) && (unsigned int)bFToL(v12, v2 + 7, v13) )
      return 1LL;
  }
  return 0LL;
}
