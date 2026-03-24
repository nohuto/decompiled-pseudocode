/*
 * XREFs of RIMVirtDeviceClassNotify @ 0x1C016CA24
 * Callers:
 *     ?ivHandlePnpCreatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B8BB0 (-ivHandlePnpCreatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002E580 (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C0047360 (WPP_RECORDER_SF_q.c)
 *     rimDoRimDevChange @ 0x1C00523E4 (rimDoRimDevChange.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C0053D5C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0054218 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     DeviceTypeToRimInputType @ 0x1C0054500 (DeviceTypeToRimInputType.c)
 *     WPP_RECORDER_SF_S @ 0x1C0054A8C (WPP_RECORDER_SF_S.c)
 *     RIMDoOnPnpNotification @ 0x1C00B39F8 (RIMDoOnPnpNotification.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0137184 (WPP_RECORDER_SF_qd.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C013A7B0 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     RIMFreeDev @ 0x1C014FCC0 (RIMFreeDev.c)
 *     RIMVirtCreateDev @ 0x1C014FD68 (RIMVirtCreateDev.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C01523A0 (WPP_RECORDER_SF_qqqD.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C016C71C (RIMSignalOnPnpNotificationAndWait.c)
 *     WPP_RECORDER_SF_Sdq @ 0x1C016D628 (WPP_RECORDER_SF_Sdq.c)
 */

