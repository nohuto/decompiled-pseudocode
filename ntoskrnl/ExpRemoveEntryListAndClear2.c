/*
 * XREFs of ExpRemoveEntryListAndClear2 @ 0x14041128C
 * Callers:
 *     ExDisownFastResource2 @ 0x14040E06C (ExDisownFastResource2.c)
 *     ExpConvertFastResourceExclusiveToShared2 @ 0x14040FE4C (ExpConvertFastResourceExclusiveToShared2.c)
 *     ExpConvertSharedToExclusiveImmediately @ 0x14040FFC8 (ExpConvertSharedToExclusiveImmediately.c)
 *     ExpMoveSharedFastResourceOwnershipWithFlags @ 0x14041059C (ExpMoveSharedFastResourceOwnershipWithFlags.c)
 *     ExpReleaseDisownedFastResourceExclusive2 @ 0x140410B38 (ExpReleaseDisownedFastResourceExclusive2.c)
 *     ExpReleaseDisownedFastResourceShared2 @ 0x140410CE8 (ExpReleaseDisownedFastResourceShared2.c)
 *     ExpReleaseFastResourceExclusive2 @ 0x140410E88 (ExpReleaseFastResourceExclusive2.c)
 *     ExpReleaseFastResourceShared2 @ 0x14041109C (ExpReleaseFastResourceShared2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpRemoveEntryListAndClear2(_QWORD *a1)
{
  __int64 result; // rax
  _QWORD *v2; // rdx

  result = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v2 = (_QWORD *)a1[1], (_QWORD *)*v2 != a1) )
    __fastfail(3u);
  *v2 = result;
  *(_QWORD *)(result + 8) = v2;
  *a1 = 0LL;
  a1[1] = 0LL;
  return result;
}
