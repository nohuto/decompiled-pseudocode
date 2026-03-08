/*
 * XREFs of ApiSetGetPTPShellTarget @ 0x1C0244748
 * Callers:
 *     ?GetHitTestState@CPTPProcessor@@QEAAPEBUCHitTestState@@PEBUCPointerInputFrame@@@Z @ 0x1C020DD78 (-GetHitTestState@CPTPProcessor@@QEAAPEBUCHitTestState@@PEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     GetPTPShellTarget @ 0x1C0271DBC (GetPTPShellTarget.c)
 *     IsGetPTPShellTargetSupported @ 0x1C0271F1C (IsGetPTPShellTargetSupported.c)
 */

_OWORD *__fastcall ApiSetGetPTPShellTarget(_OWORD *a1)
{
  int v2; // edx
  int v3; // r8d
  char v4; // bl
  int v5; // edx
  int v6; // r8d
  _OWORD *PTPShellTarget; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  _BYTE v15[112]; // [rsp+40h] [rbp-88h] BYREF

  memset(a1, 0, 0x70uLL);
  v4 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(v2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v3) = 0;
  }
  if ( (_BYTE)v2 || (_BYTE)v3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      v3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      350,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  if ( (int)IsGetPTPShellTargetSupported() >= 0 )
  {
    PTPShellTarget = (_OWORD *)GetPTPShellTarget(v15);
    v8 = PTPShellTarget[1];
    *a1 = *PTPShellTarget;
    v9 = PTPShellTarget[2];
    a1[1] = v8;
    v10 = PTPShellTarget[3];
    a1[2] = v9;
    v11 = PTPShellTarget[4];
    a1[3] = v10;
    v12 = PTPShellTarget[5];
    a1[4] = v11;
    v13 = PTPShellTarget[6];
    a1[5] = v12;
    a1[6] = v13;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) == 0
    || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v5) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v4 = 0;
  if ( (_BYTE)v5 || v4 )
  {
    LOBYTE(v6) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v5,
      v6,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      351,
      (__int64)&WPP_27299bb4fcd83cf9f08da90e79a2f70f_Traceguids);
  }
  return a1;
}
