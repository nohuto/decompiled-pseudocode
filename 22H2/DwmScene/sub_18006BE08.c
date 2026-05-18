/*
 * XREFs of sub_18006BE08 @ 0x18006BE08
 * Callers:
 *     sub_18006C948 @ 0x18006C948 (sub_18006C948.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x180026DC8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 */

__int64 __fastcall sub_18006BE08(__int64 a1, _QWORD **a2)
{
  *(_QWORD *)a1 = **a2;
  *(_OWORD *)(a1 + 8) = 0LL;
  *(_OWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 8) = -8388609;
  *(_QWORD *)(a1 + 12) = 2139095039LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 7LL;
  *(_WORD *)(a1 + 32) = 0;
  std::wstring::assign((char *)(a1 + 32), &unk_1801C5518, 0LL);
  return a1;
}
