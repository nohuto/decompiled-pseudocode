/*
 * XREFs of ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUhstring@param@1@@Z @ 0x18021D550
 * Callers:
 *     _winrt::to_hresult_::_1_::catch$25 @ 0x180221B6B (_winrt--to_hresult_--_1_--catch$25.c)
 *     _winrt::to_hresult_::_1_::catch$27 @ 0x180221C3A (_winrt--to_hresult_--_1_--catch$27.c)
 *     _winrt::to_hresult_::_1_::catch$28 @ 0x180221CDD (_winrt--to_hresult_--_1_--catch$28.c)
 *     _winrt::to_hresult_::_1_::catch$29 @ 0x180221D80 (_winrt--to_hresult_--_1_--catch$29.c)
 * Callees:
 *     ?originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z @ 0x180221720 (-originate@hresult_error@winrt@@AEAAXUhresult@2@PEAX@Z.c)
 */

__int64 __fastcall winrt::hresult_error::hresult_error(__int64 a1, __int64 a2, _QWORD *a3)
{
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 12) = a2;
  *(_DWORD *)(a1 + 8) = -1430532899;
  *(_QWORD *)(a1 + 16) = 0LL;
  winrt::hresult_error::originate(a1, a2, *a3);
  return a1;
}
