/*
 * XREFs of RIMOnPnpNotification @ 0x1C00549C0
 * Callers:
 *     NtRIMOnPnpNotification @ 0x1C00538C0 (NtRIMOnPnpNotification.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C00A2F70 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     ?OnPnpNotification@CBaseInput@@AEAAJXZ @ 0x1C01A3E50 (-OnPnpNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     rimOnPnpRemoveComplete @ 0x1C0052D38 (rimOnPnpRemoveComplete.c)
 *     rimDoRimDevChange @ 0x1C00533E4 (rimDoRimDevChange.c)
 *     rimDoScheduledUserModeRimPnpRegistration @ 0x1C0053530 (rimDoScheduledUserModeRimPnpRegistration.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C0054260 (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C0055178 (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00551A0 (RawInputManagerObjectResolveHandle.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0056804 (RimDeviceTypeToRimInputType.c)
 *     RIMStartDeviceSpecificRead @ 0x1C006AD98 (RIMStartDeviceSpecificRead.c)
 *     RIMDoOnPnpNotification @ 0x1C00B3D38 (RIMDoOnPnpNotification.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMFreeDev @ 0x1C014FBF0 (RIMFreeDev.c)
 *     WPP_RECORDER_SF_qqSd @ 0x1C01585C4 (WPP_RECORDER_SF_qqSd.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C016A5F4 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0174C5C (rimProcessAnyQueuedCompleteFrames.c)
 *     rimSignalReadComplete @ 0x1C0175E58 (rimSignalReadComplete.c)
 *     rimStackAttachAndProcessInput @ 0x1C01760E4 (rimStackAttachAndProcessInput.c)
 */

__int64 __fastcall RIMOnPnpNotification(__int64 a1)
{
  int v2; // r15d
  char *v3; // rbx
  char *v4; // r14
  __int64 i; // rdi
  __int64 v6; // r8
  __int64 j; // rdi
  int v8; // edx
  __int64 v9; // rdi
  __int64 m; // rdi
  __int64 v11; // rdi
  int v12; // edx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdi
  int v18; // eax
  __int64 k; // rdi
  int v20; // eax
  int v21; // eax
  NTSTATUS v22; // eax
  unsigned int v23; // eax
  int v24; // eax
  __int64 v25; // rcx
  int v26; // r8d
  unsigned int v27; // eax
  unsigned __int64 v28; // rax
  char v29; // al
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  int v34; // ecx
  struct _KTHREAD *v35; // rcx
  struct _KEVENT *v36; // rcx
  int ObjectType; // [rsp+20h] [rbp-78h]
  PVOID Object; // [rsp+50h] [rbp-48h] BYREF
  char *v39; // [rsp+58h] [rbp-40h]

  Object = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 54, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  v2 = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &Object);
  if ( v2 < 0 )
  {
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 356LL, a1, Object, 0LL, 0LL, 0LL, 0LL, 0);
  }
  else
  {
    v3 = (char *)Object;
    v4 = (char *)Object + 104;
    v39 = (char *)Object + 104;
    RIMLockExclusive((__int64)Object + 104);
    if ( !bRimDispositionNormal((struct RawInputManagerObject *)v3) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_((_DWORD)gRimLog, 3, 1, 58, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      KeBugCheckEx(0x164u, 0x111uLL, (ULONG_PTR)v3, 0LL, 0LL);
    }
    if ( v3[392] )
    {
      v3[392] = 0;
      *((_QWORD *)v4 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v4, 0LL);
      KeLeaveCriticalRegion();
      v2 = rimDoScheduledUserModeRimPnpRegistration(v3);
      RIMLockExclusive((__int64)v4);
    }
    if ( v3[393] )
    {
      v3[393] = 0;
      if ( *((_DWORD *)v3 + 216) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1693LL);
      for ( i = *((_QWORD *)v3 + 53); i; i = *(_QWORD *)(i + 40) )
      {
        v21 = *(_DWORD *)(i + 184);
        if ( (v21 & 0x2000) == 0 && (v21 & 0x400) == 0 )
        {
          *(_DWORD *)(i + 184) = v21 | 8;
          rimOnPnpRemoveComplete((char)v3, i);
        }
      }
    }
    RIMLockExclusive((__int64)(v3 + 568));
    for ( j = *((_QWORD *)v3 + 53); j; j = *(_QWORD *)(j + 40) )
    {
      v14 = *(_DWORD *)(j + 184);
      if ( (v14 & 0x2000) == 0 && *(_BYTE *)(j + 204) && (v14 & 0x80u) == 0 )
        RIMStartDeviceSpecificRead(v3, j, v6);
    }
    *((_QWORD *)v3 + 72) = 0LL;
    ExReleasePushLockExclusiveEx(v3 + 568, 0LL);
    KeLeaveCriticalRegion();
    v9 = *((_QWORD *)v3 + 53);
    if ( v9 )
    {
      do
      {
        if ( *((_QWORD *)v3 + 80) || *((_DWORD *)v3 + 216) )
        {
          v16 = *(_DWORD *)(v9 + 184);
          if ( (v16 & 0x2000) != 0 && (v16 & 0x20000) != 0 )
          {
            if ( *(_QWORD *)(v9 + 344) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1747LL);
            if ( *((_DWORD *)v3 + 216) )
              v22 = 0;
            else
              v22 = ObOpenObjectByPointer(
                      *(PVOID *)(v9 + 32),
                      0,
                      0LL,
                      3u,
                      ExRawInputManagerObjectType,
                      0,
                      (PHANDLE)(v9 + 344));
            if ( v22 < 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v8) = 3;
                WPP_RECORDER_SF_d(
                  (_DWORD)gRimLog,
                  v8,
                  1,
                  55,
                  (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids,
                  v22);
              }
            }
            else
            {
              rimDoRimDevChange((__int64)v3, v9, 2u);
              v23 = *(_DWORD *)(v9 + 184) & 0xFFFDFFFF;
              *(_DWORD *)(v9 + 184) = v23;
              if ( *((_DWORD *)v3 + 216) )
                v23 |= 0x400000u;
              v24 = v23 | 0x1000000;
              *(_DWORD *)(v9 + 184) = v24;
              if ( (v24 & 0x400) != 0 )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1785LL);
            }
          }
        }
        v9 = *(_QWORD *)(v9 + 40);
      }
      while ( v9 );
      v17 = *((_QWORD *)v3 + 53);
      v4 = v39;
      if ( v17 )
      {
        do
        {
          if ( *((_QWORD *)v3 + 80) || *((_DWORD *)v3 + 216) )
          {
            v18 = *(_DWORD *)(v17 + 184);
            if ( (v18 & 0x2000) != 0 && (v18 & 0x1000000) != 0 )
            {
              *(_DWORD *)(v17 + 184) = v18 & 0xFEFFFFFF;
              RIMLockExclusive((__int64)(v3 + 568));
              if ( (*(_DWORD *)(v17 + 184) & 0x400) != 0 )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1810LL);
              if ( (*(_DWORD *)(v17 + 200) & 0x80u) == 0 )
              {
                if ( v3[584] && *(_BYTE *)(v17 + 48) <= 1u )
                {
                  if ( (*(_DWORD *)(v17 + 184) & 0x2000) != 0 )
                    RIMTransferInjectionDeviceDataFifoToDataBuffer(v25, v17);
                  v3[584] = 0;
                  v26 = 504;
                  if ( *(_BYTE *)(v17 + 48) != 1 )
                    v26 = 476;
                  rimStackAttachAndProcessInput((_DWORD)v3, v17, v17 + v26, v17 + 256, 0);
                  rimSignalReadComplete((struct RawInputManagerObject *)v3, (struct RIMDEV *)v17);
                }
              }
              else
              {
                rimProcessAnyQueuedCompleteFrames((struct RawInputManagerObject *)v3);
              }
              *((_QWORD *)v3 + 72) = 0LL;
              ExReleasePushLockExclusiveEx(v3 + 568, 0LL);
              KeLeaveCriticalRegion();
            }
          }
          v17 = *(_QWORD *)(v17 + 40);
        }
        while ( v17 );
        for ( k = *((_QWORD *)v3 + 53); k; k = *(_QWORD *)(k + 40) )
        {
          if ( (*((_QWORD *)v3 + 80) || *((_DWORD *)v3 + 216)) && (*(_DWORD *)(k + 184) & 0x80000) != 0 )
          {
            rimDoRimDevChange((__int64)v3, k, 5u);
            *(_DWORD *)(k + 184) &= ~0x80000u;
          }
        }
      }
    }
