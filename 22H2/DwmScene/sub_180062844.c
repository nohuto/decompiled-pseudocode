/*
 * XREFs of sub_180062844 @ 0x180062844
 * Callers:
 *     sub_18002ED04 @ 0x18002ED04 (sub_18002ED04.c)
 *     sub_18002F578 @ 0x18002F578 (sub_18002F578.c)
 *     sub_180038780 @ 0x180038780 (sub_180038780.c)
 *     sub_18003D000 @ 0x18003D000 (sub_18003D000.c)
 *     sub_18003D310 @ 0x18003D310 (sub_18003D310.c)
 *     sub_180040C20 @ 0x180040C20 (sub_180040C20.c)
 *     sub_180041DB0 @ 0x180041DB0 (sub_180041DB0.c)
 *     sub_180042180 @ 0x180042180 (sub_180042180.c)
 *     sub_180042520 @ 0x180042520 (sub_180042520.c)
 *     sub_1800428C0 @ 0x1800428C0 (sub_1800428C0.c)
 *     sub_1800CD84C @ 0x1800CD84C (sub_1800CD84C.c)
 * Callees:
 *     sub_1800623E4 @ 0x1800623E4 (sub_1800623E4.c)
 *     sub_1800CBBE0 @ 0x1800CBBE0 (sub_1800CBBE0.c)
 *     sub_1800CBBF8 @ 0x1800CBBF8 (sub_1800CBBF8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180062844(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]

  v3 = a3;
  if ( a3 == 15 )
    v3 = *(_DWORD *)(a1 + 48);
  v10 = v3;
  v11 = a2;
  v6 = sub_1800CBBF8(a1);
  sub_1800CBBE0(v6, v3, 2LL, a2);
  sub_1800623E4((unsigned int *)(a1 + 56), &v10);
  v8 = sub_1800CBBF8(v7);
  return sub_1800CBBE0(v8, v3, 2LL, -a2);
}
