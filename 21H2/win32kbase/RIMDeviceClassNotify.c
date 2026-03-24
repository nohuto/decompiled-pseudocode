/*
 * XREFs of RIMDeviceClassNotify @ 0x1C0052EC0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002E580 (W32GetThreadWin32Thread.c)
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C0047360 (WPP_RECORDER_SF_q.c)
 *     _tlgKeywordOn @ 0x1C004A640 (_tlgKeywordOn.c)
 *     rimDoRimDevChange @ 0x1C00523E4 (rimDoRimDevChange.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C0053D5C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ApiSetIsRemoteConnection @ 0x1C00540CC (ApiSetIsRemoteConnection.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0054218 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     DeviceTypeToRimInputType @ 0x1C0054500 (DeviceTypeToRimInputType.c)
 *     RIMCreateDev @ 0x1C0054530 (RIMCreateDev.c)
 *     WPP_RECORDER_SF_S @ 0x1C0054A8C (WPP_RECORDER_SF_S.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0055804 (RimDeviceTypeToRimInputType.c)
 *     RIMDoOnPnpNotification @ 0x1C00B39F8 (RIMDoOnPnpNotification.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0137184 (WPP_RECORDER_SF_qd.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C013A7B0 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     RIMFreeDev @ 0x1C014FCC0 (RIMFreeDev.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C01523A0 (WPP_RECORDER_SF_qqqD.c)
 *     RIMFindInputDeviceForConfig @ 0x1C01619E8 (RIMFindInputDeviceForConfig.c)
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x1C016C0C8 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PE.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@55555@Z @ 0x1C016C220 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@@-$_t.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C016C71C (RIMSignalOnPnpNotificationAndWait.c)
 *     WPP_RECORDER_SF_Sdq @ 0x1C016D628 (WPP_RECORDER_SF_Sdq.c)
 */

