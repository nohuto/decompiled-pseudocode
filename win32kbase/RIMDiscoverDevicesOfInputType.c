__int64 __fastcall RIMDiscoverDevicesOfInputType(char *Object)
{
  NTSTATUS v2; // edi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // esi
  void **v8; // r14
  _QWORD *v9; // rbp
  int v10; // edx
  int v11; // r8d
  __int64 v13; // rdx
  __int64 v14; // [rsp+20h] [rbp-48h]

  v2 = -1073741811;
  if ( RIMChildInputTypeIsVirtualized(*((_DWORD *)Object + 21)) )
    return 0LL;
  if ( RIMApiSetIsRemoteConnection(v4, v3, v5, v6) || !*((_QWORD *)Object + 15) )
  {
    return 0;
  }
  else
  {
    v7 = 0;
    v8 = (void **)(Object + 128);
    v9 = Object + 312;
    do
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(v7) & *((_DWORD *)Object + 21)) != 0 )
      {
        if ( *(v9 - 11) )
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
              10,
              (__int64)&WPP_e6afa386b7683a2c6333e851e06c64d1_Traceguids);
          }
        }
        else
        {
          if ( !*v9 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 112LL);
          v2 = ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 0);
          if ( v2 >= 0 )
          {
            v2 = RIMRegisterForDeviceClassNotifications(
                   (__int64)&Object[8 * v7 + 224],
                   v13,
                   *v8,
                   *((struct _DRIVER_OBJECT **)Object + 15),
                   v14,
                   &Object[16 * v7 + 248],
                   (PVOID *)&Object[8 * v7 + 224]);
            if ( v2 < 0 )
              ObfDereferenceObject(Object);
          }
        }
      }
      ++v7;
      ++v9;
      v8 += 4;
    }
    while ( v7 <= 2 );
  }
  return (unsigned int)v2;
}
