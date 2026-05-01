/*
 * XREFs of ?_UpdateFallbackWindow@CImmersiveMode@@AEAAXXZ @ 0x1801D15E4
 * Callers:
 *     ?HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z @ 0x18006F890 (-HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z.c)
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x1801D0BF4 (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveMode::_UpdateFallbackWindow(CImmersiveMode *this)
{
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 43) + 48LL))(
    *((_QWORD *)this + 43),
    (unsigned int)(*((_DWORD *)this + 84) == 1) + 1);
}
