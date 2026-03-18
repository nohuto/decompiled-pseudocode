/*
 * XREFs of ?CheckAndDismissWindowResizeHighlight@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C01BC484
 * Callers:
 *     ?ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z @ 0x1C01D2918 (-ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00563C4 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     IsTouchResizeActionSupported @ 0x1C0233198 (IsTouchResizeActionSupported.c)
 */

void __fastcall CTouchProcessor::CheckAndDismissWindowResizeHighlight(
        struct _KTHREAD **this,
        struct CPointerCaptureInfo *a2)
{
  int v3; // edi
  HWND WindowHandle; // rsi

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3792);
  if ( (*((_DWORD *)a2 + 33) & 1) != 0 )
  {
    v3 = *((_DWORD *)a2 + 32);
    if ( (unsigned int)(v3 - 10) > 7 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3798);
    WindowHandle = CInputDest::GetWindowHandle((struct CPointerCaptureInfo *)((char *)a2 + 8));
    if ( (int)IsTouchResizeActionSupported() >= 0 )
    {
      if ( qword_1C0296E80 )
        qword_1C0296E80(WindowHandle, (unsigned int)(v3 - 9), 1LL);
    }
    *((_DWORD *)a2 + 33) &= ~1u;
  }
}
