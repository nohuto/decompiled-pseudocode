/*
 * XREFs of ?to_abi@hresult_error@winrt@@QEBA?AUhresult@2@XZ @ 0x180221C5C
 * Callers:
 *     _winrt::to_hresult_::_1_::catch$24 @ 0x180221CEC (_winrt--to_hresult_--_1_--catch$24.c)
 *     _winrt::to_hresult_::_1_::catch$25 @ 0x180221D1B (_winrt--to_hresult_--_1_--catch$25.c)
 *     _winrt::to_hresult_::_1_::catch$27 @ 0x180221DEA (_winrt--to_hresult_--_1_--catch$27.c)
 *     _winrt::to_hresult_::_1_::catch$28 @ 0x180221E8D (_winrt--to_hresult_--_1_--catch$28.c)
 *     _winrt::to_hresult_::_1_::catch$29 @ 0x180221F30 (_winrt--to_hresult_--_1_--catch$29.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$1 @ 0x180267EC3 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$1.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$7 @ 0x180268046 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$7.c)
 * Callees:
 *     WINRT_SetRestrictedErrorInfo @ 0x180091521 (WINRT_SetRestrictedErrorInfo.c)
 */

_DWORD *__fastcall winrt::hresult_error::to_abi(__int64 a1, _DWORD *a2)
{
  if ( *(_QWORD *)(a1 + 16) )
    WINRT_SetRestrictedErrorInfo();
  *a2 = *(_DWORD *)(a1 + 12);
  return a2;
}
