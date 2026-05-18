/*
 * XREFs of sub_18002DD64 @ 0x18002DD64
 * Callers:
 *     sub_18002D660 @ 0x18002D660 (sub_18002D660.c)
 *     sub_18002D840 @ 0x18002D840 (sub_18002D840.c)
 *     sub_18002F578 @ 0x18002F578 (sub_18002F578.c)
 *     sub_18009A1D4 @ 0x18009A1D4 (sub_18009A1D4.c)
 * Callees:
 *     sub_1800994A0 @ 0x1800994A0 (sub_1800994A0.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_18002DD64(__int64 *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  void *v11; // rcx
  __int64 v12; // rax

  v11 = operator new(0x1CuLL);
  v12 = 0LL;
  if ( v11 )
    v12 = sub_1800994A0((_DWORD)v11, *a2, *a3, *a4, *a5, *a6, *a7);
  *a1 = v12;
  return a1;
}