LABEL_15:
    for ( m = *((_QWORD *)v3 + 53); m; m = *(_QWORD *)(m + 40) )
    {
      if ( *((_QWORD *)v3 + 80) || *((_DWORD *)v3 + 216) )
      {
        v15 = *(_DWORD *)(m + 184);
        if ( (v15 & 0x2000) != 0 && (v15 & 0x40000) != 0 )
        {
          if ( *(_QWORD *)(m + 344) || *((_DWORD *)v3 + 216) )
          {
            rimDoRimDevChange((__int64)v3, m, 3u);
            v27 = *(_DWORD *)(m + 184) & 0xFFFBFFFF;
            *(_DWORD *)(m + 184) = v27;
            if ( *((_DWORD *)v3 + 216) )
            {
              *(_DWORD *)(m + 184) = v27 | 0x800000;
              if ( *(_QWORD *)(m + 344) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1892LL);
            }
            else
            {
              NtClose(*(HANDLE *)(m + 344));
            }
            v28 = *(_QWORD *)(m + 32);
            *(_QWORD *)(m + 344) = 0LL;
            RIMFreeDev(v3, (v28 + 88) & ((unsigned __int128)-(__int128)v28 >> 64));
            goto LABEL_15;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_((_DWORD)gRimLog, 3, 1, 56, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
        }
      }
    }
    v11 = *((_QWORD *)v3 + 53);
    if ( v11 )
    {
      do
      {
        v20 = *(_DWORD *)(v11 + 184);
        if ( (v20 & 0x10) != 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v29 = RimDeviceTypeToRimInputType(v11, *(unsigned __int8 *)(v11 + 48));
            WPP_RECORDER_SF_qqSd(v31, v30, v32, v33, ObjectType, (char)v3, v11, *(_QWORD *)(v11 + 216), v29);
            v20 = *(_DWORD *)(v11 + 184);
          }
          LOWORD(v34) = v20;
          if ( (v20 & 0x20) != 0 && (v20 & 0x40) == 0 )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1930LL);
            v34 = *(_DWORD *)(v11 + 184);
          }
          if ( (v34 & 0x2000) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1931LL);
          v35 = *(struct _KTHREAD **)(v11 + 312);
          if ( !v35 || (v3 = (char *)Object, v35 == KeGetCurrentThread()) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1934LL);
          RIMDoOnPnpNotification(v3, v11);
          v36 = *(struct _KEVENT **)(v11 + 352);
          *(_DWORD *)(v11 + 184) &= ~0x10u;
          KeSetEvent(v36, 1, 0);
        }
        v11 = *(_QWORD *)(v11 + 40);
      }
      while ( v11 );
      v4 = v39;
    }
    RIMSignalAllPriorPnpWorkToCompleteWaiters((__int64)v3);
    *((_QWORD *)v4 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v4, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v3);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v12, 1, 59, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v2);
  }
  return (unsigned int)v2;
}