__int64 __fastcall RIMDeviceClassNotify(char *NotificationStructure, __int64 *Context)
{
  __int64 v2; // rbx
  int v3; // r13d
  __int64 v4; // r14
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  NTSTATUS v8; // r12d
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  int v12; // edi
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  const void *v16; // rbx
  const UNICODE_STRING *v18; // rax
  int v19; // r8d
  NTSTATUS v20; // eax
  int v21; // edx
  __int64 v22; // r8
  int v23; // r9d
  __int64 *v24; // rax
  void *v25; // rdx
  __int64 v26; // rax
  int v27; // edi
  unsigned int v28; // eax
  int v29; // r11d
  int v30; // r10d
  int v31; // r9d
  __int64 v32; // rcx
  int v33; // edx
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  int v37; // edx
  int v38; // edi
  int v39; // edx
  int v40; // [rsp+20h] [rbp-B9h]
  int v41; // [rsp+60h] [rbp-79h] BYREF
  int v42; // [rsp+64h] [rbp-75h]
  int v43; // [rsp+68h] [rbp-71h]
  __int64 v44; // [rsp+70h] [rbp-69h] BYREF
  int v45; // [rsp+78h] [rbp-61h]
  int v46; // [rsp+7Ch] [rbp-5Dh]
  int v47; // [rsp+80h] [rbp-59h]
  int v48; // [rsp+84h] [rbp-55h]
  int v49; // [rsp+88h] [rbp-51h]
  int v50; // [rsp+8Ch] [rbp-4Dh]
  _DWORD v51[2]; // [rsp+90h] [rbp-49h] BYREF
  __int64 v52; // [rsp+98h] [rbp-41h] BYREF
  _QWORD v53[3]; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v54; // [rsp+B8h] [rbp-21h] BYREF
  _BYTE v55[8]; // [rsp+C0h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C8h] [rbp-11h] BYREF

  v2 = *((unsigned int *)Context + 2);
  v3 = 0;
  v4 = *Context;
  v51[1] = v2;
  if ( (unsigned int)v2 > 2 )
  {
    v42 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1102LL);
  }
  v6 = *(_QWORD **)(32 * (v2 + 4) + v4);
  v7 = *(_QWORD *)(NotificationStructure + 20) - *v6;
  if ( !v7 )
    v7 = *(_QWORD *)(NotificationStructure + 28) - v6[1];
  if ( v7 )
  {
    v42 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1104LL);
  }
  v8 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_S(
      (_DWORD)gRimLog,
      (_DWORD)v6,
      1,
      46,
      (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
      *(_QWORD *)(*((_QWORD *)NotificationStructure + 5) + 8LL));
  }
  v9 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v9 )
    v9 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( v9 )
  {
    v26 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
    if ( !v26 )
      v26 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
    if ( !v26 && (unsigned int)dword_1C024BA90 > 4 && tlgKeywordOn((__int64)&dword_1C024BA90, 256LL) )
    {
      v53[0] = v22;
      v24 = v53;
      v25 = &unk_1C021BEC8;
      goto LABEL_54;
    }
  }
  else if ( (unsigned int)dword_1C024BA90 > 4 && tlgKeywordOn((__int64)&dword_1C024BA90, 256LL) )
  {
    v52 = v22;
    v24 = &v52;
    v25 = &unk_1C021BEFC;
LABEL_54:
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>>(
      (unsigned int)&dword_1C024BA90,
      (_DWORD)v25,
      v22,
      v23,
      (__int64)v24);
  }
  v10 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v10 )
    v10 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v10 )
  {
    v11 = 0LL;
    v12 = 0;
    v43 = 0;
    v42 = 0;
    if ( !*(_BYTE *)(v4 + 81) && ((unsigned int)DeviceTypeToRimInputType((unsigned int)v2) & *(_DWORD *)(v4 + 84)) != 0 )
    {
      ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v55, 1, 1);
      if ( (unsigned int)ApiSetIsRemoteConnection() )
        goto LABEL_30;
      v13 = v4 + 104;
      RIMLockExclusive(v4 + 104);
      if ( !*(_BYTE *)(v4 + 80) && !*(_BYTE *)(v4 + 81) )
      {
        v11 = *(_QWORD *)(v4 + 424);
        v44 = v11;
        if ( v11 )
        {
          v18 = (const UNICODE_STRING *)v11;
          while ( 1 )
          {
            v15 = *(unsigned int *)(v11 + 184);
            if ( (v15 & 0x20) == 0
              && (v15 & 0x2000) == 0
              && RtlEqualUnicodeString(*((PCUNICODE_STRING *)NotificationStructure + 5), v18 + 13, 0) )
            {
              break;
            }
            v18 = *(const UNICODE_STRING **)(v11 + 40);
            v44 = (__int64)v18;
            v11 = (__int64)v18;
            if ( !v18 )
              goto LABEL_22;
          }
          if ( (*(_DWORD *)(v11 + 200) & 0x20) != 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_Sdq(
                *(unsigned __int8 *)(v11 + 48),
                *((_QWORD *)NotificationStructure + 5),
                v19,
                47,
                v40,
                *(_QWORD *)(*((_QWORD *)NotificationStructure + 5) + 8LL),
                *(_BYTE *)(v11 + 48),
                *(_QWORD *)(v11 + 248));
            if ( !*(_QWORD *)(v11 + 248)
              && (unsigned int)dword_1C024A250 > 5
              && tlgKeywordOn((__int64)&dword_1C024A250, 0x400000000000LL) )
            {
              v27 = *(_DWORD *)(v11 + 184);
              v28 = RimDeviceTypeToRimInputType(v11, *(unsigned __int8 *)(v11 + 48));
              v46 = -__CFSHR__(v27, 22);
              v47 = v29;
              v48 = v30;
              v45 = -__CFSHR__(v27, 24);
              v50 = 0;
              v49 = v31;
              v53[1] = v28;
              v53[2] = *(_QWORD *)(v11 + 216);
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                v32,
                &unk_1C021BDF1);
              v13 = v4 + 104;
            }
            if ( *(_BYTE *)(v11 + 48) == 3 )
            {
              v41 = 0;
              v51[0] = 0;
              v54 = 0LL;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v14) = 4;
                WPP_RECORDER_SF_S(
                  (_DWORD)gRimLog,
                  v14,
                  1,
                  48,
                  (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
                  *(_QWORD *)(*((_QWORD *)NotificationStructure + 5) + 8LL));
              }
              if ( (unsigned int)RIMFindInputDeviceForConfig(
                                   *(_QWORD *)(v11 + 464),
                                   v4,
                                   v11,
                                   (unsigned int)&v41,
                                   (__int64)v51,
                                   (__int64)&v54)
                && v41
                && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v33) = 4;
                WPP_RECORDER_SF_S(
                  (_DWORD)gRimLog,
                  v33,
                  1,
                  49,
                  (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
                  *(_QWORD *)(*((_QWORD *)NotificationStructure + 5) + 8LL));
              }
            }
            goto LABEL_29;
          }
        }
