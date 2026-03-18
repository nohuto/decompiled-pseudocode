/*
 * XREFs of ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C0005550
 * Callers:
 *     ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x1C0005050 (-ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z.c)
 *     ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x1C00E9420 (-ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z.c)
 *     ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x1C01DC43C (-OnInputSuppressed@CBaseInput@@AEBAXXZ.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01E2930 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0043E30 (RawInputManagerDeviceObjectResolveHandle.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct DEVICEINFO *__fastcall CBaseInput::FindDeviceInfo(CBaseInput *this, void *a2, __int64 a3)
{
  int v3; // esi
  void *v4; // rdi
  struct DEVICEINFO *v5; // rbp
  char v6; // bl
  int v7; // edx
  PVOID v8; // rdi
  struct DEVICEINFO *v9; // rsi
  struct DEVICEINFO *i; // rax
  void *v12; // r8
  void *v13; // r8
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  v3 = a3;
  Object = 0LL;
  v4 = a2;
  v5 = 0LL;
  if ( (struct _KTHREAD *)qword_1C029A1C8 == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v6 = 1;
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
      (__int64)&WPP_b99049c1e8dc304ebad6fe568d7717f2_Traceguids);
  if ( v4 == (void *)-1LL )
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
        (__int64)&WPP_b99049c1e8dc304ebad6fe568d7717f2_Traceguids);
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v6 = 0;
    if ( (_BYTE)a2 || v6 )
    {
      v12 = &WPP_b99049c1e8dc304ebad6fe568d7717f2_Traceguids;
      LOBYTE(v12) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)v12,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        3,
        19,
        (__int64)&WPP_b99049c1e8dc304ebad6fe568d7717f2_Traceguids);
    }
    return 0LL;
  }
  else
  {
    if ( (int)RawInputManagerDeviceObjectResolveHandle(v4, 3LL, v3 == 0, &Object) >= 0 )
    {
      v8 = Object;
      v9 = (struct DEVICEINFO *)((char *)Object + 88);
      if ( !Object )
        v9 = 0LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(&CBaseInput::_sLock, 0LL);
      for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
      {
        if ( i == v9 )
        {
          v5 = i;
          break;
        }
      }
      ObfDereferenceObject(v8);
      ExReleasePushLockSharedEx(&CBaseInput::_sLock, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
      || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v7) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v6 = 0;
    if ( (_BYTE)v7 || v6 )
    {
      v13 = &WPP_b99049c1e8dc304ebad6fe568d7717f2_Traceguids;
      LOBYTE(v13) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        (_DWORD)v13,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        3,
        20,
        (__int64)&WPP_b99049c1e8dc304ebad6fe568d7717f2_Traceguids);
    }
    return v5;
  }
}
