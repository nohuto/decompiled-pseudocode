/*
 * XREFs of ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C00021A0
 * Callers:
 *     ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x1C0002110 (-ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z.c)
 *     ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x1C00E5770 (-ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z.c)
 *     ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x1C01DCDD4 (-OnInputSuppressed@CBaseInput@@AEBAXXZ.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01E2DA0 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0072E20 (RawInputManagerDeviceObjectResolveHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct DEVICEINFO *__fastcall CBaseInput::FindDeviceInfo(CBaseInput *this, void *a2, int a3)
{
  int v3; // esi
  void *v4; // rbx
  __int64 v6; // r15
  char v7; // di
  int v8; // edx
  PVOID v9; // rsi
  char *v10; // rbp
  __int64 v11; // rbx
  __int64 i; // rcx
  void *v14; // r8
  void *v15; // r8
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  Object = 0LL;
  v3 = a3;
  v4 = a2;
  v6 = 0LL;
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 157) + 8LL) == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1509LL);
  v7 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
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
      2,
      17,
      (__int64)&WPP_6e321a902f9d36eb099a581dd6c4de5f_Traceguids);
  if ( v4 == (void *)-1LL )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
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
        2,
        18,
        (__int64)&WPP_6e321a902f9d36eb099a581dd6c4de5f_Traceguids);
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v7 = 0;
    if ( (_BYTE)a2 || v7 )
    {
      v14 = &WPP_6e321a902f9d36eb099a581dd6c4de5f_Traceguids;
      LOBYTE(v14) = v7;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)v14,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        2,
        19,
        (__int64)&WPP_6e321a902f9d36eb099a581dd6c4de5f_Traceguids);
    }
    return 0LL;
  }
  else
  {
    if ( (int)RawInputManagerDeviceObjectResolveHandle(v4, 3LL, v3 == 0, &Object) >= 0 )
    {
      v9 = Object;
      v10 = (char *)Object + 72;
      if ( !Object )
        v10 = 0LL;
      v11 = *((_QWORD *)this + 157);
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v11, 0LL);
      for ( i = **((_QWORD **)this + 158); i; i = *(_QWORD *)(i + 56) )
      {
        if ( (char *)i == v10 )
        {
          v6 = i;
          break;
        }
      }
      ObfDereferenceObject(v9);
      ExReleasePushLockSharedEx(v11, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v8) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v7 = 0;
    if ( (_BYTE)v8 || v7 )
    {
      v15 = &WPP_6e321a902f9d36eb099a581dd6c4de5f_Traceguids;
      LOBYTE(v15) = v7;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        (_DWORD)v15,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        2,
        20,
        (__int64)&WPP_6e321a902f9d36eb099a581dd6c4de5f_Traceguids);
    }
    return (struct DEVICEINFO *)v6;
  }
}
