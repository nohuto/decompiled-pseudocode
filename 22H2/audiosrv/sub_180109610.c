/*
 * XREFs of sub_180109610 @ 0x180109610
 * Callers:
 *     sub_180047720 @ 0x180047720 (sub_180047720.c)
 *     sub_180108CC0 @ 0x180108CC0 (sub_180108CC0.c)
 * Callees:
 *     sub_180108150 @ 0x180108150 (sub_180108150.c)
 */

__int64 __fastcall sub_180109610(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return sub_180108150(result);
  return result;
}
