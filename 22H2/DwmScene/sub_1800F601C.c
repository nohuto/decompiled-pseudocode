/*
 * XREFs of sub_1800F601C @ 0x1800F601C
 * Callers:
 *     sub_1800F6150 @ 0x1800F6150 (sub_1800F6150.c)
 * Callees:
 *     sub_180017524 @ 0x180017524 (sub_180017524.c)
 *     sub_180092FA8 @ 0x180092FA8 (sub_180092FA8.c)
 *     sub_180092FB8 @ 0x180092FB8 (sub_180092FB8.c)
 *     sub_1800934D0 @ 0x1800934D0 (sub_1800934D0.c)
 *     sub_18009360C @ 0x18009360C (sub_18009360C.c)
 *     sub_180093904 @ 0x180093904 (sub_180093904.c)
 *     sub_18009397C @ 0x18009397C (sub_18009397C.c)
 *     sub_180093BD4 @ 0x180093BD4 (sub_180093BD4.c)
 *     sub_1800F5B60 @ 0x1800F5B60 (sub_1800F5B60.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1800F601C(
        __int64 *a1,
        _QWORD *a2,
        int a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6,
        __int64 *a7,
        char a8,
        char a9,
        char a10)
{
  __int64 v13; // r9

  *(_OWORD *)a1 = 0LL;
  sub_180017524(a2, a1, 1u);
  if ( a8 )
  {
    sub_180092FA8(*a1, (a5[1] - *a5) >> 1);
    sub_180092FB8(*a1, *a5);
  }
  else
  {
    sub_1800F5B60((unsigned __int64)a5, a4, a6, a7, a10);
  }
  sub_180093904(*a1, a3);
  sub_180093BD4(*a1, (a4[1] - *a4) / 12);
  sub_18009360C(*a1, *a4);
  if ( a10 )
    sub_1800934D0(*a1, *a6, 0, v13);
  if ( a9 )
    sub_18009397C(*a1, *a7);
  return a1;
}