LABEL_22:
        v16 = *(const void **)(v4 + 32);
        memset(&ApcState, 0, sizeof(ApcState));
        if ( v16 == (const void *)PsGetCurrentProcess(v15, v14) )
          goto LABEL_23;
        if ( *(_BYTE *)(v4 + 10) )
        {
          DbgPrintGDI(
            "RIMDeviceClassNotify: hRim:%p[P:%p,T:%p]dwInputType:%08x stack attach not allowed dropping Pnp Notification!",
            *(const void **)(v4 + 72),
            v16,
            *(const void **)(v4 + 40),
            *(_DWORD *)(v4 + 84));
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qqqD(
              v35,
              v34,
              v36,
              50,
              (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
              *(_QWORD *)(v4 + 72),
              *(_QWORD *)(v4 + 32),
              *(_QWORD *)(v4 + 40),
              *(_DWORD *)(v4 + 84));
        }
        else
        {
          v8 = PsAcquireProcessExitSynchronization(v16);
          if ( v8 < 0 )
          {
            v3 = 0;
            goto LABEL_29;
          }
          KeStackAttachProcess(*(PRKPROCESS *)(v4 + 32), &ApcState);
          LOBYTE(v3) = 1;
        }
        if ( v8 >= 0 )
        {
LABEL_23:
          if ( v11 )
          {
            RIMLockExclusive(v4 + 568);
            if ( (*(_DWORD *)(v11 + 184) & 0x400) == 0 )
            {
              v41 = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1285LL);
            }
            v38 = 0;
            if ( (*(_DWORD *)(v11 + 200) & 1) != 0 )
            {
              if ( *(_QWORD *)(v11 + 224) )
              {
                v41 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1314LL);
              }
              if ( *(_QWORD *)(v11 + 232) )
              {
                v41 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1315LL);
              }
              if ( (*(_DWORD *)(v11 + 184) & 0x80u) != 0 )
              {
                v41 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1316LL);
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v37) = 4;
                WPP_RECORDER_SF_q(
                  (_DWORD)gRimLog,
                  v37,
                  1,
                  51,
                  (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
                  v11);
              }
            }
            else
            {
              if ( (*(_DWORD *)(v11 + 188) & 1) != 0 )
              {
                v41 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1294LL);
              }
              if ( *(_QWORD *)(v11 + 192) )
              {
                v41 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1296LL);
              }
              if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
                v38 = 1;
              else
                *(_DWORD *)(v11 + 200) |= 2u;
              v11 = v44;
            }
            *(_QWORD *)(v4 + 576) = 0LL;
            ExReleasePushLockExclusiveEx(v4 + 568, 0LL);
            KeLeaveCriticalRegion();
            if ( v38 )
            {
              rimDoRimDevChange(v4, v11, 3u);
              RIMFreeDev(v4, v11);
            }
            v44 = 0LL;
            v13 = v4 + 104;
          }
          v8 = RIMCreateDev((PVOID)v4, 0, 0LL, (__int64)&v44);
          if ( (_BYTE)v3 )
          {
            KeUnstackDetachProcess(&ApcState);
            PsReleaseProcessExitSynchronization(*(_QWORD *)(v4 + 32));
          }
          if ( v8 >= 0 )
          {
            v11 = v44;
            if ( *(struct _KTHREAD **)(v4 + 40) == KeGetCurrentThread() )
            {
              *(_DWORD *)(v44 + 184) |= 1u;
              v8 = RIMDoOnPnpNotification(v4, v11);
            }
            else
            {
              v43 = 1;
            }
            if ( v8 >= 0 )
            {
              v3 = 1;
              v20 = ObReferenceObjectByPointer((PVOID)v4, 3u, ExRawInputManagerObjectType, 1);
              if ( v20 < 0 )
              {
                v3 = 0;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v21) = 4;
                  WPP_RECORDER_SF_qd(
                    (_DWORD)gRimLog,
                    v21,
                    1,
                    52,
                    (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
                    v4,
                    v20);
                }
              }
              v8 = ObReferenceObjectByPointer(*(PVOID *)(v11 + 32), 3u, ExRawInputManagerObjectType, 1);
              if ( v8 < 0 )
              {
                v41 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1436LL);
                v3 = 0;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v39) = 4;
                  WPP_RECORDER_SF_qd(
                    (_DWORD)gRimLog,
                    v39,
                    1,
                    53,
                    (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
                    v4,
                    v8);
                }
              }
              goto LABEL_29;
            }
          }
          else
          {
            v11 = v44;
          }
        }
        v3 = v42;
      }
LABEL_29:
      *(_QWORD *)(v13 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v13, 0LL);
      KeLeaveCriticalRegion();
      v12 = v43;
LABEL_30:
      ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v55);
      if ( v3 )
      {
        RIMLockExclusive(v4 + 104);
        if ( v12 )
        {
          if ( v8 < 0 )
          {
            v43 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1466LL);
          }
          if ( (*(_DWORD *)(v11 + 184) & 1) != 0 )
          {
            v43 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1467LL);
          }
          RIMSignalOnPnpNotificationAndWait(v4, v11, 1, 0, 0, 0);
        }
        *(_QWORD *)(v4 + 112) = 0LL;
        ExReleasePushLockExclusiveEx(v4 + 104, 0LL);
        KeLeaveCriticalRegion();
        ObfDereferenceObject(*(PVOID *)(v11 + 32));
        ObfDereferenceObject((PVOID)v4);
      }
    }
  }
  return 0LL;
}
