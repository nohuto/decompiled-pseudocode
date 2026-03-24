/*
 * XREFs of ?GetPointerMessageInfo@CTouchProcessor@@QEAAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x1C0194150
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C0095988 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCC60 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00CD2DC (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0187408 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C0191E34 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01970E4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C019ABD8 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerMessageInfo(
        struct _KTHREAD **this,
        __int64 a2,
        int a3,
        HWND *a4,
        int *a5,
        int *a6,
        unsigned int *a7,
        unsigned int *a8)
{
  __int64 v10; // rsi
  unsigned int v12; // ebx
  int v13; // edx
  PDEVICE_OBJECT v14; // rcx
  int v15; // r9d
  const struct CPointerInputFrame *v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rdi
  CInputDest *v19; // rcx
  HWND WindowHandle; // rax
  int v21; // r8d
  int v22; // edx
  CInputDest *v24; // [rsp+30h] [rbp-68h] BYREF
  CInpLockGuard *v25[7]; // [rsp+38h] [rbp-60h] BYREF
  int v26; // [rsp+A8h] [rbp+10h] BYREF

  v10 = a2;
  v12 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      98,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  v24 = 0LL;
  v26 = 0;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v25,
    (struct CInpLockGuard *)(this + 5),
    (void *)v10);
  if ( v10 )
  {
    CTouchProcessor::GetPointerCapture(this, v10, a3, &v24, &v26);
    v16 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)this, *(_DWORD *)(v10 + 28));
    if ( v16 )
    {
      v17 = *(unsigned int *)(v10 + 32);
      if ( (unsigned int)v17 >= *((_DWORD *)v16 + 12) )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3973);
        v17 = *(unsigned int *)(v10 + 32);
      }
      v18 = *((_QWORD *)v16 + 17) + 480 * v17;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v18) )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3975);
      if ( *(_WORD *)(v10 + 16) != *(_WORD *)(v18 + 172) )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3976);
      v19 = v24;
      if ( v24 )
      {
        WindowHandle = CInputDest::GetWindowHandle(v24);
        v21 = v26;
        *a4 = WindowHandle;
      }
      else
      {
        *a4 = *(HWND *)(v18 + 192);
        v21 = *(_DWORD *)(v18 + 144);
      }
      if ( a5 )
        *a5 = v19 != 0LL;
      if ( a6 )
        *a6 = v21;
      if ( a7 )
        *a7 = *(_DWORD *)(v18 + 168);
      if ( a8 )
        *a8 = *(_DWORD *)(v18 + 180);
      CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v16);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v22) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v22,
          7,
          101,
          (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
      }
      v12 = 1;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v15 = 100;
        goto LABEL_12;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v15 = 99;
LABEL_12:
      LOBYTE(v13) = 5;
      WPP_RECORDER_SF_(v14->DeviceExtension, v13, 7, v15, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    }
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v25);
  return v12;
}
