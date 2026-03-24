/*
 * XREFs of HvlGetSparseGpaPagesAccessState @ 0x1405C983C
 * Callers:
 *     VmpProcessAccessedBatch @ 0x1405A4780 (VmpProcessAccessedBatch.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x1404FA974 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlGetSparseGpaPagesAccessState(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6)
{
  unsigned int v6; // r15d
  __int64 v10; // r14
  _QWORD *v11; // rsi
  _QWORD *v12; // rax
  void *v13; // rcx
  const void *v14; // r13
  __int64 v15; // rbx
  __int64 v16; // r9
  __int64 v17; // rax
  size_t v18; // rbx
  __int64 result; // rax
  __int128 v20; // [rsp+20h] [rbp-40h] BYREF
  __int128 v21; // [rsp+30h] [rbp-30h]
  __int128 v22; // [rsp+40h] [rbp-20h] BYREF
  __int128 v23; // [rsp+50h] [rbp-10h]

  v6 = 0;
  v10 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v11 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v22, 1, 0LL, 0LL);
  v12 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v20, 2, 0LL, 0LL);
  *v11 = a1;
  v13 = v11 + 2;
  v11[1] = a2;
  v14 = v12;
  while ( 1 )
  {
    v15 = 510LL;
    if ( a3 < 0x1FE )
      v15 = a3;
    memmove(v13, (const void *)(a4 + 8 * v10), 8 * v15);
    v17 = HvcallInitiateHypercall(202, *((__int64 *)&v23 + 1), *((__int64 *)&v21 + 1), v16);
    if ( (_WORD)v17 )
      break;
    v18 = WORD2(v17) & 0xFFF;
    memmove((void *)(v10 + a6), v14, v18);
    v13 = v11 + 2;
    v10 += v18;
    a3 -= v18;
    if ( !a3 )
      goto LABEL_8;
  }
  v10 += WORD2(v17) & 0xFFF;
  v6 = HvlpHvToNtStatus(v17);
LABEL_8:
  HvlpReleaseHypercallPage((__int64)&v20);
  HvlpReleaseHypercallPage((__int64)&v22);
  result = v6;
  *a5 = v10;
  return result;
}
