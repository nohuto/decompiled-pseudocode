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
  __int64 v16; // rax
  size_t v17; // rbx
  __int64 result; // rax
  _OWORD v19[2]; // [rsp+20h] [rbp-40h] BYREF
  _OWORD v20[2]; // [rsp+40h] [rbp-20h] BYREF

  v6 = 0;
  v10 = 0LL;
  memset(v20, 0, sizeof(v20));
  memset(v19, 0, sizeof(v19));
  v11 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v20, 1, 0LL, 0LL);
  v12 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v19, 2, 0LL, 0LL);
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
    v16 = HvcallInitiateHypercall(202);
    if ( (_WORD)v16 )
      break;
    v17 = WORD2(v16) & 0xFFF;
    memmove((void *)(v10 + a6), v14, v17);
    v13 = v11 + 2;
    v10 += v17;
    a3 -= v17;
    if ( !a3 )
      goto LABEL_8;
  }
  v10 += WORD2(v16) & 0xFFF;
  v6 = HvlpHvToNtStatus(v16);
LABEL_8:
  HvlpReleaseHypercallPage((__int64)v19);
  HvlpReleaseHypercallPage((__int64)v20);
  result = v6;
  *a5 = v10;
  return result;
}
