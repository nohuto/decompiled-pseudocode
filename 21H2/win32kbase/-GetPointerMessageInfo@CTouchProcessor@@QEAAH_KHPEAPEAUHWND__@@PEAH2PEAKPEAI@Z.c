/*
 * XREFs of ?GetPointerMessageInfo@CTouchProcessor@@QEAAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x1C01CB8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00344F0 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC94C (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C00E8060 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C01BD200 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01BD260 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z @ 0x1C01C9164 (-GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE868 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C01D30A4 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerMessageInfo(
        struct _KTHREAD **this,
        void *a2,
        unsigned int a3,
        HWND *a4,
        int *a5,
        int *a6,
        unsigned int *a7,
        unsigned int *a8)
{
  unsigned int v9; // r14d
  void *v10; // rsi
  unsigned int v12; // ebx
  char v13; // di
  CTouchProcessor *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  const struct CPointerMsgData *MsgData; // rbp
  __int64 v18; // r8
  PDEVICE_OBJECT v19; // rcx
  __int16 v20; // ax
  __int64 v21; // rcx
  const struct CPointerInputFrame *v22; // r14
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  CInputDest *v28; // rcx
  HWND WindowHandle; // rax
  __int64 v30; // r8
  int v31; // edx
  int v32; // r8d
  CInputDest *v34; // [rsp+40h] [rbp-68h] BYREF
  PERESOURCE *v35[7]; // [rsp+48h] [rbp-60h] BYREF
  int v36; // [rsp+B0h] [rbp+8h] BYREF

  v9 = a3;
  v10 = a2;
  v12 = 0;
  v13 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      96,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  v34 = 0LL;
  v36 = 0;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v35,
    (struct CInpLockGuard *)(this + 4),
    v10);
  MsgData = CTouchProcessor::GetMsgData(v14, (__int64)v10, v15);
  if ( MsgData )
  {
    CTouchProcessor::GetPointerCapture(this, (__int64)v10, v9, &v34, &v36);
    v22 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)this, *((_DWORD *)MsgData + 7));
    if ( v22 )
    {
      v23 = *((unsigned int *)MsgData + 8);
      if ( (unsigned int)v23 >= *((_DWORD *)v22 + 12) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v16, v18);
        v23 = *((unsigned int *)MsgData + 8);
      }
      v24 = *((_QWORD *)v22 + 30) + 480 * v23;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v24) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27);
      if ( *((_WORD *)MsgData + 8) != *(_WORD *)(v24 + 172) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v27);
      v28 = v34;
      if ( v34 )
      {
        WindowHandle = CInputDest::GetWindowHandle(v34);
        v30 = (unsigned int)v36;
        *a4 = WindowHandle;
      }
      else
      {
        *a4 = *(HWND *)(v24 + 192);
        v30 = *(unsigned int *)(v24 + 144);
      }
      if ( a5 )
        *a5 = v28 != 0LL;
      if ( a6 )
        *a6 = v30;
      if ( a7 )
        *a7 = *(_DWORD *)(v24 + 168);
      if ( a8 )
        *a8 = *(_DWORD *)(v24 + 180);
      CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v22, v30);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v31) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v31) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v32) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v32) = 0;
      }
      if ( (_BYTE)v31 || (_BYTE)v32 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v31,
          v32,
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          7,
          99,
          (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
      v12 = 1;
    }
    else
    {
      v19 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v16) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v13 = 0;
      if ( (_BYTE)v16 || v13 )
      {
        v20 = 98;
        goto LABEL_33;
      }
    }
  }
  else
  {
    v19 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v16) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v13 = 0;
    if ( (_BYTE)v16 || v13 )
    {
      v20 = 97;
LABEL_33:
      LOBYTE(v18) = v13;
      WPP_RECORDER_AND_TRACE_SF_(
        v19->AttachedDevice,
        v16,
        v18,
        v19->DeviceExtension,
        5,
        7,
        v20,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    }
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v35);
  return v12;
}
