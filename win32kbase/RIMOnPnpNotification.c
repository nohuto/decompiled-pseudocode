__int64 __fastcall RIMOnPnpNotification(__int64 a1)
{
  char v2; // dl
  unsigned int v3; // r15d
  char *v4; // rbx
  char *v5; // r14
  int v6; // edx
  __int64 v7; // r8
  __int64 i; // rdi
  char *v9; // rbp
  int v10; // edx
  int v11; // r8d
  __int64 j; // rdi
  int v13; // edx
  int v14; // r8d
  __int64 v15; // rdi
  __int64 k; // rdi
  __int64 m; // rdi
  __int64 n; // rdi
  __int64 v19; // rdi
  char *v20; // r14
  int v21; // edx
  int v22; // r8d
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  unsigned int v28; // eax
  int v29; // eax
  int v30; // edx
  int v31; // r8d
  PDEVICE_OBJECT v32; // rcx
  __int64 v33; // r8
  NTSTATUS v34; // eax
  int v35; // eax
  char v36; // dl
  unsigned int v37; // eax
  unsigned __int64 v38; // rax
  char v39; // r11
  char v40; // al
  char v41; // r11
  int v42; // edx
  __int64 v43; // r10
  int v44; // r8d
  int v45; // eax
  struct _KTHREAD *v46; // rcx
  struct _KEVENT *v47; // rcx
  char v48; // dl
  int ObjectType; // [rsp+20h] [rbp-98h]
  int AccessMode; // [rsp+28h] [rbp-90h]
  int Handle; // [rsp+30h] [rbp-88h]
  int v52; // [rsp+38h] [rbp-80h]
  char *v53; // [rsp+68h] [rbp-50h]
  PVOID Object[9]; // [rsp+70h] [rbp-48h] BYREF
  int v55; // [rsp+C8h] [rbp+10h]

  Object[0] = 0LL;
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
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
  v55 = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, Object);
  v3 = v55;
  if ( v55 < 0 )
  {
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 356LL, a1, Object[0], 0LL, 0LL, 0LL, 0LL, 0);
  }
  else
  {
    v4 = (char *)Object[0];
    v5 = (char *)Object[0] + 104;
    v53 = (char *)Object[0] + 104;
    RIMLockExclusive((char *)Object[0] + 104);
    if ( v4[81] || v4[82] )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (v48 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        v48 = 0;
      }
      if ( v48 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v48,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (_DWORD)gRimLog,
          3,
          1,
          68,
          (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
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
          (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
          (char)v4);
      }
      v4[392] = 0;
      *((_QWORD *)v5 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v5, 0LL);
      KeLeaveCriticalRegion();
      v55 = rimDoScheduledUserModeRimPnpRegistration(v4);
      RIMLockExclusive(v5);
    }
    if ( v4[393] )
    {
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
          (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
          (char)v4);
      v4[393] = 0;
      if ( *((_DWORD *)v4 + 264) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1762LL);
      for ( i = *((_QWORD *)v4 + 53); i; i = *(_QWORD *)(i + 40) )
      {
        v35 = *(_DWORD *)(i + 184);
        if ( (v35 & 0x2000) == 0 && (v35 & 0x400) == 0 )
        {
          *(_DWORD *)(i + 184) = v35 | 8;
          rimOnPnpRemoveComplete((char)v4, i, v7);
        }
      }
    }
    v9 = v4 + 760;
    RIMLockExclusive(v4 + 760);
    for ( j = *((_QWORD *)v4 + 53); j; j = *(_QWORD *)(j + 40) )
    {
      v25 = *(_DWORD *)(j + 184);
      if ( (v25 & 0x2000) == 0 && *(_BYTE *)(j + 204) && (v25 & 0x80u) == 0 )
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
            (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
            (char)v4,
            j);
        }
        RIMStartDeviceSpecificRead(v4, j);
      }
    }
    *((_QWORD *)v4 + 96) = 0LL;
    ExReleasePushLockExclusiveEx(v4 + 760, 0LL);
    KeLeaveCriticalRegion();
    v15 = *((_QWORD *)v4 + 53);
    if ( v15 )
    {
      do
      {
        if ( *((_QWORD *)v4 + 104) || *((_DWORD *)v4 + 264) )
        {
          v26 = *(_DWORD *)(v15 + 184);
          if ( (v26 & 0x2000) != 0 && (v26 & 0x80000) != 0 )
          {
            if ( *(_QWORD *)(v15 + 344) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1817LL);
            if ( *((_DWORD *)v4 + 264)
              || (v34 = ObOpenObjectByPointer(
                          *(PVOID *)(v15 + 32),
                          0,
                          0LL,
                          3u,
                          ExRawInputManagerObjectType,
                          0,
                          (PHANDLE)(v15 + 344)),
                  v34 >= 0) )
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
              {
                LOBYTE(v13) = 0;
              }
              if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_qq(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v13,
                  v14,
                  (_DWORD)gRimLog,
                  4,
                  1,
                  60,
                  (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
                  (char)v4,
                  v15);
              }
              rimDoRimDevChange(v4, v15, 2LL);
              v28 = *(_DWORD *)(v15 + 184) & 0xFFF7FFFF;
              *(_DWORD *)(v15 + 184) = v28;
              if ( *((_DWORD *)v4 + 264) )
                v28 |= 0x1000000u;
              v29 = v28 | 0x4000000;
              *(_DWORD *)(v15 + 184) = v29;
              if ( (v29 & 0x400) != 0 )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1856LL);
            }
            else
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
              {
                LOBYTE(v13) = 0;
              }
              if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_d(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v13,
                  v14,
                  (_DWORD)gRimLog,
                  3,
                  1,
                  61,
                  (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
                  v34);
              }
            }
          }
        }
        v15 = *(_QWORD *)(v15 + 40);
      }
      while ( v15 );
      v9 = v4 + 760;
    }
    for ( k = *((_QWORD *)v4 + 53); k; k = *(_QWORD *)(k + 40) )
    {
      if ( *((_QWORD *)v4 + 104) || *((_DWORD *)v4 + 264) )
      {
        v27 = *(_DWORD *)(k + 184);
        if ( (v27 & 0x2000) != 0 && (v27 & 0x4000000) != 0 )
        {
          *(_DWORD *)(k + 184) = v27 & 0xFBFFFFFF;
          RIMLockExclusive(v9);
          if ( (*(_DWORD *)(k + 184) & 0x400) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1881LL);
          v32 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v30) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v30) = 0;
          }
          if ( (_BYTE)v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v31) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_qq(
              WPP_GLOBAL_Control->AttachedDevice,
              v30,
              v31,
              (_DWORD)gRimLog,
              4,
              1,
              62,
              (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
              (char)v4,
              k);
          }
          if ( (*(_DWORD *)(k + 200) & 0x80u) != 0 )
          {
            rimProcessAnyQueuedCompleteFrames((struct RawInputManagerObject *)v4);
          }
          else if ( v4[776] && *(_BYTE *)(k + 48) <= 1u )
          {
            if ( (*(_DWORD *)(k + 184) & 0x2000) != 0 )
              RIMTransferInjectionDeviceDataFifoToDataBuffer((__int64)v32, k);
            v4[776] = 0;
            v33 = 496LL;
            if ( *(_BYTE *)(k + 48) != 1 )
              v33 = 468LL;
            rimStackAttachAndProcessInput((__int64)v4, k, k + v33, k + 256, 0);
            rimSignalReadComplete((struct RawInputManagerObject *)v4, (LARGE_INTEGER *)k);
          }
          *((_QWORD *)v9 + 1) = 0LL;
          ExReleasePushLockExclusiveEx(v9, 0LL);
          KeLeaveCriticalRegion();
        }
      }
    }
    for ( m = *((_QWORD *)v4 + 53); m; m = *(_QWORD *)(m + 40) )
    {
      if ( (*((_QWORD *)v4 + 104) || *((_DWORD *)v4 + 264)) && (*(_DWORD *)(m + 184) & 0x200000) != 0 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v13) = 0;
        }
        if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qq(
            WPP_GLOBAL_Control->AttachedDevice,
            v13,
            v14,
            (_DWORD)gRimLog,
            4,
            1,
            63,
            (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
            (char)v4,
            m);
        }
        rimDoRimDevChange(v4, m, 5LL);
        *(_DWORD *)(m + 184) &= ~0x200000u;
      }
    }
