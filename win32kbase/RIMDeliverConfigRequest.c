__int64 __fastcall RIMDeliverConfigRequest(struct RIMDEV *a1, __int64 a2, unsigned __int16 a3, int a4)
{
  int v7; // edx
  int v8; // r8d
  __int64 v9; // rdx
  int SpecificValueCaps; // ebx
  __int64 v11; // r8
  int v12; // eax
  bool v13; // zf
  PKEVENT v14; // rsi
  int v15; // edx
  int v16; // r8d
  int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 IoControlCode; // [rsp+28h] [rbp-D8h]
  PVOID InputBuffer; // [rsp+30h] [rbp-D0h]
  PVOID InputBuffera; // [rsp+30h] [rbp-D0h]
  int InputBufferLength; // [rsp+38h] [rbp-C8h]
  void *EventHandle; // [rsp+70h] [rbp-90h] BYREF
  _WORD v27[2]; // [rsp+78h] [rbp-88h] BYREF
  int v28; // [rsp+7Ch] [rbp-84h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp-80h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+88h] [rbp-78h] BYREF
  PVOID Object[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v32[80]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v33[80]; // [rsp+F0h] [rbp-10h] BYREF

  v28 = a4;
  memset(v32, 0, 0x48uLL);
  memset(v33, 0, 0x48uLL);
  v27[0] = 1;
  if ( !*(_QWORD *)(a2 + 32) )
  {
    LODWORD(EventHandle) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1546);
  }
  if ( !*(_WORD *)(a2 + 48) )
  {
    LODWORD(EventHandle) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1547);
  }
  InputTraceLogging::RIM::DeliverConfigRequest(a1);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v7) = 0;
  }
  if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qDDdd(WPP_GLOBAL_Control->AttachedDevice, v7, v8, *(unsigned __int16 *)(a2 + 42));
  }
  memset(*(void **)(a2 + 32), 0, *(unsigned __int16 *)(a2 + 48));
  InputBuffer = *(PVOID *)(a2 + 16);
  if ( a3 == 82 )
  {
    SpecificValueCaps = rimHidP_GetSpecificValueCaps(2, 13, 0, 82, (__int64)v32, (__int64)v27, (__int64)InputBuffer);
    if ( SpecificValueCaps != 1114112 )
      goto LABEL_42;
    **(_BYTE **)(a2 + 32) = v32[2];
    v12 = rimHidP_SetUsageValue(
            2,
            13,
            0,
            82,
            v28,
            *(_QWORD *)(a2 + 16),
            *(_QWORD *)(a2 + 32),
            *(unsigned __int16 *)(a2 + 48));
  }
  else
  {
    SpecificValueCaps = rimHidP_GetSpecificButtonCaps(2, 13, 0, a3, (__int64)v33, (__int64)v27, (__int64)InputBuffer);
    if ( SpecificValueCaps != 1114112 )
      goto LABEL_32;
    v13 = v28 == 0;
    **(_BYTE **)(a2 + 32) = v33[2];
    if ( v13 )
    {
LABEL_19:
      Object[0] = 0LL;
      Timeout.QuadPart = 0LL;
      FileHandle = 0LL;
      EventHandle = 0LL;
      SpecificValueCaps = RIMGetDeviceObjectPointer(
                            (struct _UNICODE_STRING *)a1 + 13,
                            v9,
                            v11,
                            &FileHandle,
                            Object,
                            (PDEVICE_OBJECT *)&Timeout);
      if ( SpecificValueCaps < 0 )
      {
LABEL_43:
        if ( (unsigned int)dword_1C02C92F8 > 5 && tlgKeywordOn((__int64)&dword_1C02C92F8, 0x400000000000LL) )
        {
          v17 = *((unsigned __int8 *)a1 + 48);
          LODWORD(EventHandle) = v28;
          Timeout = *(union _LARGE_INTEGER *)((char *)a1 + 216);
          LODWORD(FileHandle) = SpecificValueCaps;
          LOWORD(v28) = a3;
          Object[0] = (PVOID)RimDeviceTypeToRimInputTypeString((__int64)a1, v17);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v18,
            byte_1C0296B3D,
            v19,
            v20,
            (const WCHAR **)Object,
            (const WCHAR **)&Timeout,
            (__int64)&v28,
            (__int64)&EventHandle,
            (__int64)&FileHandle);
        }
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v9) = 0;
        }
        if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v9,
            v11,
            (_DWORD)gRimLog,
            2,
            1,
            66,
            (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids);
        }
        return (unsigned int)SpecificValueCaps;
      }
      v14 = IoCreateNotificationEvent(0LL, &EventHandle);
      SpecificValueCaps = ZwDeviceIoControlFile(
                            FileHandle,
                            EventHandle,
                            0LL,
                            0LL,
                            (PIO_STATUS_BLOCK)a1 + 16,
                            0xB0191u,
                            *(PVOID *)(a2 + 32),
                            *(unsigned __int16 *)(a2 + 48),
                            0LL,
                            0);
      if ( SpecificValueCaps == 259 )
      {
        if ( v14 )
        {
          Timeout.QuadPart = -10000000LL;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v15) = 0;
          }
          if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v15,
              v16,
              (_DWORD)gRimLog,
              4,
              1,
              64,
              (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids);
          }
          SpecificValueCaps = KeWaitForSingleObject(v14, Executive, 0, 0, &Timeout);
        }
        else
        {
          SpecificValueCaps = -1073741536;
        }
      }
      ObfDereferenceObject(Object[0]);
      ZwClose(FileHandle);
      ZwClose(EventHandle);
LABEL_42:
      if ( SpecificValueCaps >= 0 )
        return (unsigned int)SpecificValueCaps;
      goto LABEL_43;
    }
    InputBufferLength = *(unsigned __int16 *)(a2 + 48);
    InputBuffera = *(PVOID *)(a2 + 32);
    IoControlCode = *(_QWORD *)(a2 + 16);
    LODWORD(FileHandle) = 2;
    LODWORD(EventHandle) = 5767255;
    v12 = rimHidP_SetUsages(
            2,
            13,
            0,
            (unsigned int)&EventHandle,
            (__int64)&FileHandle,
            IoControlCode,
            (__int64)InputBuffera,
            InputBufferLength);
  }
  SpecificValueCaps = v12;
  if ( v12 == 1114112 )
    goto LABEL_19;
LABEL_32:
  if ( (unsigned __int16)(a3 - 87) > 1u )
    goto LABEL_42;
  LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v11,
      (_DWORD)gRimLog,
      4,
      1,
      65,
      (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids);
  }
  return 0;
}
