/*
 * XREFs of sub_140755BBC @ 0x140755BBC
 * Callers:
 *     WbAddWarbirdEncryptionSegment @ 0x14075554C (WbAddWarbirdEncryptionSegment.c)
 *     sub_1407559C8 @ 0x1407559C8 (sub_1407559C8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140755BBC(volatile signed __int64 *a1)
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
