/*
 * XREFs of sub_180105924 @ 0x180105924
 * Callers:
 *     sub_18007CC23 @ 0x18007CC23 (sub_18007CC23.c)
 * Callees:
 *     sub_180108150 @ 0x180108150 (sub_180108150.c)
 */

__int64 __fastcall sub_180105924(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_180108150(v1);
  return result;
}
