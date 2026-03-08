/*
 * XREFs of UserKSTWait @ 0x1C007BCBC
 * Callers:
 *     NtKSTWait @ 0x1C00CC330 (NtKSTWait.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007AF8C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C007B050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?Wait@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@@Z @ 0x1C007BF20 (-Wait@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@@Z.c)
 *     ?Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z @ 0x1C007C030 (-Dispatch@IOCPDispatcher@@QEAAXW4WaitCompletionPacketPurpose@@K@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C021CEA4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
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
  unsigned int ApcContext; // r14d
  int v9; // edi
  char v10; // dl
  __int64 v12; // rax
  __int64 v13; // rax
  ULONG v14; // eax
  const char *v15; // rax
  _DWORD v16[3]; // [rsp+5Ch] [rbp-25h] BYREF
  __int64 *v17; // [rsp+68h] [rbp-19h] BYREF
  _FILE_IO_COMPLETION_INFORMATION v18; // [rsp+70h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+90h] [rbp+Fh] BYREF

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
      (__int64)&WPP_e6bb3bf3b4ef39a6c3de9dff1ef0b3c5_Traceguids);
  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 2LL) )
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C02CA7E0, (int)&dword_1C029CD43, 0, 0, 2u, &v19);
  v3 = 0;
  memset(&v18, 0, sizeof(v18));
  v4 = 1;
  while ( 1 )
  {
    v5 = IOCPDispatcher::Wait((IOCPDispatcher *)WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0LL, 1u, &v18);
    ApcContext = (unsigned int)v18.ApcContext;
    v9 = v5;
    if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 2LL) )
    {
      if ( (_BYTE)v7 )
      {
        if ( ApcContext )
        {
          if ( ApcContext == 1 )
          {
            v15 = "Sensor";
          }
          else if ( ApcContext == 2 )
          {
            v15 = "ThreadManagement";
          }
          else
          {
            v15 = "UNKNOWN";
          }
        }
        else
        {
          v15 = "CoreMessaging";
        }
      }
      else
      {
        v15 = (const char *)&unk_1C02A2108;
      }
      *(_QWORD *)&v16[1] = v15;
      v16[0] = v9;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (int)&dword_1C02CA7E0,
        (__int64)v16,
        (__int64)&v16[1]);
    }
    if ( v9 < 0 )
      break;
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v17, "HandleKSTThreadSignal", 0LL);
    if ( v9 == 257 )
      goto LABEL_17;
    if ( !ApcContext )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 171LL);
    IOCPDispatcher::Dispatch(WPP_MAIN_CB.Queue.Wcb.DeviceObject, ApcContext, LODWORD(v18.KeyContext));
    if ( ApcContext != 2 )
      goto LABEL_17;
    if ( LODWORD(v18.KeyContext) < *((_DWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceObject + 724)
      && (v12 = 32LL * LODWORD(v18.KeyContext), *(_QWORD *)((char *)WPP_MAIN_CB.Queue.Wcb.DeviceObject + v12 + 2584)) )
    {
      v13 = *(_QWORD *)((char *)WPP_MAIN_CB.Queue.Wcb.DeviceObject + v12 + 2576);
    }
    else
    {
      v13 = 0LL;
    }
    if ( v13 == *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp + 7) )
    {
      v3 = 0;
      goto LABEL_33;
    }
    if ( v13 == *((_QWORD *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp + 8) )
    {
      v3 = 2;
LABEL_33:
      v4 = 0;
    }
LABEL_17:
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v17);
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
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        3,
        16,
        (__int64)&WPP_e6bb3bf3b4ef39a6c3de9dff1ef0b3c5_Traceguids,
        v9);
    }
    v3 = 1;
  }
  v14 = RtlNtStatusToDosError(v9);
  UserSetLastError(v14);
LABEL_18:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000000) == 0
    || (v10 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v10 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v0 = 0;
  if ( v10 || v0 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      v0,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      26,
      17,
      (__int64)&WPP_e6bb3bf3b4ef39a6c3de9dff1ef0b3c5_Traceguids);
  return v3;
}
