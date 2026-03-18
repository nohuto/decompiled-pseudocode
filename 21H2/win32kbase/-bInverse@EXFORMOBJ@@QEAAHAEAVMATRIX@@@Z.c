/*
 * XREFs of ?bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z @ 0x1C009C250
 * Callers:
 *     ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C0031540 (-vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0031514 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     bFToL @ 0x1C009B150 (bFToL.c)
 */

__int64 __fastcall EXFORMOBJ::bInverse(EXFORMOBJ *this, struct MATRIX *a2)
{
  __int64 v2; // rbx
  float v3; // xmm3_4
  float v5; // xmm3_4
  __int64 v6; // rdx
  char v7; // r8
  int v8; // xmm0_4
  int v9; // eax
  float v10; // xmm4_4
  float v11; // xmm2_4
  float v12; // xmm4_4
  unsigned int v13; // r8d
  float v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  *(_DWORD *)(*(_QWORD *)this + 32LL) = *((_DWORD *)a2 + 8) & 0xFFFFFFE7 | 0x10;
  if ( (*((_DWORD *)a2 + 8) & 2) != 0 )
  {
    *(_DWORD *)(v2 + 4) = 0;
    *(_DWORD *)(v2 + 8) = 0;
    *(_DWORD *)v2 = 1031798784;
    *(_DWORD *)(v2 + 12) = 1031798784;
    *(_DWORD *)(v2 + 16) = *((_DWORD *)a2 + 4);
    *(_DWORD *)(v2 + 20) = *((_DWORD *)a2 + 5);
    v3 = COERCE_FLOAT(*(_DWORD *)(v2 + 20) ^ _xmm) * 0.0625;
    *(float *)(v2 + 16) = COERCE_FLOAT(*(_DWORD *)(v2 + 16) ^ _xmm) * 0.0625;
    *(float *)(v2 + 20) = v3;
    *(_DWORD *)(v2 + 24) = -(*((int *)a2 + 6) >> 4);
    *(_DWORD *)(v2 + 28) = -(*((int *)a2 + 7) >> 4);
    return 1LL;
  }
  v5 = (float)(*((float *)a2 + 3) * *(float *)a2) - (float)(*((float *)a2 + 2) * *((float *)a2 + 1));
  v14 = v5;
  if ( !EFLOAT::bIsZero((EFLOAT *)&v14) )
  {
    if ( (v7 & 1) != 0 )
    {
      *(_DWORD *)(v2 + 4) = 0;
      v8 = 0;
    }
    else
    {
      *(_DWORD *)(v2 + 4) = COERCE_UNSIGNED_INT(*(float *)(v6 + 4) / v5) ^ _xmm;
      v8 = COERCE_UNSIGNED_INT(*(float *)(v6 + 8) / v5) ^ _xmm;
    }
    *(_DWORD *)(v2 + 8) = v8;
    *(float *)v2 = *(float *)(v6 + 12) / v5;
    *(float *)(v2 + 12) = *(float *)v6 / v5;
    v9 = *(_DWORD *)(v6 + 32);
    if ( (v9 & 0x40) != 0 )
    {
      *(_DWORD *)(v2 + 16) = 0;
      *(_DWORD *)(v2 + 20) = 0;
      *(_DWORD *)(v2 + 24) = 0;
      *(_DWORD *)(v2 + 28) = 0;
      return 1LL;
    }
    if ( (v9 & 1) != 0 )
    {
      v10 = *(float *)v2 * *(float *)(v6 + 16);
      *(float *)(v2 + 16) = v10;
      v11 = *(float *)(v2 + 12) * *(float *)(v6 + 20);
    }
    else
    {
      v10 = (float)(*(float *)(v2 + 8) * *(float *)(v6 + 20)) + (float)(*(float *)v2 * *(float *)(v6 + 16));
      *(float *)(v2 + 16) = v10;
      v11 = (float)(*(float *)(v2 + 12) * *(float *)(v6 + 20)) + (float)(*(float *)(v2 + 4) * *(float *)(v6 + 16));
    }
    LODWORD(v12) = LODWORD(v10) ^ _xmm;
    *(float *)(v2 + 16) = v12;
    *(_DWORD *)(v2 + 20) = LODWORD(v11) ^ _xmm;
    if ( (unsigned int)bFToL(v12, (int *)(v2 + 24), 6u)
      && (unsigned int)bFToL(*(float *)(v2 + 20), (int *)(v2 + 28), v13) )
    {
      return 1LL;
    }
  }
  return 0LL;
}
