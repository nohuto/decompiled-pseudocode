/*
 * XREFs of ?GetScreenCapture@PenWorkspaceScreenCaptureBroker@@UEAAJPEAPEAUIStream@@PEAUHMONITOR__@@@Z @ 0x18028C690
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x18028C6E0 (-GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@.c)
 */

__int64 __fastcall PenWorkspaceScreenCaptureBroker::GetScreenCapture(
        PenWorkspaceScreenCaptureBroker *this,
        struct IStream **a2,
        HMONITOR a3)
{
  int ScreenCaptureInternal; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ScreenCaptureInternal = PenWorkspaceScreenCaptureBroker::GetScreenCaptureInternal(
                            (PenWorkspaceScreenCaptureBroker *)((char *)this - 32),
                            a3,
                            a2,
                            0LL);
  v4 = ScreenCaptureInternal;
  if ( ScreenCaptureInternal >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x36,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\screenshotbroker.cpp",
    (const char *)(unsigned int)ScreenCaptureInternal);
  return v4;
}
