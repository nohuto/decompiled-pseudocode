/*
 * XREFs of ExpAddFastOwnerEntryToThreadList2 @ 0x14040FD90
 * Callers:
 *     ExAcquireFastResourceWithFlags @ 0x14040CD00 (ExAcquireFastResourceWithFlags.c)
 *     ExAcquireFastResourceExclusive2 @ 0x14040D530 (ExAcquireFastResourceExclusive2.c)
 *     ExAcquireFastResourceShared2 @ 0x14040D7F0 (ExAcquireFastResourceShared2.c)
 *     ExAcquireFastResourceSharedStarveExclusive2 @ 0x14040DB2C (ExAcquireFastResourceSharedStarveExclusive2.c)
 *     ExDisownFastResource2 @ 0x14040E06C (ExDisownFastResource2.c)
 *     ExInitializeFastResourceAcquired2 @ 0x14040E404 (ExInitializeFastResourceAcquired2.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x14040F2AC (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x14040F630 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpConvertFastResourceExclusiveToShared2 @ 0x14040FE4C (ExpConvertFastResourceExclusiveToShared2.c)
 *     ExpConvertSharedToExclusiveImmediately @ 0x14040FFC8 (ExpConvertSharedToExclusiveImmediately.c)
 *     ExpMoveSharedFastResourceOwnershipWithFlags @ 0x14041059C (ExpMoveSharedFastResourceOwnershipWithFlags.c)
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
