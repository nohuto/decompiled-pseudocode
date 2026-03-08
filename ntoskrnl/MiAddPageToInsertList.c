/*
 * XREFs of MiAddPageToInsertList @ 0x1402848D0
 * Callers:
 *     MiFinishHardFault @ 0x140284200 (MiFinishHardFault.c)
 *     MiInsertProtectedStandbyPage @ 0x1402DFCF4 (MiInsertProtectedStandbyPage.c)
 * Callees:
 *     MiReleaseWriteInProgressCharges @ 0x140212C98 (MiReleaseWriteInProgressCharges.c)
 *     MiCanBatchHardFaultPages @ 0x140284A30 (MiCanBatchHardFaultPages.c)
 *     MiEnqueuePageList @ 0x140285CB0 (MiEnqueuePageList.c)
 *     MiPfnReferenceCountIsZero @ 0x1402879C0 (MiPfnReferenceCountIsZero.c)
 *     MiHardFaultPageRelease @ 0x140287C78 (MiHardFaultPageRelease.c)
 *     MiInsertPagesInList @ 0x140287DB0 (MiInsertPagesInList.c)
 *     MiDecrementShareCount @ 0x14032AE40 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     MiCanBatchSystemCacheUnmapPages @ 0x14062C6E4 (MiCanBatchSystemCacheUnmapPages.c)
 */

__int64 __fastcall MiAddPageToInsertList(__int64 a1, _BYTE *a2, __int64 a3)
{
  int v3; // ebp
  __int64 v7; // rdi
  int CanBatchHardFaultPages; // eax
  int v9; // ecx
  __int64 result; // rax
  int v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(a1 + 96);
  v7 = 48 * a3 - 0x220000000000LL;
  if ( v3 == 3 )
    goto LABEL_21;
  if ( *(_QWORD *)a1 )
  {
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      MiInsertPagesInList(a1, 0LL);
      if ( !*(_QWORD *)a1 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    v12 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v12);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
  }
  if ( v3 == 2 )
  {
    CanBatchHardFaultPages = MiCanBatchHardFaultPages(a2, v7);
    goto LABEL_6;
  }
  if ( !v3 )
  {
    CanBatchHardFaultPages = MiCanBatchSystemCacheUnmapPages(a2, v7);
LABEL_6:
    v9 = CanBatchHardFaultPages;
    if ( CanBatchHardFaultPages )
      goto LABEL_7;
LABEL_16:
    if ( v3 == 1 )
      MiReleaseWriteInProgressCharges(
        *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL)),
        1uLL,
        1);
    goto LABEL_18;
  }
  *(_BYTE *)(v7 + 34) &= ~8u;
  if ( (*a2 & 0x42) != 0 )
    *(_BYTE *)(v7 + 34) |= 0x10u;
  if ( (*(_WORD *)(v7 + 32))-- != 1 )
    goto LABEL_16;
  if ( (*(_QWORD *)(v7 + 24) & 0x4000000000000000LL) != 0 || (*(_BYTE *)(v7 + 35) & 0x50) != 0 )
    v9 = 2;
  else
LABEL_21:
    v9 = 1;
LABEL_7:
  if ( !*(_QWORD *)a1 )
  {
    if ( (*(_BYTE *)(v7 + 34) & 0x10) != 0 )
      *(_DWORD *)(a1 + 8) = 3;
    else
      *(_DWORD *)(a1 + 8) = 2;
  }
  if ( v9 == 1 )
    return MiEnqueuePageList(a1, a3);
  MiInsertPagesInList(a1, 1LL);
  if ( !v3 )
  {
    MiDecrementShareCount(v7);
    goto LABEL_18;
  }
  if ( v3 != 2 )
  {
    MiReleaseWriteInProgressCharges(
      *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v7 + 40) >> 43) & 0x3FFLL)),
      1uLL,
      1);
    MiPfnReferenceCountIsZero(v7, a3);
LABEL_18:
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return result;
  }
  MiHardFaultPageRelease(a2, v7);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
