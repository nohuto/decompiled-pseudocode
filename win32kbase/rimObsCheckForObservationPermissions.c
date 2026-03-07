__int64 __fastcall rimObsCheckForObservationPermissions(char a1)
{
  char v1; // bl
  int v2; // edi
  int v3; // esi
  int v4; // ebp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _EPROCESS *CurrentProcess; // rax
  int v10; // edx
  int v11; // r8d
  PDEVICE_OBJECT v12; // rcx
  __int16 v13; // r9
  int v14; // edx
  PDEVICE_OBJECT v15; // rcx
  __int16 v16; // r9
  char v18; // [rsp+40h] [rbp-28h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-18h] BYREF
  char v20; // [rsp+70h] [rbp+8h] BYREF

  v1 = 1;
  v2 = a1 & 2;
  v3 = a1 & 1;
  v4 = RIMIsTestSigningOn();
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v6, v5, v7, v8);
  if ( !(unsigned int)rimIsProcessLocalSystem(CurrentProcess) )
  {
    if ( !v4 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v1 = 0;
      }
      if ( v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = 75;
        LOBYTE(v14) = v1;
        LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v14,
          v11,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          3,
          23,
          75,
          (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids);
      }
      return 0LL;
    }
    v20 = 0;
    DestinationString = 0LL;
    if ( !v3
      || (RtlInitUnicodeString(&DestinationString, L"inputObservation"),
          v10 = RtlCapabilityCheck(0LL, &DestinationString, &v20),
          v10 >= 0)
      && v20 )
    {
      if ( !v2
        || (RtlInitUnicodeString(&DestinationString, L"inputSuppression"),
            v10 = RtlCapabilityCheck(0LL, &DestinationString, &v20),
            v10 >= 0)
        && v20 )
      {
        v12 = WPP_GLOBAL_Control;
        LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return 1LL;
        v13 = 78;
        goto LABEL_48;
      }
      v15 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v1 = 0;
      }
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v1 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v16 = 77;
    }
    else
    {
      v15 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
      {
        v1 = 0;
      }
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v1 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 0LL;
      v16 = 76;
    }
    v18 = v10;
    LOBYTE(v10) = v1;
    WPP_RECORDER_AND_TRACE_SF_d(
      v15->AttachedDevice,
      v10,
      v11,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      3,
      23,
      v16,
      (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids,
      v18);
    return 0LL;
  }
  v12 = WPP_GLOBAL_Control;
  LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( !(_BYTE)v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return 1LL;
  v13 = 74;
LABEL_48:
  WPP_RECORDER_AND_TRACE_SF_(
    v12->AttachedDevice,
    v10,
    v11,
    WPP_MAIN_CB.Queue.ListEntry.Flink,
    4,
    23,
    v13,
    (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids);
  return 1LL;
}
