/*
 * XREFs of sub_140A0FC08 @ 0x140A0FC08
 * Callers:
 *     sub_140A0EFB4 @ 0x140A0EFB4 (sub_140A0EFB4.c)
 *     sub_140A0F874 @ 0x140A0F874 (sub_140A0F874.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140A0FC08(volatile signed __int64 *a1)
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
