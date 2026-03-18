/*
 * XREFs of ?CheckAndDismissWindowResizeHighlight@CTouchProcessor@@AEAAXPEAUCPointerCaptureInfo@@@Z @ 0x1C01BFBD4
 * Callers:
 *     ?ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z @ 0x1C01D3A34 (-ReleasePointerCapture@CTouchProcessor@@AEAAH_KH@Z.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00344F0 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     IsTouchResizeActionSupported @ 0x1C023E2E4 (IsTouchResizeActionSupported.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::CheckAndDismissWindowResizeHighlight(
        struct _KTHREAD **this,
        struct CPointerCaptureInfo *a2,
        __int64 a3)
{
  int v4; // edi
  HWND WindowHandle; // rsi

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( (*((_DWORD *)a2 + 33) & 1) != 0 )
  {
    v4 = *((_DWORD *)a2 + 32);
    if ( (unsigned int)(v4 - 10) > 7 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
    WindowHandle = CInputDest::GetWindowHandle((struct CPointerCaptureInfo *)((char *)a2 + 8));
    if ( (int)IsTouchResizeActionSupported() >= 0 )
    {
      if ( qword_1C029D840 )
        qword_1C029D840(WindowHandle, (unsigned int)(v4 - 9), 1LL);
    }
    *((_DWORD *)a2 + 33) &= ~1u;
  }
}
