void __fastcall CcGetDeviceGuidAsync(__int64 *P)
{
  __int64 v2; // rcx
  int DeviceGuid; // eax
  __int64 v4; // rdi
  void *v5; // r14
  int v6; // ebx
  unsigned __int64 OldIrql; // rbx
  __int64 v8; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  char v14[8]; // [rsp+20h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-38h] BYREF
  __int128 v16; // [rsp+40h] [rbp-20h]

  v2 = P[1];
  v14[0] = 0;
  v16 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  DeviceGuid = CcGetDeviceGuid(v2);
  v4 = *P;
  v5 = (void *)P[1];
  v6 = DeviceGuid;
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  if ( v6 >= 0 )
  {
    v8 = *(_QWORD *)(v4 + 224) - *(_QWORD *)&NullGuid.Data1;
    if ( !v8 )
      v8 = *(_QWORD *)(v4 + 232) - *(_QWORD *)NullGuid.Data4;
    if ( !v8 )
      *(_OWORD *)(v4 + 224) = v16;
  }
  CcDecrementVolumeUseCountWithDelete((_DWORD *)v4, 1, v14);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v13 = (v12 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  if ( v14[0] )
    ExFreePoolWithTag((PVOID)v4, 0x6D566343u);
  ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  ExFreePoolWithTag(P, 0x65546343u);
}
