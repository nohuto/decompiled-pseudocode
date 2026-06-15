/*
 * XREFs of sub_1800B5C98 @ 0x1800B5C98
 * Callers:
 *     sub_1800B50E0 @ 0x1800B50E0 (sub_1800B50E0.c)
 *     sub_1800BC5EC @ 0x1800BC5EC (sub_1800BC5EC.c)
 *     sub_1800F3AD4 @ 0x1800F3AD4 (sub_1800F3AD4.c)
 *     sub_1800F3B8C @ 0x1800F3B8C (sub_1800F3B8C.c)
 * Callees:
 *     sub_1800B5CE8 @ 0x1800B5CE8 (sub_1800B5CE8.c)
 */

__int64 __fastcall sub_1800B5C98(_WORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r10d

  v4 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    return (unsigned int)sub_1800B5CE8(a1, a2, a3, a3, a4);
  }
  return (unsigned int)v4;
}
