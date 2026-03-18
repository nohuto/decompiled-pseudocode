/*
 * XREFs of RIMDeviceClassNotifyAsyncWorkItem @ 0x1C00757A4
 * Callers:
 *     RIMDoAsyncPnpWorkItem @ 0x1C00756D4 (RIMDoAsyncPnpWorkItem.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C0005B28 (RimDeviceTypeToRimInputType.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C007327C (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00742F0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     rimQueueRimDevChangeAsyncWorkItem @ 0x1C0076D60 (rimQueueRimDevChangeAsyncWorkItem.c)
 *     ?RimDeviceClassNotification@RIM@InputTraceLogging@@SAXAEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x1C00B5ECC (-RimDeviceClassNotification@RIM@InputTraceLogging@@SAXAEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     RIMCreateDev @ 0x1C00C874C (RIMCreateDev.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFreeDev @ 0x1C0170F70 (RIMFreeDev.c)
 *     RIMFindInputDeviceForConfig @ 0x1C0180DC8 (RIMFindInputDeviceForConfig.c)
 *     RIMDoOnPnpNotification @ 0x1C0199BF8 (RIMDoOnPnpNotification.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@55555@Z @ 0x1C01A1C20 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@@-$_t.c)
 *     WPP_RECORDER_AND_TRACE_SF_Sdq @ 0x1C01A33A4 (WPP_RECORDER_AND_TRACE_SF_Sdq.c)
 */

