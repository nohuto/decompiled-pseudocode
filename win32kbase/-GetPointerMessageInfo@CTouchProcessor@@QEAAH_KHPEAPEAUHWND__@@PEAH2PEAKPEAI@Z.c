__int64 __fastcall CTouchProcessor::GetPointerMessageInfo(
        CTouchProcessor *this,
        void *a2,
        int a3,
        HWND *a4,
        int *a5,
        int *a6,
        unsigned int *a7,
        unsigned int *a8)
{
  int v9; // r14d
  void *v10; // rsi
  unsigned int v12; // ebx
  char v13; // di
  CTouchProcessor *v14; // rcx
  int v15; // edx
  struct CPointerMsgData *NonConstMsgData; // rbp
  int v17; // r8d
  PDEVICE_OBJECT v18; // rcx
  __int16 v19; // ax
  __int64 v20; // rax
  __int64 v21; // r14
  __int64 v22; // rsi
  CInputDest *v23; // rcx
  HWND WindowHandle; // rax
  int v25; // r8d
  int v26; // edx
  int v27; // r8d
  int v29; // [rsp+40h] [rbp-78h] BYREF
  CInputDest *v30; // [rsp+48h] [rbp-70h] BYREF
  CInpLockGuard *v31[8]; // [rsp+50h] [rbp-68h] BYREF

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
      103,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  v30 = 0LL;
  v29 = 0;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v31,
    (CTouchProcessor *)((char *)this + 32),
    v10);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v14, (__int64)v10);
  if ( NonConstMsgData )
  {
    CTouchProcessor::GetPointerCapture(this, (unsigned __int64)v10, v9, &v30, &v29);
    v20 = CTouchProcessor::ReferenceFrame(this, *((unsigned int *)NonConstMsgData + 7));
    v21 = v20;
    if ( v20 )
    {
      if ( *((_DWORD *)NonConstMsgData + 8) >= *(_DWORD *)(v20 + 48) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4494);
      v22 = *(_QWORD *)(v21 + 240) + 480LL * *((unsigned int *)NonConstMsgData + 8);
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v22) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4496);
      if ( *((_WORD *)NonConstMsgData + 8) != *(_WORD *)(v22 + 172) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4497);
      v23 = v30;
      if ( v30 )
      {
        WindowHandle = CInputDest::GetWindowHandle(v30);
        v25 = v29;
        *a4 = WindowHandle;
      }
      else
      {
        *a4 = *(HWND *)(v22 + 192);
        v25 = *(_DWORD *)(v22 + 144);
      }
      if ( a5 )
        *a5 = v23 != 0LL;
      if ( a6 )
        *a6 = v25;
      if ( a7 )
        *a7 = *(_DWORD *)(v22 + 168);
      if ( a8 )
        *a8 = *(_DWORD *)(v22 + 180);
      CTouchProcessor::UnreferenceFrame(this, v21);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v26) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v26) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (LOBYTE(v27) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        LOBYTE(v27) = 0;
      }
      if ( (_BYTE)v26 || (_BYTE)v27 )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v26,
          v27,
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          7,
          106,
          (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
      v12 = 1;
    }
    else
    {
      v18 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v15) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v13 = 0;
      if ( (_BYTE)v15 || v13 )
      {
        v19 = 105;
        goto LABEL_33;
      }
    }
  }
  else
  {
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v15) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v13 = 0;
    if ( (_BYTE)v15 || v13 )
    {
      v19 = 104;
LABEL_33:
      LOBYTE(v17) = v13;
      WPP_RECORDER_AND_TRACE_SF_(
        v18->AttachedDevice,
        v15,
        v17,
        v18->DeviceExtension,
        5,
        7,
        v19,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v31);
  return v12;
}
