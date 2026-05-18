/*
 * XREFs of sub_18009342C @ 0x18009342C
 * Callers:
 *     sub_180092C20 @ 0x180092C20 (sub_180092C20.c)
 *     sub_180093360 @ 0x180093360 (sub_180093360.c)
 * Callees:
 *     sub_180062680 @ 0x180062680 (sub_180062680.c)
 *     sub_1800910F0 @ 0x1800910F0 (sub_1800910F0.c)
 */

__int64 __fastcall sub_18009342C(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rax

  *(_DWORD *)(a1 + 292) |= 0x400u;
  v8 = (_QWORD *)sub_180062680(a1);
  sub_1800910F0((__int64 *)(a1 + 208), a2, a4, *(_DWORD *)(a1 + 124), 6, *(_DWORD *)(a1 + 304), v8);
  v9 = (_QWORD *)sub_180062680(a1);
  return sub_1800910F0((__int64 *)(a1 + 224), a3, a4, *(_DWORD *)(a1 + 124), 7, *(_DWORD *)(a1 + 304), v9);
}
