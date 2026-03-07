struct DEVICEINFO *__fastcall CBaseInput::FindDeviceInfo(CBaseInput *this, void *a2, int a3)
{
  __int64 v3; // rax
  int v4; // esi
  void *v5; // rbx
  __int64 v7; // r15
  char v8; // di
  int v9; // edx
  PVOID v10; // rsi
  char *v11; // rbp
  __int64 v12; // rbx
  __int64 i; // rcx
  void *v15; // r8
  void *v16; // r8
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  v3 = *((_QWORD *)this + 165);
  v4 = a3;
  v5 = a2;
  Object = 0LL;
  v7 = 0LL;
  if ( *(struct _KTHREAD **)(v3 + 8) == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1533LL);
  v8 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
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
      3,
      17,
      (__int64)&WPP_b9fda6c6f15d3af104d8d89ad615ee8c_Traceguids);
  if ( v5 == (void *)-1LL )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        3,
        18,
        (__int64)&WPP_b9fda6c6f15d3af104d8d89ad615ee8c_Traceguids);
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v8 = 0;
    if ( (_BYTE)a2 || v8 )
    {
      v15 = &WPP_b9fda6c6f15d3af104d8d89ad615ee8c_Traceguids;
      LOBYTE(v15) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)v15,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        3,
        19,
        (__int64)&WPP_b9fda6c6f15d3af104d8d89ad615ee8c_Traceguids);
    }
    return 0LL;
  }
  else
  {
    if ( (int)RawInputManagerDeviceObjectResolveHandle(v5, 3LL, v4 == 0, &Object) >= 0 )
    {
      v10 = Object;
      v11 = (char *)Object + 72;
      if ( !Object )
        v11 = 0LL;
      v12 = *((_QWORD *)this + 165);
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v12, 0LL);
      for ( i = **((_QWORD **)this + 166); i; i = *(_QWORD *)(i + 56) )
      {
        if ( (char *)i == v11 )
        {
          v7 = i;
          break;
        }
      }
      ObfDereferenceObject(v10);
      ExReleasePushLockSharedEx(v12, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v8 = 0;
    if ( (_BYTE)v9 || v8 )
    {
      v16 = &WPP_b9fda6c6f15d3af104d8d89ad615ee8c_Traceguids;
      LOBYTE(v16) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        (_DWORD)v16,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        3,
        20,
        (__int64)&WPP_b9fda6c6f15d3af104d8d89ad615ee8c_Traceguids);
    }
    return (struct DEVICEINFO *)v7;
  }
}
