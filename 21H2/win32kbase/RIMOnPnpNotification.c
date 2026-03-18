/*
 * XREFs of RIMOnPnpNotification @ 0x1C0042B50
 * Callers:
 *     ?OnPnpNotification@CBaseInput@@AEAAJXZ @ 0x1C0009AB0 (-OnPnpNotification@CBaseInput@@AEAAJXZ.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C0054C90 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     NtRIMOnPnpNotification @ 0x1C00BDAE0 (NtRIMOnPnpNotification.c)
 * Callees:
 *     rimSignalReadComplete @ 0x1C0003DB8 (rimSignalReadComplete.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C00042B8 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     rimStackAttachAndProcessInput @ 0x1C0004590 (rimStackAttachAndProcessInput.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003D298 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0043EC0 (RawInputManagerObjectResolveHandle.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C0049018 (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     rimOnPnpRemoveComplete @ 0x1C004A6A4 (rimOnPnpRemoveComplete.c)
 *     RIMStartDeviceSpecificRead @ 0x1C004AF3C (RIMStartDeviceSpecificRead.c)
 *     RIMDoOnPnpNotification @ 0x1C00A1E80 (RIMDoOnPnpNotification.c)
 *     rimDoRimDevChange @ 0x1C00A1F28 (rimDoRimDevChange.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00A2040 (RimDeviceTypeToRimInputType.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C00B736C (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     rimDoScheduledUserModeRimPnpRegistration @ 0x1C00D0660 (rimDoScheduledUserModeRimPnpRegistration.c)
 *     RIMFreeDev @ 0x1C017C8C0 (RIMFreeDev.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqSd @ 0x1C01867E8 (WPP_RECORDER_AND_TRACE_SF_qqSd.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C01A9638 (rimProcessAnyQueuedCompleteFrames.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMOnPnpNotification(__int64 a1)
{
  char v2; // dl
  unsigned int v3; // r15d
  char *v4; // rbx
  char *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // r8
  PDEVICE_OBJECT v8; // rcx
  __int64 i; // rdi
  int v10; // edx
  int v11; // r8d
  __int64 j; // rdi
  __int64 v13; // rdx
  __int64 Timer_high; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 m; // rdi
  __int64 v18; // rdi
  char *v19; // r14
  int v20; // edx
  int v21; // r8d
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdi
  int v27; // eax
  __int64 k; // rdi
  unsigned int v29; // eax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  PDEVICE_OBJECT v34; // rcx
  __int64 v35; // r8
  NTSTATUS v36; // eax
  int v37; // eax
  char v38; // dl
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  unsigned int v42; // eax
  unsigned __int64 v43; // rax
  char v44; // r11
  char v45; // al
  char v46; // r11
  int v47; // edx
  __int64 v48; // r10
  int v49; // r8d
  unsigned int v50; // eax
  __int64 v51; // rcx
  struct _KTHREAD *v52; // rcx
  struct _KEVENT *v53; // rcx
  char v54; // dl
  int ObjectType; // [rsp+20h] [rbp-78h]
  int AccessMode; // [rsp+28h] [rbp-70h]
  int Handle; // [rsp+30h] [rbp-68h]
  int v58; // [rsp+38h] [rbp-60h]
  int v59; // [rsp+A8h] [rbp+10h]
  char *v60; // [rsp+B0h] [rbp+18h]
  PVOID Object; // [rsp+B8h] [rbp+20h] BYREF

  Object = 0LL;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v2 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v2 = 0;
  }
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      56,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
  v59 = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &Object);
  v3 = v59;
  if ( v59 < 0 )
  {
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 356LL, a1, Object, 0LL, 0LL, 0LL, 0LL, 0);
  }
  else
  {
    v4 = (char *)Object;
    v5 = (char *)Object + 104;
    v60 = (char *)Object + 104;
    RIMLockExclusive((__int64)Object + 104);
    if ( !bRimDispositionNormal((struct RawInputManagerObject *)v4) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (v54 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        v54 = 0;
      }
      if ( v54 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v54,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (_DWORD)gRimLog,
          3,
          1,
          68,
          (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
      KeBugCheckEx(0x164u, 0x111uLL, (ULONG_PTR)v4, 0LL, 0LL);
    }
    if ( v4[392] )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v6) = 0;
      }
      if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v6,
          v7,
          (_DWORD)gRimLog,
          4,
          1,
          57,
          (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
          (char)v4);
      }
      v4[392] = 0;
      *((_QWORD *)v5 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v5, 0LL);
      KeLeaveCriticalRegion();
      v59 = rimDoScheduledUserModeRimPnpRegistration(v4);
      RIMLockExclusive((__int64)v5);
    }
    if ( v4[393] )
    {
      v8 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v6) = 0;
      }
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v6,
          v7,
          (_DWORD)gRimLog,
          4,
          1,
          58,
          (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
          (char)v4);
      v4[393] = 0;
      if ( *((_DWORD *)v4 + 272) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v6, v7);
      for ( i = *((_QWORD *)v4 + 53); i; i = *(_QWORD *)(i + 40) )
      {
        v37 = *(_DWORD *)(i + 184);
        if ( (v37 & 0x2000) == 0 && (v37 & 0x400) == 0 )
        {
          *(_DWORD *)(i + 184) = v37 | 8;
          rimOnPnpRemoveComplete(v4, i, v7);
        }
      }
    }
    RIMLockExclusive((__int64)(v4 + 792));
    for ( j = *((_QWORD *)v4 + 53); j; j = *(_QWORD *)(j + 40) )
    {
      v24 = *(_DWORD *)(j + 184);
      if ( (v24 & 0x2000) == 0 && *(_BYTE *)(j + 204) && (v24 & 0x80u) == 0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v10) = 0;
        }
        if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qq(
            WPP_GLOBAL_Control->AttachedDevice,
            v10,
            v11,
            (_DWORD)gRimLog,
            4,
            1,
            59,
            (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
            (char)v4,
            j);
        }
        RIMStartDeviceSpecificRead(v4, j);
      }
    }
    *((_QWORD *)v4 + 100) = 0LL;
    ExReleasePushLockExclusiveEx(v4 + 792, 0LL);
    KeLeaveCriticalRegion();
    v16 = *((_QWORD *)v4 + 53);
    if ( v16 )
    {
      do
      {
        if ( *((_QWORD *)v4 + 108) || *((_DWORD *)v4 + 272) )
        {
          v25 = *(_DWORD *)(v16 + 184);
          if ( (v25 & 0x2000) != 0 && (v25 & 0x80000) != 0 )
          {
            if ( *(_QWORD *)(v16 + 344) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(Timer_high, v13, v15);
            if ( *((_DWORD *)v4 + 272)
              || (v36 = ObOpenObjectByPointer(
                          *(PVOID *)(v16 + 32),
                          0,
                          0LL,
                          3u,
                          ExRawInputManagerObjectType,
                          0,
                          (PHANDLE)(v16 + 344)),
                  v36 >= 0) )
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
              {
                LOBYTE(v13) = 0;
              }
              if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_qq(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v13,
                  v15,
                  (_DWORD)gRimLog,
                  4,
                  1,
                  60,
                  (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
                  (char)v4,
                  v16);
              }
              rimDoRimDevChange(v4, v16, 2LL);
              v29 = *(_DWORD *)(v16 + 184) & 0xFFF7FFFF;
              *(_DWORD *)(v16 + 184) = v29;
              if ( *((_DWORD *)v4 + 272) )
                v29 |= 0x1000000u;
              v30 = v29 | 0x4000000;
              *(_DWORD *)(v16 + 184) = v30;
              if ( (v30 & 0x400) != 0 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(Timer_high, v13, v15);
            }
            else
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (Timer_high = HIDWORD(WPP_GLOBAL_Control->Timer), (Timer_high & 1) == 0)
                || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
              {
                LOBYTE(v13) = 0;
              }
              LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_AND_TRACE_SF_D(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v13,
                  v15,
                  (_DWORD)gRimLog,
                  3,
                  1,
                  61,
                  (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
                  v36);
            }
          }
        }
        v16 = *(_QWORD *)(v16 + 40);
      }
      while ( v16 );
      v26 = *((_QWORD *)v4 + 53);
      if ( v26 )
      {
        do
        {
          if ( *((_QWORD *)v4 + 108) || *((_DWORD *)v4 + 272) )
          {
            v27 = *(_DWORD *)(v26 + 184);
            if ( (v27 & 0x2000) != 0 && (v27 & 0x4000000) != 0 )
            {
              *(_DWORD *)(v26 + 184) = v27 & 0xFBFFFFFF;
              RIMLockExclusive((__int64)(v4 + 792));
              if ( (*(_DWORD *)(v26 + 184) & 0x400) != 0 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v33);
              v34 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (LOBYTE(v31) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
              {
                LOBYTE(v31) = 0;
              }
              LOBYTE(v33) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( (_BYTE)v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_AND_TRACE_SF_qq(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v31,
                  v33,
                  (_DWORD)gRimLog,
                  4,
                  1,
                  62,
                  (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
                  (char)v4,
                  v26);
              if ( (*(_DWORD *)(v26 + 200) & 0x80u) != 0 )
              {
                rimProcessAnyQueuedCompleteFrames((struct RawInputManagerObject *)v4);
              }
              else if ( v4[808] && *(_BYTE *)(v26 + 48) <= 1u )
              {
                if ( (*(_DWORD *)(v26 + 184) & 0x2000) != 0 )
                  RIMTransferInjectionDeviceDataFifoToDataBuffer((__int64)v34, v26, v33);
                v4[808] = 0;
                v35 = 496LL;
                if ( *(_BYTE *)(v26 + 48) != 1 )
                  v35 = 468LL;
                rimStackAttachAndProcessInput((__int64)v4, v26, v26 + v35, v26 + 256, 0);
                rimSignalReadComplete((struct RawInputManagerObject *)v4, (LARGE_INTEGER *)v26);
              }
              *((_QWORD *)v4 + 100) = 0LL;
              ExReleasePushLockExclusiveEx(v4 + 792, 0LL);
              KeLeaveCriticalRegion();
            }
          }
          v26 = *(_QWORD *)(v26 + 40);
        }
        while ( v26 );
        for ( k = *((_QWORD *)v4 + 53); k; k = *(_QWORD *)(k + 40) )
        {
          if ( (*((_QWORD *)v4 + 108) || *((_DWORD *)v4 + 272)) && (*(_DWORD *)(k + 184) & 0x200000) != 0 )
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
              || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              LOBYTE(v13) = 0;
            }
            if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_qq(
                WPP_GLOBAL_Control->AttachedDevice,
                v13,
                v15,
                (_DWORD)gRimLog,
                4,
                1,
                63,
                (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
                (char)v4,
                k);
            }
            rimDoRimDevChange(v4, k, 5LL);
            *(_DWORD *)(k + 184) &= ~0x200000u;
          }
        }
      }
    }
LABEL_23:
    for ( m = *((_QWORD *)v4 + 53); m; m = *(_QWORD *)(m + 40) )
    {
      if ( *((_QWORD *)v4 + 108) || *((_DWORD *)v4 + 272) )
      {
        v23 = *(_DWORD *)(m + 184);
        if ( (v23 & 0x2000) != 0 && (v23 & 0x100000) != 0 )
        {
          if ( *(_QWORD *)(m + 344) || *((_DWORD *)v4 + 272) )
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
              || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              LOBYTE(v13) = 0;
            }
            if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_qq(
                WPP_GLOBAL_Control->AttachedDevice,
                v13,
                v15,
                (_DWORD)gRimLog,
                4,
                1,
                64,
                (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
                (char)v4,
                m);
            }
            rimDoRimDevChange(v4, m, 3LL);
            v42 = *(_DWORD *)(m + 184) & 0xFFEFFFFF;
            *(_DWORD *)(m + 184) = v42;
            if ( *((_DWORD *)v4 + 272) )
            {
              *(_DWORD *)(m + 184) = v42 | 0x2000000;
              if ( *(_QWORD *)(m + 344) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41);
            }
            else
            {
              NtClose(*(HANDLE *)(m + 344));
            }
            v43 = *(_QWORD *)(m + 32);
            *(_QWORD *)(m + 344) = 0LL;
            RIMFreeDev(v4, (v43 + 88) & ((unsigned __int128)-(__int128)v43 >> 64));
            goto LABEL_23;
          }
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (v38 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
          {
            v38 = 0;
          }
          if ( v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v38,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              (_DWORD)gRimLog,
              3,
              1,
              65,
              (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
        }
      }
    }
    v18 = *((_QWORD *)v4 + 53);
    v19 = v60;
    v3 = v59;
    if ( v18 )
    {
      do
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v13) = 0;
        }
        if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qq(
            WPP_GLOBAL_Control->AttachedDevice,
            v13,
            v15,
            (_DWORD)gRimLog,
            4,
            1,
            66,
            (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
            (char)v4,
            v18);
        }
        if ( (*(_DWORD *)(v18 + 184) & 0x10) != 0 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (v44 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v44 = 0;
          }
          LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v44 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v45 = RimDeviceTypeToRimInputType(v18, *(unsigned __int8 *)(v18 + 48), v15);
            LOBYTE(v47) = v46;
            WPP_RECORDER_AND_TRACE_SF_qqSd(
              *(_QWORD *)(v48 + 24),
              v47,
              v49,
              (_DWORD)gRimLog,
              ObjectType,
              AccessMode,
              Handle,
              v58,
              (char)v4,
              v18,
              *(_QWORD *)(v18 + 216),
              v45);
          }
          v50 = *(_DWORD *)(v18 + 184);
          v51 = v50;
          if ( (v50 & 0x20) != 0 && (v50 & 0x40) == 0 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v13, v15);
            v51 = *(unsigned int *)(v18 + 184);
          }
          if ( (v51 & 0x2000) != 0 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v51, v13, v15);
          v52 = *(struct _KTHREAD **)(v18 + 312);
          if ( !v52 || (v4 = (char *)Object, v52 == KeGetCurrentThread()) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v52, v13, v15);
          RIMDoOnPnpNotification(v4, v18, v15);
          v53 = *(struct _KEVENT **)(v18 + 352);
          *(_DWORD *)(v18 + 184) &= ~0x10u;
          KeSetEvent(v53, 1, 0);
        }
        v18 = *(_QWORD *)(v18 + 40);
      }
      while ( v18 );
      v19 = v60;
      v3 = v59;
    }
    RIMSignalAllPriorPnpWorkToCompleteWaiters(v4);
    *((_QWORD *)v19 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v19, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v4);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v20) = 0;
  }
  if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v20,
      v21,
      (_DWORD)gRimLog,
      4,
      1,
      69,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
      v3);
  }
  return v3;
}
