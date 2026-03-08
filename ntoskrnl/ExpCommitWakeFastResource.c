/*
 * XREFs of ExpCommitWakeFastResource @ 0x14040FE18
 * Callers:
 *     ExpReleaseDisownedFastResourceExclusive2 @ 0x140410B38 (ExpReleaseDisownedFastResourceExclusive2.c)
 *     ExpReleaseDisownedFastResourceShared2 @ 0x140410CE8 (ExpReleaseDisownedFastResourceShared2.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140410F34 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ExpReleaseFastResourceShared2 @ 0x14041109C (ExpReleaseFastResourceShared2.c)
 * Callees:
 *     KeWakeWaitChain @ 0x14033AF30 (KeWakeWaitChain.c)
 */

__int64 __fastcall ExpCommitWakeFastResource(volatile signed __int32 **a1, __int64 a2, __int64 a3, char a4)
{
  char v4; // r8

  v4 = (2 * (a4 & 1) + 1) | 4;
  if ( (a4 & 2) == 0 )
    v4 = 2 * (a4 & 1) + 1;
  return KeWakeWaitChain(a1, 0, v4);
}
