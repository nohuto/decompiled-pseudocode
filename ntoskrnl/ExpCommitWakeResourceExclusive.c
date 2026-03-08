/*
 * XREFs of ExpCommitWakeResourceExclusive @ 0x1403C60E0
 * Callers:
 *     ExpReleaseFastResourceExclusive @ 0x1403C5EA4 (ExpReleaseFastResourceExclusive.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x1406082E4 (ExpReleaseDisownedFastResourceExclusive.c)
 * Callees:
 *     KeWakeWaitChain @ 0x14033AF30 (KeWakeWaitChain.c)
 */

__int64 __fastcall ExpCommitWakeResourceExclusive(
        __int64 a1,
        volatile signed __int32 **a2,
        __int64 a3,
        unsigned int a4,
        char a5)
{
  char v5; // r8

  v5 = (2 * (a5 & 1) + 1) | 4;
  if ( (a5 & 2) == 0 )
    v5 = 2 * (a5 & 1) + 1;
  return KeWakeWaitChain(a2, a4, v5);
}
