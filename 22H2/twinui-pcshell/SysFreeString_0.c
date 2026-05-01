/*
 * XREFs of SysFreeString_0 @ 0x1800915B0
 * Callers:
 *     ??1hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x18021DB70 (--1hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 *     _winrt::to_hresult_::_1_::catch$25 @ 0x180221B6B (_winrt--to_hresult_--_1_--catch$25.c)
 *     _winrt::to_hresult_::_1_::catch$27 @ 0x180221C3A (_winrt--to_hresult_--_1_--catch$27.c)
 *     _winrt::to_hresult_::_1_::catch$28 @ 0x180221CDD (_winrt--to_hresult_--_1_--catch$28.c)
 *     _winrt::to_hresult_::_1_::catch$29 @ 0x180221D80 (_winrt--to_hresult_--_1_--catch$29.c)
 *     ?message@hresult_error@winrt@@QEBA?AUhstring@2@XZ @ 0x180267FE0 (-message@hresult_error@winrt@@QEBA-AUhstring@2@XZ.c)
 *     ??$make_exception_ptr@Uhresult_canceled@winrt@@@std@@YA?AVexception_ptr@0@Uhresult_canceled@winrt@@@Z @ 0x1804D0E50 (--$make_exception_ptr@Uhresult_canceled@winrt@@@std@@YA-AVexception_ptr@0@Uhresult_canceled@winr.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall SysFreeString_0(BSTR bstrString)
{
  SysFreeString(bstrString);
}
