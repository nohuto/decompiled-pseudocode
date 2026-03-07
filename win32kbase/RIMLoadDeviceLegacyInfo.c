void __fastcall RIMLoadDeviceLegacyInfo(struct DEVICEINFO *a1, int a2, int a3)
{
  int v4; // ebx
  int v5; // edx
  int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // edx
  int v11; // r8d
  PVOID Object; // [rsp+48h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-30h] BYREF
  PVOID v14; // [rsp+58h] [rbp-28h] BYREF
  __int64 v15; // [rsp+60h] [rbp-20h] BYREF
  int v16; // [rsp+68h] [rbp-18h]

  Handle = 0LL;
  v14 = 0LL;
  Object = 0LL;
  v4 = 0;
  if ( (int)RIMGetDeviceObjectPointer((int)a1 + 208, a2, a3, (unsigned int)&Handle, (__int64)&v14, (__int64)&Object) < 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v5) = 0;
    }
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v6,
        (_DWORD)gRimLog,
        2,
        1,
        27,
        (__int64)&WPP_11533c3e880c32a58e181bbd9ba8979b_Traceguids);
    }
  }
  else
  {
    if ( !v14 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1621LL);
    if ( !Object )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1622LL);
    ObfReferenceObject(Object);
    if ( (unsigned int)RIMIsHIDMouse(Object) )
    {
      v15 = 0LL;
      v4 = 1;
      v16 = 0;
      if ( (int)rimBlockingDeviceIoControlFile(Handle, v7, v8, v9, &v15) < 0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
        {
          LOBYTE(v10) = 0;
        }
        if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v10,
            v11,
            (_DWORD)gRimLog,
            3,
            1,
            28,
            (__int64)&WPP_11533c3e880c32a58e181bbd9ba8979b_Traceguids);
        }
      }
      else
      {
        *((_WORD *)a1 + 441) = HIWORD(v15);
        *((_WORD *)a1 + 442) = v16;
      }
    }
    RIMApiSetCheckForLegacyTouchPad(a1, (struct _FILE_OBJECT *)v14, (struct _DEVICE_OBJECT *)Object, v4);
  }
  if ( Handle )
  {
    ZwClose(Handle);
    ObfDereferenceObject(v14);
    ObfDereferenceObject(Object);
  }
}
