/*
 * XREFs of MiReferenceSubsection @ 0x140295BDC
 * Callers:
 *     MiTrimSection @ 0x14026FD60 (MiTrimSection.c)
 *     MiComputeDataFlushRange @ 0x140295940 (MiComputeDataFlushRange.c)
 *     MiFlushAcquire @ 0x1402F8FD8 (MiFlushAcquire.c)
 *     MiPreventControlAreaDeletion @ 0x14031E7D0 (MiPreventControlAreaDeletion.c)
 *     MiUpdateActiveSubsection @ 0x14053CE20 (MiUpdateActiveSubsection.c)
 * Callees:
 *     MiRemoveUnusedSubsection @ 0x140279184 (MiRemoveUnusedSubsection.c)
 *     MiIncrementSubsectionViewCount @ 0x140296460 (MiIncrementSubsectionViewCount.c)
 */

__int64 __fastcall MiReferenceSubsection(ULONG_PTR a1)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  int v4; // ebp

  v2 = *(_QWORD *)a1;
  if ( !*(_QWORD *)(a1 + 8) )
    return 1LL;
  v3 = *(_QWORD *)(v2 + 64);
  v4 = MiIncrementSubsectionViewCount(a1);
  if ( v4 > 1 && v3 && (*(_DWORD *)(v2 + 56) & 0x20) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 34) & 8) != 0 )
      MiRemoveUnusedSubsection(a1);
    *(_WORD *)(a1 + 32) |= 1u;
  }
  return (unsigned int)v4;
}
