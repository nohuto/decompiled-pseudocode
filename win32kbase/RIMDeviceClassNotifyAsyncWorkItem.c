/*
 * XREFs of RIMDeviceClassNotifyAsyncWorkItem @ 0x1C0037820
 * Callers:
 *     RIMDoAsyncPnpWorkItem @ 0x1C0036418 (RIMDoAsyncPnpWorkItem.c)
 * Callees:
 *     RIMCreateDev @ 0x1C0036CBC (RIMCreateDev.c)
 *     ?RimDeviceClassNotification@RIM@InputTraceLogging@@SAXAEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x1C0037CCC (-RimDeviceClassNotification@RIM@InputTraceLogging@@SAXAEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C0037E30 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     RIMDoOnPnpNotification @ 0x1C00872A8 (RIMDoOnPnpNotification.c)
 *     rimQueueRimDevChangeAsyncWorkItem @ 0x1C00895B0 (rimQueueRimDevChangeAsyncWorkItem.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00BC2F4 (RimDeviceTypeToRimInputType.c)
 *     Feature_RIMUserCritOpt__private_ReportDeviceUsage @ 0x1C00DF02C (Feature_RIMUserCritOpt__private_ReportDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFreeDev @ 0x1C019DE20 (RIMFreeDev.c)
 *     RIMFindInputDeviceForConfig @ 0x1C01ADCD8 (RIMFindInputDeviceForConfig.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@55555@Z @ 0x1C01CFD10 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@@-$_t.c)
 *     WPP_RECORDER_AND_TRACE_SF_Sdq @ 0x1C01D1498 (WPP_RECORDER_AND_TRACE_SF_Sdq.c)
 */

