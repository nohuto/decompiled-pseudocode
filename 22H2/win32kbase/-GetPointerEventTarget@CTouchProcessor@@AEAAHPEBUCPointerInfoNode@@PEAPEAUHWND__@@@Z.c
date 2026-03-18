/*
 * XREFs of ?GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z @ 0x1C01C8964
 * Callers:
 *     ?IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z @ 0x1C01CCF40 (-IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00563C4 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C00E417A (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerEventTarget(
        struct _KTHREAD **this,
        const struct CPointerInfoNode *a2,
        HWND *a3)
{
  struct tagTHREADINFO *v6; // rax
  int v7; // r8d
  CInputDest *v9; // [rsp+50h] [rbp+8h] BYREF

  if ( this[5] != KeGetCurrentThread() )
  {
    LODWORD(v9) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15832);
  }
  if ( (*(_DWORD *)a2 & 0x100) == 0 )
  {
    LODWORD(v9) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15844);
  }
  v9 = 0LL;
  if ( (*((_DWORD *)PtiCurrentShared() + 318) & 0x2000) != 0
    || (v6 = PtiCurrentShared(), v7 = 0, (*((_DWORD *)v6 + 319) & 0x40) != 0) )
  {
    v7 = 1;
  }
  CTouchProcessor::GetPointerCapture((CTouchProcessor *)this, *((_QWORD *)a2 + 2), v7, &v9, 0LL);
  if ( v9 )
    *a3 = CInputDest::GetWindowHandle(v9);
  else
    *a3 = (HWND)*((_QWORD *)a2 + 24);
  return 1LL;
}
