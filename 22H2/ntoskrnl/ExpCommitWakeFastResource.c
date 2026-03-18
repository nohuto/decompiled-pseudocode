/*
 * XREFs of ExpCommitWakeFastResource @ 0x140414C48
 * Callers:
 *     ExpReleaseDisownedFastResourceExclusive2 @ 0x140415968 (ExpReleaseDisownedFastResourceExclusive2.c)
 *     ExpReleaseDisownedFastResourceShared2 @ 0x140415B18 (ExpReleaseDisownedFastResourceShared2.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140415D64 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ExpReleaseFastResourceShared2 @ 0x140415ECC (ExpReleaseFastResourceShared2.c)
 * Callees:
 *     KeWakeWaitChain @ 0x140260820 (KeWakeWaitChain.c)
 */

__int64 __fastcall ExpCommitWakeFastResource(volatile signed __int32 **a1, __int64 a2, __int64 a3, char a4)
{
  char v4; // r8

  v4 = (2 * (a4 & 1) + 1) | 4;
  if ( (a4 & 2) == 0 )
    v4 = 2 * (a4 & 1) + 1;
  return KeWakeWaitChain(a1, 0, v4);
}
