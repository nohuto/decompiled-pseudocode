/*
 * XREFs of PipSetDevNodeState @ 0x1402028D0
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1403B1D8C (PnpRemoveLockedDeviceNode.c)
 *     PnpProcessAssignResources @ 0x140681528 (PnpProcessAssignResources.c)
 *     PipProcessStartPhase2 @ 0x1406817A0 (PipProcessStartPhase2.c)
 *     PipProcessStartPhase3 @ 0x14068203C (PipProcessStartPhase3.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140685424 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipEnumerateCompleted @ 0x140685510 (PipEnumerateCompleted.c)
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 *     PipEnumerateDevice @ 0x140688710 (PipEnumerateDevice.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1406C3364 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PipCallDriverAddDevice @ 0x1406C644C (PipCallDriverAddDevice.c)
 *     PnpStartDeviceNode @ 0x1406F71A4 (PnpStartDeviceNode.c)
 *     PiProcessNewDeviceNodeAsync @ 0x140793334 (PiProcessNewDeviceNodeAsync.c)
 *     IopLegacyResourceAllocation @ 0x140801DA4 (IopLegacyResourceAllocation.c)
 *     IoReportDetectedDevice @ 0x140802A80 (IoReportDetectedDevice.c)
 *     IopInitializeDeviceInstanceKey @ 0x14081CE14 (IopInitializeDeviceInstanceKey.c)
 *     PnpDriverLoadingFailed @ 0x14085EEA4 (PnpDriverLoadingFailed.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140861CA0 (PnpRequestDeviceRemovalWorker.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14087E214 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpRestartDeviceNode @ 0x140955D4C (PnpRestartDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x1409561C8 (PnpQueryRemoveLockedDeviceNode.c)
 *     PiInitializeDevice @ 0x14096AB74 (PiInitializeDevice.c)
 *     PnpQueryStopDeviceNode @ 0x14096B8B8 (PnpQueryStopDeviceNode.c)
 *     PnpStopDeviceSubtree @ 0x14096BD20 (PnpStopDeviceSubtree.c)
 *     PipProcessRestartPhase2 @ 0x14096C498 (PipProcessRestartPhase2.c)
 *     IopInitializePlugPlayServices @ 0x140B599CC (IopInitializePlugPlayServices.c)
 * Callees:
 *     PipAreDriversLoadedWorker @ 0x1402455E4 (PipAreDriversLoadedWorker.c)
 *     PipIsDevNodeDNStarted @ 0x140245658 (PipIsDevNodeDNStarted.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     PnpRemoveDeviceActionRequests @ 0x1403D0950 (PnpRemoveDeviceActionRequests.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140687320 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PpDevCfgTraceDeviceStart @ 0x140877368 (PpDevCfgTraceDeviceStart.c)
 */

__int64 __fastcall PipSetDevNodeState(__int64 a1, int a2)
{
  int v4; // r15d
  int IsDevNodeDNStarted; // esi
  char v6; // r14
  KIRQL v7; // al
  __int64 v8; // r8
  unsigned int v9; // r10d
  unsigned __int64 v10; // rdi
  int v11; // r10d
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 result; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v22; // zf

  v4 = 0;
  IsDevNodeDNStarted = 0;
  v6 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v9 = *(_DWORD *)(a1 + 300);
  v10 = v7;
  if ( v9 != a2 )
  {
    v4 = PipAreDriversLoadedWorker(v9, *(unsigned int *)(a1 + 304), v8, *(_QWORD *)(a1 + 888));
    IsDevNodeDNStarted = PipIsDevNodeDNStarted(a1);
    *(_DWORD *)(a1 + 300) = a2;
    *(_DWORD *)(a1 + 304) = v11;
    v6 = 1;
    v12 = *(unsigned int *)(a1 + 388);
    *(_QWORD *)(a1 + 888) = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(a1 + 896) = v13;
    *(_DWORD *)(a1 + 4 * v12 + 308) = v11;
    *(_DWORD *)(a1 + 388) = (*(_DWORD *)(a1 + 388) + 1) % 0x14u;
  }
  result = KxReleaseSpinLock(&PnpSpinLock);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v10 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
      v22 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      v15 = (unsigned int)result & SchedulerAssist[5];
      SchedulerAssist[5] = v15;
      if ( v22 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v10);
  if ( v6 )
  {
    v16 = *(_QWORD *)(a1 + 48);
    if ( v16
      && ((unsigned int)PipAreDriversLoadedWorker(*(unsigned int *)(a1 + 300), *(unsigned int *)(a1 + 304), v15, v16) != v4
       || (unsigned int)PipIsDevNodeDNStarted(a1) != IsDevNodeDNStarted) )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v17, v18, 11LL);
      if ( (unsigned int)PipIsDevNodeDNStarted(a1) != IsDevNodeDNStarted )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v19, *(_QWORD *)(a1 + 48), 26LL);
    }
    result = *(unsigned int *)(a1 + 704);
    if ( (result & 1) != 0 )
      result = PpDevCfgTraceDeviceStart(a1);
  }
  if ( a2 == 790 )
    return PnpRemoveDeviceActionRequests(*(_QWORD *)(a1 + 32));
  return result;
}
