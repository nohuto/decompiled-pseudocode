/*
 * XREFs of QueuePowerRequest @ 0x1C007C340
 * Callers:
 *     UserPowerInfoCallout @ 0x1C007AEB8 (UserPowerInfoCallout.c)
 *     UserPowerStateCallout @ 0x1C007BFDC (UserPowerStateCallout.c)
 *     W32CalloutDispatch @ 0x1C00E4D10 (W32CalloutDispatch.c)
 *     ?PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C0146C48 (-PowerDisplayBurst@@YAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 * Callees:
 *     EtwTraceCompletePowerRequest @ 0x1C007C790 (EtwTraceCompletePowerRequest.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C007D260 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     McTemplateK0xdx_EtwWriteTransfer @ 0x1C0151ABC (McTemplateK0xdx_EtwWriteTransfer.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall QueuePowerRequest(_OWORD *a1, char a2)
{
  PVOID v2; // rsi
  NTSTATUS v3; // edi
  __int64 Pool2; // rbx
  __int64 v7; // rax
  void *v8; // rcx
  int v9; // r8d
  struct _LIST_ENTRY *Flink; // rax
  __int64 v12; // rax
  PVOID BackTrace[20]; // [rsp+30h] [rbp-A8h] BYREF

  v2 = gpLeakTrackingAllocator;
  v3 = 0;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6F707355) != 0x6F707355
    || (v12 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(68LL, 80LL);
LABEL_3:
    if ( !Pool2 )
      return 3221225495LL;
    goto LABEL_4;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v12) != 1869640533 )
  {
    if ( ++v12 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_2;
  }
  Pool2 = ExAllocatePool2(68LL, 96LL);
  if ( !Pool2 )
    return 3221225495LL;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             v2,
                             Pool2,
                             BackTrace) )
      goto LABEL_33;
    Pool2 += 16LL;
    goto LABEL_3;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v2,
                           Pool2,
                           BackTrace) )
  {
LABEL_33:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return 3221225495LL;
  }
LABEL_4:
  if ( a1 )
  {
    v7 = Pool2 + 40;
    *(_OWORD *)(Pool2 + 40) = *a1;
  }
  else
  {
    v7 = 0LL;
  }
  *(_QWORD *)(Pool2 + 64) = v7;
  if ( a2 )
    KeInitializeEvent((PRKEVENT)(Pool2 + 16), SynchronizationEvent, 0);
  v8 = gpPowerRequestMutex;
  *(_BYTE *)(Pool2 + 72) = a2;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(v8);
  if ( gbPowerCalloutsReady )
  {
    if ( a1 )
    {
      if ( ((*(_DWORD *)a1 - 4) & 0xFFFFFFF3) == 0 && *(_DWORD *)a1 != 8 && ++gPowerOnRequestCount == 1 )
        ArmPowerWatchdog(gpRequestQueueWatchdog, 16LL);
    }
    if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
      McTemplateK0xdx_EtwWriteTransfer(
        *(_QWORD *)(Pool2 + 48),
        *(_DWORD *)(Pool2 + 40),
        v9,
        Pool2,
        *(_DWORD *)(Pool2 + 40),
        *(_QWORD *)(Pool2 + 48));
    Flink = gPowerRequestList.Flink;
    if ( gPowerRequestList.Flink->Blink != &gPowerRequestList )
      __fastfail(3u);
    *(_QWORD *)Pool2 = gPowerRequestList.Flink;
    *(_QWORD *)(Pool2 + 8) = &gPowerRequestList;
    Flink->Blink = (struct _LIST_ENTRY *)Pool2;
    gPowerRequestList.Flink = (struct _LIST_ENTRY *)Pool2;
  }
  else
  {
    v3 = -2143420409;
  }
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpPowerRequestMutex);
  if ( v3 >= 0 )
  {
    KeSetEvent(gpEventPowerRequest, 1, 0);
    if ( !a2 )
      return 0LL;
    v3 = KeWaitForSingleObject((PVOID)(Pool2 + 16), WrUserRequest, 0, 0, 0LL);
    if ( v3 >= 0 )
      v3 = *(_DWORD *)(Pool2 + 56);
  }
  EtwTraceCompletePowerRequest(Pool2, *(unsigned int *)(Pool2 + 56));
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    (void *)Pool2);
  return (unsigned int)v3;
}
