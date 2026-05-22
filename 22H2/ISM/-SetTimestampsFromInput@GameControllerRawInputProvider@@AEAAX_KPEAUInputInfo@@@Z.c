/*
 * XREFs of ?SetTimestampsFromInput@GameControllerRawInputProvider@@AEAAX_KPEAUInputInfo@@@Z @ 0x180089454
 * Callers:
 *     ?OnDeviceInput@GameControllerRawInputProvider@@UEAAXI_K0MW4GameInputKind@@PEBUGameInputRoutedInputBuffer@@PEBUGameInputGamepadState@@PEBUGameInputUiNavigationState@@@Z @ 0x180088BF0 (-OnDeviceInput@GameControllerRawInputProvider@@UEAAXI_K0MW4GameInputKind@@PEBUGameInputRoutedInp.c)
 *     ?OnIrButton@GameControllerRawInputProvider@@UEAAXI_K0W4GipIrCode@@W4GipIrStatus@@@Z @ 0x180088D00 (-OnIrButton@GameControllerRawInputProvider@@UEAAXI_K0W4GipIrCode@@W4GipIrStatus@@@Z.c)
 *     ?OnSystemCommand@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z @ 0x180088F70 (-OnSystemCommand@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z.c)
 *     ?OnVirtualKey@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z @ 0x180089230 (-OnVirtualKey@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z.c)
 * Callees:
 *     ?GetCurrentMicroSecTime@QpcTimeConverter@@QEBA_KXZ @ 0x180088924 (-GetCurrentMicroSecTime@QpcTimeConverter@@QEBA_KXZ.c)
 */

void __fastcall GameControllerRawInputProvider::SetTimestampsFromInput(
        GameControllerRawInputProvider *this,
        unsigned __int64 a2,
        struct InputInfo *a3)
{
  unsigned __int64 v6; // rbx
  DWORD TickCount; // r9d
  unsigned int v8; // eax
  unsigned int v9; // r9d
  unsigned __int64 v10; // rax

  v6 = QpcTimeConverter::GetCurrentMicroSecTime(this) - a2;
  TickCount = GetTickCount();
  v8 = *((_DWORD *)this + 36);
  v9 = TickCount - v6 / 0x3E8;
  if ( v9 >= v8 )
    v8 = v9;
  *((_DWORD *)this + 36) = v8;
  *((_DWORD *)a3 + 2) = v8;
  v10 = 0LL;
  if ( GameControllerRawInputProvider::s_qpcTime )
    v10 = GameControllerRawInputProvider::s_qpcTime * (a2 / qword_1802096F0)
        + GameControllerRawInputProvider::s_qpcTime * (a2 % qword_1802096F0) / qword_1802096F0;
  *((_QWORD *)a3 + 2) = v10;
}
