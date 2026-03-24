/*
 * XREFs of RIMSignalOnPnpNotificationAndWait @ 0x1C016C71C
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C0052EC0 (RIMDeviceClassNotify.c)
 *     RIMDeviceNotify @ 0x1C016C3E0 (RIMDeviceNotify.c)
 *     RIMVirtDeviceClassNotify @ 0x1C016CA24 (RIMVirtDeviceClassNotify.c)
 *     rimDoVirtRimDevChange @ 0x1C016D964 (rimDoVirtRimDevChange.c)
 *     ?ivHandlePnpSyncPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01B8DA0 (-ivHandlePnpSyncPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_qq @ 0x1C004B460 (WPP_RECORDER_SF_qq.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C006A730 (RawInputManagerDeviceObjectReference.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMWaitForPriorPnpWorkToComplete @ 0x1C016D0D8 (RIMWaitForPriorPnpWorkToComplete.c)
 */

__int64 __fastcall RIMSignalOnPnpNotificationAndWait(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  int v10; // ebp
  int v11; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  int v13; // edx
  int v14; // edx

  v10 = RawInputManagerDeviceObjectReference(*(void **)(a2 + 32));
  if ( v10 >= 0 )
  {
    RIMWaitForPriorPnpWorkToComplete(a1, a2);
    if ( !*(_BYTE *)(a1 + 80) && !*(_BYTE *)(a1 + 81) )
    {
      if ( __CFSHR__(*(_DWORD *)(a2 + 184), 5) || *(_QWORD *)(a2 + 312) || (v11 = *(_DWORD *)(a1 + 884), (v11 & 1) != 0) )
      {
        DbgkWerCaptureLiveKernelDump(
          L"win32kbase.sys",
          356LL,
          -__CFSHR__(*(_DWORD *)(a2 + 184), 5),
          *(_QWORD *)(a2 + 312),
          -(*(_DWORD *)(a1 + 884) & 1),
          0LL,
          0LL,
          0LL,
          0);
        v11 = *(_DWORD *)(a1 + 884);
      }
      *(_DWORD *)(a1 + 884) = v11 | 1;
      *(_DWORD *)(a2 + 184) = *(_DWORD *)(a2 + 184) & 0xFFFFFFF0 | (a6 != 0 ? 8 : 0) | (a5 != 0 ? 4 : 0) | (a4 != 0 ? 2 : 0) | (a3 != 0) | 0x10;
      *(_QWORD *)(a2 + 312) = KeGetCurrentThread();
      RIMLockExclusive((__int64)&gWatchDogQPCLock);
      *(_DWORD *)(a2 + 368) = 1;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      *(LARGE_INTEGER *)(a2 + 360) = PerformanceCounter;
      *(LARGE_INTEGER *)(a1 + 728) = PerformanceCounter;
      *(_DWORD *)(a1 + 720) = 1;
      qword_1C02554C8 = 0LL;
      ExReleasePushLockExclusiveEx(&gWatchDogQPCLock, 0LL);
      KeLeaveCriticalRegion();
      ZwSetEvent(*(HANDLE *)(a1 + 384), 0LL);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 4;
        WPP_RECORDER_SF_qq(
          (_DWORD)gRimLog,
          v13,
          1,
          44,
          (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
          a1,
          a2);
      }
      *(_QWORD *)(a1 + 112) = 0LL;
      ExReleasePushLockExclusiveEx(a1 + 104, 0LL);
      KeLeaveCriticalRegion();
      KeWaitForSingleObject(*(PVOID *)(a2 + 352), WrUserRequest, 0, 0, 0LL);
      RIMLockExclusive(a1 + 104);
      *(_QWORD *)(a2 + 312) = 0LL;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 4;
        WPP_RECORDER_SF_qq(
          (_DWORD)gRimLog,
          v14,
          1,
          45,
          (__int64)&WPP_a75f261dfb463415346bb11edf387329_Traceguids,
          a1,
          a2);
      }
      *(_DWORD *)(a1 + 884) &= ~1u;
      RIMLockExclusive((__int64)&gWatchDogQPCLock);
      *(_DWORD *)(a2 + 368) = 0;
      *(_QWORD *)(a2 + 360) = 0LL;
      *(_QWORD *)(a1 + 728) = 0LL;
      qword_1C02554C8 = 0LL;
      ExReleasePushLockExclusiveEx(&gWatchDogQPCLock, 0LL);
      KeLeaveCriticalRegion();
    }
    ObfDereferenceObject(*(PVOID *)(a2 + 32));
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1000);
  }
  return (unsigned int)v10;
}
