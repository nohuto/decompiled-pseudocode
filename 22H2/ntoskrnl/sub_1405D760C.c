/*
 * XREFs of sub_1405D760C @ 0x1405D760C
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x1405D6CE0 (WbAddWarbirdEncryptionSegment.c)
 *     sub_1405D7328 @ 0x1405D7328 (sub_1405D7328.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405D760C(volatile signed __int64 *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( !_InterlockedAdd64(a1, 1uLL) )
      return 3221225701LL;
  }
  return result;
}
