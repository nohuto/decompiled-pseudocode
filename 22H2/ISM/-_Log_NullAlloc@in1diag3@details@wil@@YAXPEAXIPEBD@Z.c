/*
 * XREFs of ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008951C
 * Callers:
 *     ?AllocateInputBuffer@GameControllerRawInputProvider@@UEAAPEAUGameInputRoutedInputBuffer@@II@Z @ 0x180088760 (-AllocateInputBuffer@GameControllerRawInputProvider@@UEAAPEAUGameInputRoutedInputBuffer@@II@Z.c)
 *     ?OnDeviceConnected@GameControllerRawInputProvider@@UEAA_NI_N00@Z @ 0x180088A10 (-OnDeviceConnected@GameControllerRawInputProvider@@UEAA_NI_N00@Z.c)
 *     ?OnIrButton@GameControllerRawInputProvider@@UEAAXI_K0W4GipIrCode@@W4GipIrStatus@@@Z @ 0x180088D00 (-OnIrButton@GameControllerRawInputProvider@@UEAAXI_K0W4GipIrCode@@W4GipIrStatus@@@Z.c)
 *     ?OnSystemCommand@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z @ 0x180088F70 (-OnSystemCommand@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z.c)
 *     ?OnVirtualKey@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z @ 0x180089230 (-OnVirtualKey@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180035798 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_NullAlloc(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr(
    (__int64)this,
    a2,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawinputprovider.cpp",
    0LL,
    0LL,
    retaddr);
}
