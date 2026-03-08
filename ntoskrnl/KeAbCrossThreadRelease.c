/*
 * XREFs of KeAbCrossThreadRelease @ 0x1403C57F8
 * Callers:
 *     ExpReleaseDisownedFastResourceShared @ 0x1403C5540 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseDisownedFastResourceExclusive2 @ 0x140410B38 (ExpReleaseDisownedFastResourceExclusive2.c)
 *     ExpReleaseDisownedFastResourceShared2 @ 0x140410CE8 (ExpReleaseDisownedFastResourceShared2.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x1406082E4 (ExpReleaseDisownedFastResourceExclusive.c)
 * Callees:
 *     KiAbCrossThreadRelease @ 0x1403C582C (KiAbCrossThreadRelease.c)
 */

__int64 __fastcall KeAbCrossThreadRelease(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  if ( (a2 & 1) != 0 )
    a2 = a3 + 96LL * (unsigned __int8)(a2 >> 1) + 1696;
  return KiAbCrossThreadRelease(a1, a2);
}
