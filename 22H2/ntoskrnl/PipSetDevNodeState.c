/*
 * XREFs of PipSetDevNodeState @ 0x14036EEA8
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x140370078 (PnpRemoveLockedDeviceNode.c)
 *     PnpRestartDeviceNode @ 0x140731B88 (PnpRestartDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x14073454C (PnpQueryRemoveLockedDeviceNode.c)
 *     PipProcessStartPhase2 @ 0x14073A19C (PipProcessStartPhase2.c)
 *     PnpStartDeviceNode @ 0x14073A3A4 (PnpStartDeviceNode.c)
 *     PnpProcessAssignResources @ 0x14073CA2C (PnpProcessAssignResources.c)
 *     PipCallDriverAddDevice @ 0x14073DE28 (PipCallDriverAddDevice.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14073E9B8 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PiProcessNewDeviceNode @ 0x140740930 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x140741820 (PipEnumerateCompleted.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140742F90 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipEnumerateDevice @ 0x1407432C8 (PipEnumerateDevice.c)
 *     PipProcessStartPhase3 @ 0x140747010 (PipProcessStartPhase3.c)
 *     PnpRequestDeviceRemovalWorker @ 0x14074A8A0 (PnpRequestDeviceRemovalWorker.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14074C7F0 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x14074E544 (IopInitializeDeviceInstanceKey.c)
 *     IopLegacyResourceAllocation @ 0x140752C64 (IopLegacyResourceAllocation.c)
 *     IoReportDetectedDevice @ 0x1407AED50 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x1407D2B70 (PnpDriverLoadingFailed.c)
 *     PiInitializeDevice @ 0x1408B3CBC (PiInitializeDevice.c)
 *     PipProcessRestartPhase2 @ 0x1408B5380 (PipProcessRestartPhase2.c)
 *     PnpQueryStopDeviceNode @ 0x1408B8764 (PnpQueryStopDeviceNode.c)
 *     PnpStopDeviceSubtree @ 0x1408B8B38 (PnpStopDeviceSubtree.c)
 *     IopInitializePlugPlayServices @ 0x140A52280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D89E0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PipIsDevNodeDNStarted @ 0x14032E358 (PipIsDevNodeDNStarted.c)
 *     PipAreDriversLoadedWorker @ 0x14032E3A8 (PipAreDriversLoadedWorker.c)
 *     PnpRemoveDeviceActionRequests @ 0x140380A94 (PnpRemoveDeviceActionRequests.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1407424E0 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PipSetDevNodeState(__int64 a1, int a2)
{
  BOOL v4; // r15d
  int v5; // esi
  char v6; // r14
  KIRQL v7; // al
  int v8; // r8d
  unsigned __int64 v9; // rdi
  BOOL IsDevNodeDNStarted; // eax
  __int64 v11; // rcx
  int v12; // r8d
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v19; // zf

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v8 = *(_DWORD *)(a1 + 300);
  v9 = v7;
  if ( v8 != a2 )
  {
    v4 = PipAreDriversLoadedWorker(v8, *(_DWORD *)(a1 + 304));
    IsDevNodeDNStarted = PipIsDevNodeDNStarted(a1);
    v11 = *(unsigned int *)(a1 + 388);
    v5 = IsDevNodeDNStarted;
    *(_DWORD *)(a1 + 304) = v12;
    *(_DWORD *)(a1 + 300) = a2;
    v6 = 1;
    *(_DWORD *)(a1 + 4 * v11 + 308) = v12;
    *(_DWORD *)(a1 + 388) = (*(_DWORD *)(a1 + 388) + 1) % 0x14u;
  }
  KxReleaseSpinLock(&PnpSpinLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v19 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v19 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  if ( v6 )
  {
    if ( *(_QWORD *)(a1 + 48) )
    {
      if ( PipAreDriversLoadedWorker(*(_DWORD *)(a1 + 300), *(_DWORD *)(a1 + 304)) != v4
        || (result = PipIsDevNodeDNStarted(a1), (_DWORD)result != v5) )
      {
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v14, v15, 11LL);
        result = PipIsDevNodeDNStarted(a1);
        if ( (_DWORD)result != v5 )
          result = PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v16, *(_QWORD *)(a1 + 48), 26LL);
      }
    }
  }
  if ( a2 == 788 )
    return PnpRemoveDeviceActionRequests(*(_QWORD *)(a1 + 32));
  return result;
}
