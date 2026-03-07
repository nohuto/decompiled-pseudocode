__int64 __fastcall EXFORMOBJ::bInverse(EXFORMOBJ *this, struct MATRIX *a2)
{
  __int64 v2; // rbx
  float v3; // xmm3_4
  float v5; // xmm3_4
  float v6; // xmm2_4
  __int64 v7; // rdx
  char v8; // r8
  unsigned int v9; // edi
  int v10; // xmm0_4
  int v11; // eax
  float v12; // xmm4_4
  float v13; // xmm2_4
  float v14; // xmm4_4
  unsigned int v15; // r8d
  float v16; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  *(_DWORD *)(*(_QWORD *)this + 32LL) = *((_DWORD *)a2 + 8) & 0xFFFFFFE7 | 0x10;
  if ( (*((_DWORD *)a2 + 8) & 2) != 0 )
  {
    *(_QWORD *)v2 = 1031798784LL;
    *(_DWORD *)(v2 + 12) = 1031798784;
    *(_DWORD *)(v2 + 8) = 0;
    *(_DWORD *)(v2 + 16) = *((_DWORD *)a2 + 4);
    *(_DWORD *)(v2 + 20) = *((_DWORD *)a2 + 5);
    v3 = COERCE_FLOAT(*(_DWORD *)(v2 + 20) ^ _xmm) * 0.0625;
    *(float *)(v2 + 16) = COERCE_FLOAT(*(_DWORD *)(v2 + 16) ^ _xmm) * 0.0625;
    *(float *)(v2 + 20) = v3;
    *(_DWORD *)(v2 + 24) = -(*((int *)a2 + 6) >> 4);
    *(_DWORD *)(v2 + 28) = -(*((int *)a2 + 7) >> 4);
    return 1LL;
  }
  v5 = *((float *)a2 + 1);
  v6 = (float)(*((float *)a2 + 3) * *(float *)a2) - (float)(*((float *)a2 + 2) * v5);
  v16 = v6;
  v9 = 0;
  if ( EFLOAT::bIsZero((EFLOAT *)&v16) )
    return 0LL;
  if ( (v8 & 1) != 0 )
  {
    *(_DWORD *)(v2 + 4) = 0;
    v10 = 0;
  }
  else
  {
    *(_DWORD *)(v2 + 4) = COERCE_UNSIGNED_INT(v5 / v6) ^ _xmm;
    v10 = COERCE_UNSIGNED_INT(*(float *)(v7 + 8) / v6) ^ _xmm;
  }
  *(_DWORD *)(v2 + 8) = v10;
  *(float *)v2 = *(float *)(v7 + 12) / v6;
  *(float *)(v2 + 12) = *(float *)v7 / v6;
  v11 = *(_DWORD *)(v7 + 32);
  if ( (v11 & 0x40) != 0 )
  {
    *(_QWORD *)(v2 + 16) = 0LL;
    *(_QWORD *)(v2 + 24) = 0LL;
    return 1LL;
  }
  if ( (v11 & 1) != 0 )
  {
    v12 = *(float *)v2 * *(float *)(v7 + 16);
    *(float *)(v2 + 16) = v12;
    v13 = *(float *)(v2 + 12) * *(float *)(v7 + 20);
  }
  else
  {
    v12 = (float)(*(float *)(v2 + 8) * *(float *)(v7 + 20)) + (float)(*(float *)v2 * *(float *)(v7 + 16));
    *(float *)(v2 + 16) = v12;
    v13 = (float)(*(float *)(v2 + 12) * *(float *)(v7 + 20)) + (float)(*(float *)(v2 + 4) * *(float *)(v7 + 16));
  }
  LODWORD(v14) = LODWORD(v12) ^ _xmm;
  *(float *)(v2 + 16) = v14;
  *(_DWORD *)(v2 + 20) = LODWORD(v13) ^ _xmm;
  if ( !(unsigned int)bFToL(v14, (int *)(v2 + 24), 6u) )
    return 0LL;
  LOBYTE(v9) = (unsigned int)bFToL(*(float *)(v2 + 20), (int *)(v2 + 28), v15) != 0;
  return v9;
}