__int64 __fastcall RIMDeviceClassNotifyAsyncWorkItem(__int64 a1)
{
  __int64 v2; // r15
  __int64 v3; // rdi
  int v4; // r8d
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  int v7; // r14d
  int v8; // edx
  int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // r10
  const UNICODE_STRING *v13; // rdx
  __int64 v14; // rax
  int v15; // ecx
  BOOLEAN v16; // al
  int v17; // r9d
  int v18; // edx
  __int64 v19; // r10
  __int64 v20; // rcx
  int v21; // edx
  int v22; // r8d
  __int64 v23; // rcx
  int v24; // esi
  int v25; // [rsp+20h] [rbp-49h]
  int v26; // [rsp+28h] [rbp-41h]
  int v27; // [rsp+38h] [rbp-31h]
  __int64 v28[11]; // [rsp+68h] [rbp-1h] BYREF
  int v29; // [rsp+D0h] [rbp+67h] BYREF
  int v30; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v31; // [rsp+E0h] [rbp+77h] BYREF
  int v32; // [rsp+E8h] [rbp+7Fh]

  Feature_RIMUserCritOpt__private_ReportDeviceUsage();
  v2 = *(unsigned int *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = 2;
  if ( (unsigned int)v2 > 2 )
  {
    v29 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 506LL);
  }
  v5 = *(_QWORD **)(32 * (v2 + 4) + v3);
  v6 = *(_QWORD *)(a1 + 64) - *v5;
  if ( !v6 )
    v6 = *(_QWORD *)(a1 + 72) - v5[1];
  if ( v6 )
  {
    v29 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 508LL);
  }
  v7 = -1073741823;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v5) = 0;
  }
  if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_S(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v5,
      v4,
      (_DWORD)gRimLog,
      4,
      1,
      20,
      (__int64)&WPP_5233ecacf01533097438d072d8b1b1d6_Traceguids,
      *(_QWORD *)(a1 + 48));
  }
  InputTraceLogging::RIM::RimDeviceClassNotification(
    (const struct _GUID *)(a1 + 80),
    (const struct _UNICODE_STRING *)(a1 + 40));
  v10 = *(_QWORD *)(a1 + 80) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v10 )
    v10 = *(_QWORD *)(a1 + 88) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v10 )
  {
    v11 = *(_QWORD *)(v3 + 424);
    v28[0] = v11;
    if ( v11 )
    {
      v13 = (const UNICODE_STRING *)v11;
      v14 = v11;
      while ( 1 )
      {
        v15 = *(_DWORD *)(v14 + 184);
        if ( (v15 & 0x20) == 0 && (v15 & 0x2000) == 0 )
        {
          v16 = RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 40), v13 + 13, 0);
          v11 = v28[0];
          if ( v16 )
            break;
        }
        v11 = *(_QWORD *)(v11 + 40);
        v28[0] = v11;
        v14 = v11;
        v13 = (const UNICODE_STRING *)v11;
        if ( !v11 )
          goto LABEL_31;
      }
      if ( (*(_DWORD *)(v28[0] + 200) & 0x20) == 0 )
      {
LABEL_31:
        if ( v11 )
        {
          RIMLockExclusive(v3 + 760);
          v23 = v28[0];
          if ( (*(_DWORD *)(v28[0] + 184) & 0x400) == 0 )
          {
            v29 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 631LL);
            v23 = v28[0];
          }
          v24 = 0;
          if ( (*(_DWORD *)(v23 + 200) & 1) != 0 )
          {
            if ( *(_QWORD *)(v23 + 224) )
            {
              v29 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 647LL);
              v23 = v28[0];
            }
            if ( *(_QWORD *)(v23 + 232) )
            {
              v29 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 648LL);
              v23 = v28[0];
            }
            if ( (*(_DWORD *)(v23 + 184) & 0x80u) != 0 )
            {
              v29 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 649LL);
              LOBYTE(v23) = v28[0];
            }
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
              || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              LOBYTE(v21) = 0;
            }
            if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_q(
                WPP_GLOBAL_Control->AttachedDevice,
                v21,
                v22,
                (_DWORD)gRimLog,
                4,
                1,
                24,
                (__int64)&WPP_5233ecacf01533097438d072d8b1b1d6_Traceguids,
                v23);
            }
          }
          else
          {
            if ( *(_QWORD *)(v23 + 192) )
            {
              v29 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 641LL);
            }
            v24 = 1;
          }
          *(_QWORD *)(v3 + 768) = 0LL;
          ExReleasePushLockExclusiveEx(v3 + 760, 0LL);
          KeLeaveCriticalRegion();
          if ( v24 )
          {
            Feature_RIMUserCritOpt__private_ReportDeviceUsage();
            rimQueueRimDevChangeAsyncWorkItem(v3, v28[0], 3LL);
            RIMFreeDev(v3, v28[0]);
          }
          v28[0] = 0LL;
        }
        goto LABEL_17;
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v17) = 0;
      }
      if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = *(unsigned __int8 *)(v28[0] + 48);
        LOBYTE(v18) = v17;
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_Sdq(
          WPP_GLOBAL_Control->AttachedDevice,
          v18,
          v9,
          v17,
          v25,
          v26,
          21,
          v27,
          *(_QWORD *)(a1 + 48),
          *(_BYTE *)(v28[0] + 48),
          *(_QWORD *)(v28[0] + 248));
        v11 = v28[0];
      }
      if ( !*(_QWORD *)(v11 + 248)
        && (unsigned int)dword_1C02C93D8 > 5
        && (unsigned __int8)tlgKeywordOn(&dword_1C02C93D8, 0x400000000000LL) )
      {
        v29 = -__CFSHR__(*(_DWORD *)(v11 + 184), 26);
        v30 = -__CFSHR__(*(_DWORD *)(v11 + 184), 24);
        LODWORD(v31) = -__CFSHR__(*(_DWORD *)(v11 + 184), 21);
        v32 = -__CFSHR__(*(_DWORD *)(v11 + 184), 11);
        v28[1] = (unsigned int)RimDeviceTypeToRimInputType(v11, *(unsigned __int8 *)(v11 + 48));
        v28[2] = *(_QWORD *)(v19 + 216);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v20,
          &unk_1C0297C62);
        v11 = v28[0];
      }
      if ( *(_BYTE *)(v11 + 48) == 3 )
      {
        v29 = 0;
        v30 = 0;
        v31 = 0LL;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v8) = 0;
        }
        if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_S(
            WPP_GLOBAL_Control->AttachedDevice,
            v8,
            v9,
            (_DWORD)gRimLog,
            4,
            1,
            22,
            (__int64)&WPP_5233ecacf01533097438d072d8b1b1d6_Traceguids,
            *(_QWORD *)(a1 + 48));
          v11 = v28[0];
        }
        if ( (unsigned int)RIMFindInputDeviceForConfig(
                             *(_QWORD *)(v11 + 456),
                             v3,
                             v11,
                             (unsigned int)&v29,
                             (__int64)&v30,
                             (__int64)&v31)
          && v29 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v8) = 0;
          }
          if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_S(
              WPP_GLOBAL_Control->AttachedDevice,
              v8,
              v9,
              (_DWORD)gRimLog,
              4,
              1,
              23,
              (__int64)&WPP_5233ecacf01533097438d072d8b1b1d6_Traceguids,
              *(_QWORD *)(a1 + 48));
          }
        }
      }
    }
    else
    {
LABEL_17:
      v7 = RIMCreateDev(v3, v2, a1 + 40, 0, 0, 0LL, v28);
      if ( v7 >= 0 )
      {
        *(_DWORD *)(v28[0] + 184) |= 1u;
        v7 = RIMDoOnPnpNotification(v3, v28[0]);
      }
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v8) = 0;
  }
  if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v9,
      (_DWORD)gRimLog,
      4,
      1,
      25,
      (__int64)&WPP_5233ecacf01533097438d072d8b1b1d6_Traceguids,
      v7);
  }
  return (unsigned int)v7;
}
