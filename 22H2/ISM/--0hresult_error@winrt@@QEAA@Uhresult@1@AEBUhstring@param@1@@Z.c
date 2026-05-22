/*
 * XREFs of ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z @ 0x1800BD7E8
 * Callers:
 *     _winrt::to_hresult_::_1_::catch$21 @ 0x1800BE8C8 (_winrt--to_hresult_--_1_--catch$21.c)
 *     _winrt::to_hresult_::_1_::catch$22 @ 0x1800BE970 (_winrt--to_hresult_--_1_--catch$22.c)
 *     _winrt::to_hresult_::_1_::catch$23 @ 0x1800BEA18 (_winrt--to_hresult_--_1_--catch$23.c)
 * Callees:
 *     ?originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z @ 0x1800BD43C (-originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z.c)
 */

__int64 __fastcall winrt::hresult_error::hresult_error(__int64 a1, int a2)
{
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 12) = a2;
  *(_DWORD *)(a1 + 8) = -1430532899;
  *(_QWORD *)(a1 + 16) = 0LL;
  winrt::hresult_error::originate();
  return a1;
}
