/*
 * XREFs of IoGetAttachedDeviceReference @ 0x140337BB0
 * Callers:
 *     WmipForwardWmiIrp @ 0x14069CE70 (WmipForwardWmiIrp.c)
 *     IopFilterResourceRequirementsCall @ 0x1406F6A4C (IopFilterResourceRequirementsCall.c)
 *     CmpVolumeManagerGetContextForFile @ 0x14072B8A0 (CmpVolumeManagerGetContextForFile.c)
 *     CmpGetVolumeClusterSize @ 0x14072EFBC (CmpGetVolumeClusterSize.c)
 *     WmipGetFilePDO @ 0x14077437C (WmipGetFilePDO.c)
 *     WmipRegisterDevice @ 0x140869828 (WmipRegisterDevice.c)
 *     HalpQueryPccInterface @ 0x140932B30 (HalpQueryPccInterface.c)
 *     IoShutdownSystem @ 0x140A96AB4 (IoShutdownSystem.c)
 *     IoBuildPoDeviceNotifyList @ 0x140A9B078 (IoBuildPoDeviceNotifyList.c)
 *     VfIrpSendSynchronousIrp @ 0x140ACAAA8 (VfIrpSendSynchronousIrp.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14033B510 (KxWaitForLockOwnerShip.c)
 *     ObpIncrPointerCount @ 0x14033BAEC (ObpIncrPointerCount.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140457B8E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
 */

PDEVICE_OBJECT __stdcall IoGetAttachedDeviceReference(PDEVICE_OBJECT DeviceObject)
{
  unsigned __int8 CurrentIrql; // di
  char *v3; // rcx
  struct _DEVICE_OBJECT *i; // rax
  _DWORD *SchedulerAssist; // r8
  __int64 v7; // r9
  unsigned __int8 v8; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v7) = 4;
    else
      v7 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v7;
  }
  v3 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v3, *((_QWORD *)v3 + 1));
  }
  else if ( _InterlockedExchange64(*((volatile __int64 **)v3 + 1), (__int64)v3) )
  {
    KxWaitForLockOwnerShip(v3);
  }
  for ( i = DeviceObject->AttachedDevice; i; i = i->AttachedDevice )
    DeviceObject = i;
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)DeviceObject - 48);
  ObpIncrPointerCount(&DeviceObject[-1].DeviceLock.Header.WaitListHead);
  KxReleaseQueuedSpinLock((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
  if ( KiIrqlFlags )
  {
    v8 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v10 = CurrentPrcb->SchedulerAssist;
      v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v12 = (v11 & v10[5]) == 0;
      v10[5] &= v11;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return DeviceObject;
}
