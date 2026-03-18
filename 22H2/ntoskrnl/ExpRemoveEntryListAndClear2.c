/*
 * XREFs of ExpRemoveEntryListAndClear2 @ 0x1404160BC
 * Callers:
 *     ExDisownFastResource2 @ 0x140412E6C (ExDisownFastResource2.c)
 *     ExpConvertFastResourceExclusiveToShared2 @ 0x140414C7C (ExpConvertFastResourceExclusiveToShared2.c)
 *     ExpConvertSharedToExclusiveImmediately @ 0x140414DF8 (ExpConvertSharedToExclusiveImmediately.c)
 *     ExpMoveSharedFastResourceOwnershipWithFlags @ 0x1404153CC (ExpMoveSharedFastResourceOwnershipWithFlags.c)
 *     ExpReleaseDisownedFastResourceExclusive2 @ 0x140415968 (ExpReleaseDisownedFastResourceExclusive2.c)
 *     ExpReleaseDisownedFastResourceShared2 @ 0x140415B18 (ExpReleaseDisownedFastResourceShared2.c)
 *     ExpReleaseFastResourceExclusive2 @ 0x140415CB8 (ExpReleaseFastResourceExclusive2.c)
 *     ExpReleaseFastResourceShared2 @ 0x140415ECC (ExpReleaseFastResourceShared2.c)
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
