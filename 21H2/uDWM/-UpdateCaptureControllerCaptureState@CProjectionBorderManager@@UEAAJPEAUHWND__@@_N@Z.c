/*
 * XREFs of ?UpdateCaptureControllerCaptureState@CProjectionBorderManager@@UEAAJPEAUHWND__@@_N@Z @ 0x180090F50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800135CC (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??$UpdateCaptureControllerCaptureState@AEAPEAUHWND__@@AEA_N@WindowFrameLoggingTelemetry@@SAXAEAPEAUHWND__@@AEA_N@Z @ 0x18008D718 (--$UpdateCaptureControllerCaptureState@AEAPEAUHWND__@@AEA_N@WindowFrameLoggingTelemetry@@SAXAEAP.c)
 *     ?_PauseOrResumeWindowCapture@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@_N@Z @ 0x180092474 (-_PauseOrResumeWindowCapture@CProjectionBorderManager@@AEAAJPEAVCCaptureControllerProxy@@_N@Z.c)
 */

int __fastcall CProjectionBorderManager::UpdateCaptureControllerCaptureState(
        struct _RTL_GENERIC_TABLE *this,
        HWND a2,
        bool a3)
{
  struct CCaptureControllerProxy *v6; // rdi
  PVOID v7; // rax
  CProjectionBorderManager *v8; // rcx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+40h] [rbp+8h] BYREF
  PVOID RestartKey; // [rsp+48h] [rbp+10h] BYREF
  bool v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = a3;
  RestartKey = a2;
  WindowFrameLoggingTelemetry::UpdateCaptureControllerCaptureState<HWND__ * &,bool &>(
    (__int64 *)&RestartKey,
    (char *)&v12);
  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0LL;
  RestartKey = 0LL;
  while ( 1 )
  {
    v7 = RtlEnumerateGenericTableWithoutSplaying(this + 6, &RestartKey);
    if ( !v7 )
      break;
    if ( *((HWND *)v7 + 2) == a2 )
    {
      v6 = (struct CCaptureControllerProxy *)*((_QWORD *)v7 + 1);
      break;
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return CProjectionBorderManager::_PauseOrResumeWindowCapture(v8, v6, a3);
}
