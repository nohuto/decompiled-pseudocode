/*
 * XREFs of sub_1801058B0 @ 0x1801058B0
 * Callers:
 *     unknown_libname_146 @ 0x1801052AB (unknown_libname_146.c)
 * Callees:
 *     sub_180108150 @ 0x180108150 (sub_180108150.c)
 */

__int64 __fastcall sub_1801058B0(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return sub_180108150(result);
  }
  return result;
}
