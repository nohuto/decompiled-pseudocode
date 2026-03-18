/*
 * XREFs of UserKSTWait @ 0x1C00C6144
 * Callers:
 *     NtKSTWait @ 0x1C00C6110 (NtKSTWait.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1C0037E30 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0037FE8 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0038050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?Wait@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@@Z @ 0x1C00C63A0 (-Wait@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01EBF38 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 UserKSTWait()
{
  char v0; // bl
  char v1; // dl
  char v2; // r8
  unsigned int v3; // esi
  char v4; // r15
  int v5; // eax
  int v6; // edx
  int v7; // r8d
  int ApcContext; // r14d
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  char v13; // dl
  __int64 v15; // rax
  __int64 v16; // rax
  ULONG v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  const char *v21; // rax
  __int64 v22; // [rsp+58h] [rbp-29h] BYREF
  __int64 v23; // [rsp+60h] [rbp-21h] BYREF
  __int64 *v24; // [rsp+68h] [rbp-19h] BYREF
  _FILE_IO_COMPLETION_INFORMATION v25; // [rsp+70h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+90h] [rbp+Fh] BYREF

  v0 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000000) == 0
    || (v1 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v1 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v2 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v2 = 0;
  }
  if ( v1 || v2 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v1,
      v2,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      26,
      15,
      (__int64)&WPP_bb145955459d30c8cddbacb454bf0148_Traceguids);
  if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 2LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C028EE70, (unsigned __int8 *)dword_1C0263365, 0LL, 0LL, 2u, &v26);
  v3 = 0;
  memset(&v25, 0, sizeof(v25));
  v4 = 1;
  while ( 1 )
  {
    v5 = IOCPDispatcher::Wait(gpKSTIOCPDispatcher, 0LL, 1u, &v25);
    ApcContext = (int)v25.ApcContext;
    v9 = v5;
    if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 2LL) )
    {
      if ( (_BYTE)v7 )
      {
        if ( ApcContext )
        {
          if ( ApcContext == 1 )
          {
            v21 = "Sensor";
          }
          else if ( ApcContext == 2 )
          {
            v21 = "ThreadManagement";
          }
          else
          {
            v21 = "UNKNOWN";
          }
        }
        else
        {
          v21 = "CoreMessaging";
        }
      }
      else
      {
        v21 = (const char *)&unk_1C0268818;
      }
      v23 = (__int64)v21;
      LODWORD(v22) = v9;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)&dword_1C028EE70,
        (__int64)&v22,
        (__int64)&v23);
    }
    if ( v9 < 0 )
      break;
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v24, "HandleKSTThreadSignal", 0LL);
    if ( v9 == 257 )
      goto LABEL_17;
    if ( !ApcContext )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
    IOCPDispatcher::Dispatch(gpKSTIOCPDispatcher, ApcContext, LODWORD(v25.KeyContext));
    if ( ApcContext != 2 )
      goto LABEL_17;
    if ( LODWORD(v25.KeyContext) < *((_DWORD *)gpKSTIOCPDispatcher + 724)
      && (v15 = 32LL * LODWORD(v25.KeyContext), *(_QWORD *)((char *)gpKSTIOCPDispatcher + v15 + 2584)) )
    {
      v16 = *(_QWORD *)((char *)gpKSTIOCPDispatcher + v15 + 2576);
    }
    else
    {
      v16 = 0LL;
    }
    if ( v16 == *((_QWORD *)gpKernelSensorThread + 7) )
    {
      v3 = 0;
      goto LABEL_33;
    }
    if ( v16 == *((_QWORD *)gpKernelSensorThread + 8) )
    {
      v3 = 2;
LABEL_33:
      v4 = 0;
    }
LABEL_17:
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v24);
    if ( !v4 )
      goto LABEL_18;
  }
  if ( v9 == -1073741749 )
  {
    v3 = 0;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) == 0
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v6) = 0;
    }
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        3,
        16,
        (__int64)&WPP_bb145955459d30c8cddbacb454bf0148_Traceguids,
        v9);
    }
    v3 = 1;
  }
  v17 = RtlNtStatusToDosError(v9);
  UserSetLastError(v17, v18, v19, v20);
LABEL_18:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000000) == 0
    || (v13 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v13 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v0 = 0;
  if ( v13 || v0 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v13,
      v0,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      26,
      17,
      (__int64)&WPP_bb145955459d30c8cddbacb454bf0148_Traceguids);
  return v3;
}
