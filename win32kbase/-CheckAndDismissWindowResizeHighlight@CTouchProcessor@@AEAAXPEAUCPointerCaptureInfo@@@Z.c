/*
 * XREFs of ?CheckAndDismissWindowResizeHighlight@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C01EB348
 * Callers:
 *     ?ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z @ 0x1C02016F8 (-ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C007CE44 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     IsTouchResizeActionSupported @ 0x1C0271F48 (IsTouchResizeActionSupported.c)
 */

void __fastcall CTouchProcessor::CheckAndDismissWindowResizeHighlight(
        struct _KTHREAD **this,
        struct CPointerCaptureInfo *a2)
{
  int v3; // edi
  HWND WindowHandle; // rsi

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3875);
  if ( (*((_DWORD *)a2 + 33) & 1) != 0 )
  {
    v3 = *((_DWORD *)a2 + 32);
    if ( (unsigned int)(v3 - 10) > 7 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3881);
    WindowHandle = CInputDest::GetWindowHandle((struct CPointerCaptureInfo *)((char *)a2 + 8));
    if ( (int)IsTouchResizeActionSupported() >= 0 )
    {
      if ( qword_1C02D8008 )
        qword_1C02D8008(WindowHandle, (unsigned int)(v3 - 9), 1LL);
    }
    *((_DWORD *)a2 + 33) &= ~1u;
  }
}
