/*
 * XREFs of ExpAddFastOwnerEntryToThreadList2 @ 0x140414BC0
 * Callers:
 *     ExAcquireFastResourceWithFlags @ 0x140411A70 (ExAcquireFastResourceWithFlags.c)
 *     ExAcquireFastResourceExclusive2 @ 0x140412330 (ExAcquireFastResourceExclusive2.c)
 *     ExAcquireFastResourceShared2 @ 0x1404125F0 (ExAcquireFastResourceShared2.c)
 *     ExAcquireFastResourceSharedStarveExclusive2 @ 0x14041292C (ExAcquireFastResourceSharedStarveExclusive2.c)
 *     ExDisownFastResource2 @ 0x140412E6C (ExDisownFastResource2.c)
 *     ExInitializeFastResourceAcquired2 @ 0x140413204 (ExInitializeFastResourceAcquired2.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1404140DC (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140414460 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpConvertFastResourceExclusiveToShared2 @ 0x140414C7C (ExpConvertFastResourceExclusiveToShared2.c)
 *     ExpConvertSharedToExclusiveImmediately @ 0x140414DF8 (ExpConvertSharedToExclusiveImmediately.c)
 *     ExpMoveSharedFastResourceOwnershipWithFlags @ 0x1404153CC (ExpMoveSharedFastResourceOwnershipWithFlags.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ExpAddFastOwnerEntryToThreadList2(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  __int64 *result; // rax
  __int64 v5; // rcx

  if ( a3 )
    result = (__int64 *)(a1 + 1680);
  else
    result = (__int64 *)(a1 + 1656);
  v5 = *result;
  if ( *(__int64 **)(*result + 8) != result )
    __fastfail(3u);
  *a4 = v5;
  a4[1] = result;
  *(_QWORD *)(v5 + 8) = a4;
  *result = (__int64)a4;
  return result;
}
