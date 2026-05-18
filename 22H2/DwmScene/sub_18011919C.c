/*
 * XREFs of sub_18011919C @ 0x18011919C
 * Callers:
 *     sub_18011A644 @ 0x18011A644 (sub_18011A644.c)
 * Callees:
 *     sub_180011318 @ 0x180011318 (sub_180011318.c)
 *     sub_18011A6B4 @ 0x18011A6B4 (sub_18011A6B4.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18011F976 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18011919C(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // r14
  __int64 result; // rax
  _QWORD *v8; // [rsp+28h] [rbp-40h]

  if ( *(_QWORD *)(a1 + 8) == 0x1745D1745D1745DLL )
    std::_Xlength_error("list<T> too long");
  v6 = *(_QWORD **)(a2 + 8);
  v8 = operator new(0xB0uLL);
  sub_180011318((__int64)(v8 + 2), a3);
  result = sub_18011A6B4(v8 + 6, a3 + 32);
  *v8 = a2;
  v8[1] = v6;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v8;
  *v6 = v8;
  return result;
}
