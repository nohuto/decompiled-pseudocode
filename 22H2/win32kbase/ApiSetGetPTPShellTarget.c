/*
 * XREFs of ApiSetGetPTPShellTarget @ 0x1C01CEF84
 * Callers:
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEAUtagCHitTestState@@K@Z @ 0x1C0197C28 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@PEA.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAUtagCHitTestState@@PEAGPEAIK@Z @ 0x1C01A0458 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 *     ?ShellEndpointExists@CPTPProcessor@@AEAA_NXZ @ 0x1C01A75AC (-ShellEndpointExists@CPTPProcessor@@AEAA_NXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     GetPTPShellTarget @ 0x1C01FC2B4 (GetPTPShellTarget.c)
 *     IsGetPTPShellTargetSupported @ 0x1C01FC430 (IsGetPTPShellTargetSupported.c)
 */

_OWORD *__fastcall ApiSetGetPTPShellTarget(_OWORD *a1)
{
  int v2; // edx
  int v3; // edx
  _OWORD *PTPShellTarget; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  _BYTE v12[112]; // [rsp+30h] [rbp-78h] BYREF

  memset(a1, 0, 0x70uLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      10,
      358,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  if ( (int)IsGetPTPShellTargetSupported() >= 0 )
  {
    PTPShellTarget = (_OWORD *)GetPTPShellTarget(v12);
    v5 = PTPShellTarget[1];
    *a1 = *PTPShellTarget;
    v6 = PTPShellTarget[2];
    a1[1] = v5;
    v7 = PTPShellTarget[3];
    a1[2] = v6;
    v8 = PTPShellTarget[4];
    a1[3] = v7;
    v9 = PTPShellTarget[5];
    a1[4] = v8;
    v10 = PTPShellTarget[6];
    a1[5] = v9;
    a1[6] = v10;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v3) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      10,
      359,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return a1;
}