__int64 __fastcall RIMDeviceClassNotifyAsyncWorkItem(__int64 a1)
{
  __int64 v1; // r15
  _QWORD *v2; // rdi
  _QWORD *v4; // rcx
  int v5; // r14d
  char v6; // dl
  __int64 v7; // r10
  const UNICODE_STRING *v8; // rdx
  __int64 v9; // rax
  int v10; // ecx
  BOOLEAN v11; // al
  int v12; // r8d
  int v13; // r9d
  int v14; // edx
  __int64 v15; // r10
  __int64 v16; // rcx
  char v17; // dl
  char v18; // dl
  int v19; // edx
  int v20; // r8d
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // r8
  char v24; // dl
  int v26; // [rsp+20h] [rbp-49h]
  int v27; // [rsp+28h] [rbp-41h]
  int v28; // [rsp+38h] [rbp-31h]
  int *v29; // [rsp+40h] [rbp-29h]
  __int64 v30[11]; // [rsp+68h] [rbp-1h] BYREF
  int v31; // [rsp+D0h] [rbp+67h] BYREF
  int v32; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v33; // [rsp+E0h] [rbp+77h] BYREF
  int v34; // [rsp+E8h] [rbp+7Fh] BYREF

  v1 = *(unsigned int *)(a1 + 32);
  v2 = *(_QWORD **)(a1 + 24);
  if ( (unsigned int)v1 > 2 )
  {
    v31 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 454LL);
  }
  v4 = (_QWORD *)v2[4 * v1 + 16];
  if ( *(_QWORD *)(a1 + 64) != *v4 || *(_QWORD *)(a1 + 72) != v4[1] )
  {
    v31 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 456LL);
  }
  v5 = -1073741823;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v6 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v6 = 0;
  }
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_S(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v6,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x12u,
      (__int64)&WPP_9c6b916090ed33d376f6c4650ea2e314_Traceguids,
      *(const wchar_t **)(a1 + 48));
  InputTraceLogging::RIM::RimDeviceClassNotification(
    (const struct _GUID *)(a1 + 80),
    (const struct _UNICODE_STRING *)(a1 + 40));
  if ( *(_QWORD *)(a1 + 80) == *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1
    && *(_QWORD *)(a1 + 88) == *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4 )
  {
    v7 = v2[53];
    v30[0] = v7;
    if ( v7 )
    {
      v8 = (const UNICODE_STRING *)v7;
      v9 = v7;
      while ( 1 )
      {
        v10 = *(_DWORD *)(v9 + 184);
        if ( (v10 & 0x20) == 0 && (v10 & 0x2000) == 0 )
        {
          v11 = RtlEqualUnicodeString((PCUNICODE_STRING)(a1 + 40), v8 + 13, 0);
          v7 = v30[0];
          if ( v11 )
            break;
        }
        v7 = *(_QWORD *)(v7 + 40);
        v30[0] = v7;
        v9 = v7;
        v8 = (const UNICODE_STRING *)v7;
        if ( !v7 )
          goto LABEL_74;
      }
      if ( (*(_DWORD *)(v30[0] + 200) & 0x20) != 0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v13) = 0;
        }
        if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v14 = *(unsigned __int8 *)(v30[0] + 48);
          LOBYTE(v14) = v13;
          LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_Sdq(
            WPP_GLOBAL_Control->AttachedDevice,
            v14,
            v12,
            v13,
            v26,
            v27,
            19,
            v28,
            *(_QWORD *)(a1 + 48),
            *(_BYTE *)(v30[0] + 48),
            *(_QWORD *)(v30[0] + 248));
          v7 = v30[0];
        }
        if ( !*(_QWORD *)(v7 + 248)
          && (unsigned int)dword_1C02883D8 > 5
          && tlgKeywordOn((__int64)&dword_1C02883D8, 0x400000000000LL) )
        {
          v31 = -__CFSHR__(*(_DWORD *)(v7 + 184), 26);
          v32 = -__CFSHR__(*(_DWORD *)(v7 + 184), 24);
          LODWORD(v33) = -__CFSHR__(*(_DWORD *)(v7 + 184), 21);
          v34 = -__CFSHR__(*(_DWORD *)(v7 + 184), 11);
          v30[1] = (unsigned int)RimDeviceTypeToRimInputType(v7, *(unsigned __int8 *)(v7 + 48));
          v30[2] = *(_QWORD *)(v15 + 216);
          v29 = &v34;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v16,
            &unk_1C025955C);
          v7 = v30[0];
        }
        if ( *(_BYTE *)(v7 + 48) == 3 )
        {
          v31 = 0;
          v32 = 0;
          v33 = 0LL;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (v17 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v17 = 0;
          }
          if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_AND_TRACE_SF_S(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v17,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              (__int64)gRimLog,
              4u,
              1u,
              0x14u,
              (__int64)&WPP_9c6b916090ed33d376f6c4650ea2e314_Traceguids,
              *(const wchar_t **)(a1 + 48));
            v7 = v30[0];
          }
          if ( (unsigned int)RIMFindInputDeviceForConfig(
                               *(_QWORD *)(v7 + 456),
                               (_DWORD)v2,
                               v7,
                               (unsigned int)&v31,
                               (__int64)&v32,
                               (__int64)&v33)
            && v31 )
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
              || (v18 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              v18 = 0;
            }
            if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_S(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                v18,
                WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                (__int64)gRimLog,
                4u,
                1u,
                0x15u,
                (__int64)&WPP_9c6b916090ed33d376f6c4650ea2e314_Traceguids,
                *(const wchar_t **)(a1 + 48));
          }
        }
        goto LABEL_76;
      }
      if ( v30[0] )
      {
        RIMLockExclusive((__int64)(v2 + 95));
        v21 = v30[0];
        if ( (*(_DWORD *)(v30[0] + 184) & 0x400) == 0 )
        {
          v31 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 579LL);
          v21 = v30[0];
        }
        v22 = 0;
        if ( (*(_DWORD *)(v21 + 200) & 1) != 0 )
        {
          if ( *(_QWORD *)(v21 + 224) )
          {
            v31 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 595LL);
            v21 = v30[0];
          }
          if ( *(_QWORD *)(v21 + 232) )
          {
            v31 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 596LL);
            v21 = v30[0];
          }
          if ( (*(_DWORD *)(v21 + 184) & 0x80u) != 0 )
          {
            v31 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 597LL);
            LOBYTE(v21) = v30[0];
          }
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v19) = 0;
          }
          if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_q(
              WPP_GLOBAL_Control->AttachedDevice,
              v19,
              v20,
              (_DWORD)gRimLog,
              4,
              1,
              22,
              (__int64)&WPP_9c6b916090ed33d376f6c4650ea2e314_Traceguids,
              v21);
          }
        }
        else
        {
          if ( *(_QWORD *)(v21 + 192) )
          {
            v31 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 589LL);
          }
          v22 = 1;
        }
        CInpPushLock::UnLockExclusive((CInpPushLock *)(v2 + 95));
        if ( v22 )
        {
          rimQueueRimDevChangeAsyncWorkItem(v2, v30[0], 3LL);
          RIMFreeDev(v2, v30[0]);
        }
        v30[0] = 0LL;
      }
    }
LABEL_74:
    v5 = RIMCreateDev(v2, 0, 0LL, (__int64)v30);
    if ( v5 >= 0 )
    {
      *(_DWORD *)(v30[0] + 184) |= 1u;
      v5 = RIMDoOnPnpNotification(v2, v30[0], v23);
    }
  }
LABEL_76:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v24 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v24 = 0;
  }
  if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v29) = v5;
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v24,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x17u,
      (__int64)&WPP_9c6b916090ed33d376f6c4650ea2e314_Traceguids,
      v29);
  }
  return (unsigned int)v5;
}
