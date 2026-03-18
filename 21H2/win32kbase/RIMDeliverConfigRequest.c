/*
 * XREFs of RIMDeliverConfigRequest @ 0x1C018AB6C
 * Callers:
 *     EnablePTPDevices @ 0x1C0148970 (EnablePTPDevices.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0189BB4 (RIMAllocateHidConfigDesc.c)
 *     RIMConfigurePointerDevice @ 0x1C018A990 (RIMConfigurePointerDevice.c)
 *     RIMRevokeConfigurationChange @ 0x1C018C930 (RIMRevokeConfigurationChange.c)
 *     RIMUnRevokeConfigurationChange @ 0x1C018D330 (RIMUnRevokeConfigurationChange.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RimDeviceTypeToRimInputTypeString @ 0x1C004DC2C (RimDeviceTypeToRimInputTypeString.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00A1D50 (RIMGetDeviceObjectPointer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x1C0189950 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@@-$_tlgWriteTe.c)
 *     ?DeliverConfigRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@GK@Z @ 0x1C0189A54 (-DeliverConfigRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@GK@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDDdd @ 0x1C018E704 (WPP_RECORDER_AND_TRACE_SF_qDDdd.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C018E844 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C018E898 (rimHidP_GetSpecificValueCaps.c)
 *     rimHidP_SetUsageValue @ 0x1C018E94C (rimHidP_SetUsageValue.c)
 *     rimHidP_SetUsages @ 0x1C018E9B8 (rimHidP_SetUsages.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMDeliverConfigRequest(struct RIMDEV *a1, __int64 a2, unsigned __int16 a3, int a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rdx
  int SpecificValueCaps; // ebx
  __int64 v14; // r8
  int v15; // eax
  bool v16; // zf
  PKEVENT v17; // r14
  int v18; // edx
  int v19; // r8d
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 IoControlCode; // [rsp+28h] [rbp-D8h]
  PVOID InputBuffer; // [rsp+30h] [rbp-D0h]
  PVOID InputBuffera; // [rsp+30h] [rbp-D0h]
  int InputBufferLength; // [rsp+38h] [rbp-C8h]
  _WORD v29[2]; // [rsp+70h] [rbp-90h] BYREF
  int v30; // [rsp+74h] [rbp-8Ch] BYREF
  void *EventHandle; // [rsp+78h] [rbp-88h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp-80h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+88h] [rbp-78h] BYREF
  PVOID Object[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v35[80]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v36[80]; // [rsp+F0h] [rbp-10h] BYREF

  v30 = a4;
  memset(v35, 0, 0x48uLL);
  memset(v36, 0, 0x48uLL);
  v29[0] = 1;
  if ( !*(_QWORD *)(a2 + 32) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
  if ( !*(_WORD *)(a2 + 48) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
  InputTraceLogging::RIM::DeliverConfigRequest(a1);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v10) = 0;
  }
  if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qDDdd(WPP_GLOBAL_Control->AttachedDevice, v10, v11, *(unsigned __int16 *)(a2 + 42));
  }
  memset(*(void **)(a2 + 32), 0, *(unsigned __int16 *)(a2 + 48));
  InputBuffer = *(PVOID *)(a2 + 16);
  if ( a3 == 82 )
  {
    SpecificValueCaps = rimHidP_GetSpecificValueCaps(2, 13, 0, 82, (__int64)v35, (__int64)v29, (__int64)InputBuffer);
    if ( SpecificValueCaps != 1114112 )
      goto LABEL_42;
    **(_BYTE **)(a2 + 32) = v35[2];
    v15 = rimHidP_SetUsageValue(
            2,
            13,
            0,
            82,
            v30,
            *(_QWORD *)(a2 + 16),
            *(_QWORD *)(a2 + 32),
            *(unsigned __int16 *)(a2 + 48));
  }
  else
  {
    SpecificValueCaps = rimHidP_GetSpecificButtonCaps(2, 13, 0, a3, (__int64)v36, (__int64)v29, (__int64)InputBuffer);
    if ( SpecificValueCaps != 1114112 )
      goto LABEL_32;
    v16 = v30 == 0;
    **(_BYTE **)(a2 + 32) = v36[2];
    if ( v16 )
    {
LABEL_19:
      Object[0] = 0LL;
      Timeout.QuadPart = 0LL;
      FileHandle = 0LL;
      EventHandle = 0LL;
      SpecificValueCaps = RIMGetDeviceObjectPointer(
                            (struct _UNICODE_STRING *)a1 + 13,
                            v12,
                            v14,
                            &FileHandle,
                            Object,
                            (PDEVICE_OBJECT *)&Timeout);
      if ( SpecificValueCaps < 0 )
      {
LABEL_43:
        if ( (unsigned int)dword_1C028D610 > 5 && tlgKeywordOn((__int64)&dword_1C028D610, 0x400000000000LL) )
        {
          v20 = *((unsigned __int8 *)a1 + 48);
          LODWORD(EventHandle) = v30;
          Timeout = *(union _LARGE_INTEGER *)((char *)a1 + 216);
          LODWORD(FileHandle) = SpecificValueCaps;
          LOWORD(v30) = a3;
          Object[0] = (PVOID)RimDeviceTypeToRimInputTypeString((__int64)a1, v20);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v21,
            byte_1C025D630,
            v22,
            v23,
            (const WCHAR **)Object,
            (const WCHAR **)&Timeout,
            (__int64)&v30,
            (__int64)&EventHandle,
            (__int64)&FileHandle);
        }
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v12) = 0;
        }
        if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v12,
            v14,
            (_DWORD)gRimLog,
            2,
            1,
            66,
            (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids);
        }
        return (unsigned int)SpecificValueCaps;
      }
      v17 = IoCreateNotificationEvent(0LL, &EventHandle);
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
        if ( v17 )
        {
          Timeout.QuadPart = -10000000LL;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v18) = 0;
          }
          if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v18,
              v19,
              (_DWORD)gRimLog,
              4,
              1,
              64,
              (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids);
          }
          SpecificValueCaps = KeWaitForSingleObject(v17, Executive, 0, 0, &Timeout);
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
    v15 = rimHidP_SetUsages(
            2,
            13,
            0,
            (unsigned int)&EventHandle,
            (__int64)&FileHandle,
            IoControlCode,
            (__int64)InputBuffera,
            InputBufferLength);
  }
  SpecificValueCaps = v15;
  if ( v15 == 1114112 )
    goto LABEL_19;
LABEL_32:
  if ( (unsigned __int16)(a3 - 87) > 1u )
    goto LABEL_42;
  LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v12,
      v14,
      (_DWORD)gRimLog,
      4,
      1,
      65,
      (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids);
  }
  return 0;
}