LABEL_26:
    for ( n = *((_QWORD *)v4 + 53); n; n = *(_QWORD *)(n + 40) )
    {
      if ( *((_QWORD *)v4 + 104) || *((_DWORD *)v4 + 264) )
      {
        v24 = *(_DWORD *)(n + 184);
        if ( (v24 & 0x2000) != 0 && (v24 & 0x100000) != 0 )
        {
          if ( *(_QWORD *)(n + 344) || *((_DWORD *)v4 + 264) )
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
              || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              LOBYTE(v13) = 0;
            }
            if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_qq(
                WPP_GLOBAL_Control->AttachedDevice,
                v13,
                v14,
                (_DWORD)gRimLog,
                4,
                1,
                64,
                (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
                (char)v4,
                n);
            }
            rimDoRimDevChange(v4, n, 3LL);
            v37 = *(_DWORD *)(n + 184) & 0xFFEFFFFF;
            *(_DWORD *)(n + 184) = v37;
            if ( *((_DWORD *)v4 + 264) )
            {
              *(_DWORD *)(n + 184) = v37 | 0x2000000;
              if ( *(_QWORD *)(n + 344) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1967LL);
            }
            else
            {
              NtClose(*(HANDLE *)(n + 344));
            }
            v38 = *(_QWORD *)(n + 32);
            *(_QWORD *)(n + 344) = 0LL;
            RIMFreeDev(v4, (v38 + 72) & ((unsigned __int128)-(__int128)v38 >> 64));
            goto LABEL_26;
          }
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (v36 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
          {
            v36 = 0;
          }
          if ( v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v36,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              (_DWORD)gRimLog,
              3,
              1,
              65,
              (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
        }
      }
    }
    v19 = *((_QWORD *)v4 + 53);
    v20 = v53;
    v3 = v55;
    if ( v19 )
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
          LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qq(
            WPP_GLOBAL_Control->AttachedDevice,
            v13,
            v14,
            (_DWORD)gRimLog,
            4,
            1,
            66,
            (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
            (char)v4,
            v19);
        }
        if ( (*(_DWORD *)(v19 + 184) & 0x10) != 0 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (v39 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v39 = 0;
          }
          if ( v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v40 = RimDeviceTypeToRimInputType(v19, *(unsigned __int8 *)(v19 + 48));
            LOBYTE(v42) = v41;
            WPP_RECORDER_AND_TRACE_SF_qqSd(
              *(_QWORD *)(v43 + 24),
              v42,
              v44,
              (_DWORD)gRimLog,
              ObjectType,
              AccessMode,
              Handle,
              v52,
              (char)v4,
              v19,
              *(_QWORD *)(v19 + 216),
              v40);
          }
          v45 = *(_DWORD *)(v19 + 184);
          if ( (v45 & 0x20) != 0 && (v45 & 0x40) == 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2007LL);
          if ( (*(_DWORD *)(v19 + 184) & 0x2000) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2008LL);
          v46 = *(struct _KTHREAD **)(v19 + 312);
          if ( !v46 || (v4 = (char *)Object[0], v46 == KeGetCurrentThread()) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2011LL);
          RIMDoOnPnpNotification(v4, v19);
          v47 = *(struct _KEVENT **)(v19 + 352);
          *(_DWORD *)(v19 + 184) &= ~0x10u;
          KeSetEvent(v47, 1, 0);
        }
        v19 = *(_QWORD *)(v19 + 40);
      }
      while ( v19 );
      v20 = v53;
      v3 = v55;
    }
    RIMSignalAllPriorPnpWorkToCompleteWaiters((__int64)v4);
    *((_QWORD *)v20 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v20, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v4);
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
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v21,
      v22,
      (_DWORD)gRimLog,
      4,
      1,
      69,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
      v3);
  }
  return v3;
}
