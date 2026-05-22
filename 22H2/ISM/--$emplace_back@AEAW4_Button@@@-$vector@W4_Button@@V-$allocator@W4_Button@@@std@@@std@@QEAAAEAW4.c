/*
 * XREFs of ??$emplace_back@AEAW4_Button@@@?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAAAEAW4_Button@@AEAW42@@Z @ 0x180172C40
 * Callers:
 *     ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x180173318 (-DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<enum _Button>::emplace_back<enum _Button &>(__int64 a1, _DWORD *a2)
{
  _BYTE *v3; // rdx
  __int64 result; // rax

  v3 = *(_BYTE **)(a1 + 8);
  if ( *(_BYTE **)(a1 + 16) == v3 )
    return std::vector<Windows::UI::Color>::_Emplace_reallocate<Windows::UI::Color const &>((const void **)a1, v3, a2);
  *(_DWORD *)v3 = *a2;
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 4;
  return result;
}
