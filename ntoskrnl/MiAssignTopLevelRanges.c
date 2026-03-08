/*
 * XREFs of MiAssignTopLevelRanges @ 0x140B604AC
 * Callers:
 *     MiInitializeSystemVa @ 0x140B60308 (MiInitializeSystemVa.c)
 * Callees:
 *     MiHyperSpaceSize @ 0x140222C78 (MiHyperSpaceSize.c)
 *     ExGenRandom @ 0x14027E2F0 (ExGenRandom.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     qsort @ 0x1403D48B0 (qsort.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiAssignSystemVa @ 0x140B60784 (MiAssignSystemVa.c)
 *     MiAddSubRegionEntropy @ 0x140B609A8 (MiAddSubRegionEntropy.c)
 */

__int64 __fastcall MiAssignTopLevelRanges(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rdx
  int v6; // r8d
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  _DWORD *v10; // rbx
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r10
  _DWORD *v17; // rbx
  unsigned __int64 *v18; // rbx
  __int64 v19; // rsi
  int v20; // eax
  unsigned __int64 v21; // rax
  __int64 result; // rax
  int *v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD v28[46]; // [rsp+20h] [rbp-E0h] BYREF

  memset(v28, 0, 0x168uLL);
  *a2 = 0LL;
  LODWORD(v5) = 1;
  v28[2] = a3;
  v6 = 0;
  do
  {
    v7 = (unsigned int)v5;
    ++v6;
    v5 = (unsigned int)(v5 + 1);
    v8 = 3 * v7;
    LODWORD(v28[v8]) = v6;
    v28[v8 + 2] = 0x100000000000LL;
  }
  while ( v6 < 4 );
  v9 = 3 * v5;
  v10 = (_DWORD *)&v28[3] + 1;
  v11 = ((unsigned __int64)HIDWORD(MiFlags) >> 3) & 1;
  LODWORD(v28[v9]) = 5;
  v28[v9 + 2] = v11 << 44;
  v12 = 6LL;
  v13 = 3LL * (unsigned int)(v5 + 1);
  LODWORD(v28[v13]) = 6;
  v28[v13 + 2] = 0x100000000000LL;
  do
  {
    *v10 = ExGenRandom(1);
    v10 += 6;
    --v12;
  }
  while ( v12 );
  qsort(&v28[3], 6uLL, 0x18uLL, MiRegionAssignmentSort);
  v14 = 8LL;
  LODWORD(v28[21]) = 7;
  LODWORD(v28[24]) = 8;
  v28[23] = 0x28000000000LL;
  v15 = MiHyperSpaceSize();
  LODWORD(v28[27]) = 9;
  LODWORD(v28[30]) = 10;
  v28[32] = v16;
  LODWORD(v28[33]) = 11;
  v28[35] = v16;
  v28[26] = v16 + ((v15 + 0x7FFFFFFFFFLL) & 0xFFFFFF8000000000uLL);
  v17 = (_DWORD *)&v28[21] + 1;
  LODWORD(v28[36]) = 12;
  v28[29] = 0x10000000000LL;
  v28[38] = v16;
  LODWORD(v28[39]) = 13;
  v28[41] = v16;
  LODWORD(v28[42]) = 14;
  v28[44] = v16;
  do
  {
    *v17 = ExGenRandom(1);
    v17 += 6;
    --v14;
  }
  while ( v14 );
  qsort(&v28[24], 7uLL, 0x18uLL, MiRegionAssignmentSort);
  v18 = &v28[2];
  v19 = 15LL;
  do
  {
    v20 = *((_DWORD *)v18 - 4);
    if ( v20 == 5 )
    {
      if ( !*v18 )
        goto LABEL_12;
    }
    else if ( v20 == 14 )
    {
      v26 = 3LL;
      v27 = (__int64)((8 * ((0x140000000uLL >> 39) & 0x1FF) - 0x90482413000LL) << 25) >> 16;
      do
      {
        v27 = v27 << 25 >> 16;
        --v26;
      }
      while ( v26 );
      *(v18 - 1) = v27;
      goto LABEL_12;
    }
    v21 = (*v18 + 0x7FFFFFFFFFLL) & 0xFFFFFF8000000000uLL;
    *v18 = v21;
    result = MiAssignSystemVa(v21 >> 39);
    if ( !result )
      return result;
    *(v18 - 1) = result;
LABEL_12:
    LODWORD(v14) = v14 + 1;
    v18 += 3;
  }
  while ( (unsigned int)v14 < 0xF );
  v23 = (int *)v28;
  do
  {
    v24 = *((_QWORD *)v23 + 1);
    v25 = *v23;
    v23 += 6;
    v25 *= 2LL;
    qword_140C6A158[v25] = v24;
    qword_140C6A160[v25] = *((_QWORD *)v23 - 1);
    --v19;
  }
  while ( v19 );
  MiAddSubRegionEntropy();
  return 1LL;
}