__int64 __fastcall RIMVirtDeviceClassNotify(char *Object, __int64 a2)
{
  int v2; // r14d
  __int64 v3; // r15
  int Dev; // esi
  int v6; // edx
  __int64 v7; // rbx
  int v8; // r12d
  const UNICODE_STRING *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r12
  int v12; // edx
  int v13; // r8d
  const void *v14; // r14
  int v15; // eax
  int v16; // r14d
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // edx
  NTSTATUS v21; // eax
  int v22; // eax
  int v24; // [rsp+20h] [rbp-69h]
  __int64 v25; // [rsp+30h] [rbp-59h]
  char v26; // [rsp+54h] [rbp-35h]
  int v27; // [rsp+58h] [rbp-31h]
  __int64 v28; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v29[8]; // [rsp+68h] [rbp-21h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-19h] BYREF

  v2 = *(_DWORD *)(a2 + 16);
  v3 = a2;
  Dev = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 67, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_S(
        (_DWORD)gRimLog,
        v6,
        1,
        68,
        (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
        *(_QWORD *)(v3 + 8));
    }
  }
  v7 = 0LL;
  v8 = 0;
  v27 = 0;
  if ( !Object[81] && ((unsigned int)DeviceTypeToRimInputType(v2) & *((_DWORD *)Object + 21)) != 0 )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v29, 1, 1u);
    RIMLockExclusive((__int64)(Object + 104));
    if ( Object[80] || Object[81] )
    {
LABEL_65:
      *((_QWORD *)Object + 14) = 0LL;
      ExReleasePushLockExclusiveEx(Object + 104, 0LL);
      KeLeaveCriticalRegion();
      ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v29);
      if ( v27 )
      {
        RIMLockExclusive((__int64)(Object + 104));
        v22 = *(_DWORD *)(v7 + 184) | 0x40000000;
        *(_DWORD *)(v7 + 184) = v22;
        if ( v8 )
        {
          if ( Dev < 0 )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2286);
            v22 = *(_DWORD *)(v7 + 184);
          }
          if ( (v22 & 1) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2287);
          RIMSignalOnPnpNotificationAndWait((__int64)Object, v7, 1, 0, 0, 0);
        }
        *((_QWORD *)Object + 14) = 0LL;
        ExReleasePushLockExclusiveEx(Object + 104, 0LL);
        KeLeaveCriticalRegion();
        ObfDereferenceObject(*(PVOID *)(v7 + 32));
        ObfDereferenceObject(Object);
      }
      return 0LL;
    }
    v7 = *((_QWORD *)Object + 53);
    v28 = v7;
    v11 = v7;
    if ( v7 )
    {
      v9 = (const UNICODE_STRING *)v7;
      while ( !RtlEqualUnicodeString((PCUNICODE_STRING)v3, v9 + 13, 0) )
      {
        v7 = *(_QWORD *)(v7 + 40);
        v28 = v7;
        v11 = v7;
        v9 = (const UNICODE_STRING *)v7;
        if ( !v7 )
          goto LABEL_12;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Sdq(
          *(unsigned __int8 *)(v7 + 48),
          v12,
          v13,
          69,
          v24,
          *(_QWORD *)(v3 + 8),
          *(_BYTE *)(v7 + 48),
          *(_QWORD *)(v7 + 248));
      *(_DWORD *)(v7 + 184) |= 0x40000000u;
      goto LABEL_19;
    }
LABEL_12:
    v26 = 0;
    v14 = (const void *)*((_QWORD *)Object + 4);
    memset(&ApcState, 0, sizeof(ApcState));
    if ( v14 == (const void *)PsGetCurrentProcess(v10, v9) )
    {
      v16 = 0;
    }
    else
    {
      if ( Object[10] )
      {
        DbgPrintGDI(
          "RIMVirtDeviceClassNotify: hRim:%p[P:%p,T:%p]dwInputType:%08x stack attach not allowed dropping Pnp Notification!",
          *((const void **)Object + 9),
          v14,
          *((const void **)Object + 5),
          *((_DWORD *)Object + 21));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqqD(
            v18,
            v17,
            v19,
            0x46u,
            (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
            *((_QWORD *)Object + 9),
            *((_QWORD *)Object + 4),
            *((_QWORD *)Object + 5),
            *((_DWORD *)Object + 21));
        v16 = 0;
      }
      else
      {
        v15 = PsAcquireProcessExitSynchronization(v14);
        v16 = 0;
        Dev = v15;
        if ( v15 < 0 )
        {
LABEL_19:
          v8 = 0;
          goto LABEL_65;
        }
        KeStackAttachProcess(*((PRKPROCESS *)Object + 4), &ApcState);
        v26 = 1;
      }
      if ( Dev < 0 )
        goto LABEL_64;
    }
    if ( v11 )
    {
      RIMLockExclusive((__int64)(Object + 568));
      if ( (*(_DWORD *)(v7 + 184) & 0x400) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2108);
      if ( (*(_DWORD *)(v7 + 200) & 1) != 0 )
      {
        if ( *(_QWORD *)(v7 + 224) )
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2137);
        if ( *(_QWORD *)(v7 + 232) )
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2138);
        if ( (*(_DWORD *)(v7 + 184) & 0x80u) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2139);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v20) = 4;
          WPP_RECORDER_SF_q((_DWORD)gRimLog, v20, 1, 71, (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids, v7);
        }
      }
      else
      {
        if ( (*(_DWORD *)(v7 + 188) & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2117);
        if ( *(_QWORD *)(v7 + 192) )
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2119);
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
          v16 = 1;
        else
          *(_DWORD *)(v7 + 200) |= 2u;
        v7 = v28;
      }
      *((_QWORD *)Object + 72) = 0LL;
      ExReleasePushLockExclusiveEx(Object + 568, 0LL);
      KeLeaveCriticalRegion();
      if ( v16 )
      {
        rimDoRimDevChange((__int64)Object, v7, 3u);
        RIMFreeDev((__int64)Object, v7);
      }
      v28 = 0LL;
    }
    Dev = RIMVirtCreateDev(
            (CDeviceIdentity **)Object,
            *(_DWORD *)(v3 + 16),
            v3,
            *(_DWORD *)(v3 + 20),
            v3,
            (struct _UNICODE_STRING **)&v28);
    if ( v26 )
    {
      KeUnstackDetachProcess(&ApcState);
      PsReleaseProcessExitSynchronization(*((_QWORD *)Object + 4));
    }
    if ( Dev >= 0 && !*(_DWORD *)(v3 + 20) )
    {
      v7 = v28;
      if ( *((struct _KTHREAD **)Object + 5) == KeGetCurrentThread() )
      {
        *(_DWORD *)(v28 + 184) |= 1u;
        v8 = 0;
        Dev = RIMDoOnPnpNotification(Object, v7);
      }
      else
      {
        v8 = 1;
      }
      if ( Dev >= 0 )
      {
        v27 = 1;
        v21 = ObReferenceObjectByPointer(Object, 3u, ExRawInputManagerObjectType, 1);
        if ( v21 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v25) = v21;
          WPP_RECORDER_SF_qd(
            (__int64)gRimLog,
            4u,
            1u,
            0x48u,
            (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
            Object,
            v25);
        }
        Dev = ObReferenceObjectByPointer(*(PVOID *)(v7 + 32), 3u, ExRawInputManagerObjectType, 1);
        if ( Dev < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v25) = Dev;
          WPP_RECORDER_SF_qd(
            (__int64)gRimLog,
            4u,
            1u,
            0x49u,
            (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
            Object,
            v25);
        }
      }
      goto LABEL_65;
    }
    v7 = v28;
LABEL_64:
    v8 = 0;
    goto LABEL_65;
  }
  return 0LL;
}
