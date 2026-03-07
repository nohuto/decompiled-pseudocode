__int64 __fastcall CcInitializeVolumeCacheMap(_QWORD *Object, __int64 **a2)
{
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 *i; // rax
  __int64 *v7; // rbx
  unsigned __int64 OldIrql; // r14
  unsigned __int64 v10; // rbx
  __int64 *PoolWithTag; // rax
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 *j; // rax
  __int64 *v15; // r14
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rax
  char v19; // r15
  __int64 v20; // rdx
  _DWORD *v21; // r8
  __int64 v22; // rcx
  unsigned __int64 v23; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v27; // eax
  bool v28; // zf
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  int v32; // eax
  unsigned __int64 v33; // r15
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r10
  _DWORD *v36; // r9
  int v37; // eax
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r9
  int v40; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF

  v4 = Object[2];
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v4 )
    v5 = *(_QWORD *)(v4 + 8);
  else
    v5 = Object[1];
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  for ( i = (__int64 *)CcVolumeCacheMapList; i != &CcVolumeCacheMapList; i = (__int64 *)*i )
  {
    v7 = i - 2;
    if ( *(i - 1) == v5 )
    {
      ++*((_DWORD *)v7 + 1);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v28 = (v27 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v27;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
      goto LABEL_9;
    }
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v10 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    v29 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v29 <= 0xFu && LockHandle.OldIrql <= 0xFu && v29 >= 2u )
    {
      v30 = KeGetCurrentPrcb();
      v31 = v30->SchedulerAssist;
      v32 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v28 = (v32 & v31[5]) == 0;
      v31[5] &= v32;
      if ( v28 )
        KiRemoveSystemWorkPriorityKick(v30);
    }
  }
  __writecr8(v10);
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag((POOL_TYPE)1536, 0xA90uLL, 0x6D566343u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  ++*((_DWORD *)PoolWithTag + 1);
  PoolWithTag[1] = v5;
  *(_DWORD *)PoolWithTag = 177210104;
  v12 = PoolWithTag + 26;
  v12[1] = v12;
  *v12 = v12;
  *((_DWORD *)v7 + 51) = _InterlockedIncrement(&CcNextVolumeId);
  memset(v7 + 30, 0, 0x4D0uLL);
  if ( *(_DWORD *)(v5 + 72) != 20 )
  {
    v13 = v7[28] - *(_QWORD *)&NullGuid.Data1;
    if ( !v13 )
      v13 = v7[29] - *(_QWORD *)NullGuid.Data4;
    if ( !v13 )
      CcGetDeviceGuid(Object);
  }
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  for ( j = (__int64 *)CcVolumeCacheMapList; j != &CcVolumeCacheMapList; j = (__int64 *)*j )
  {
    v15 = j - 2;
    if ( *(j - 1) == v5 )
    {
      ++*((_DWORD *)v15 + 1);
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      v33 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        v34 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v34 <= 0xFu && LockHandle.OldIrql <= 0xFu && v34 >= 2u )
        {
          v35 = KeGetCurrentPrcb();
          v36 = v35->SchedulerAssist;
          v37 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v28 = (v37 & v36[5]) == 0;
          v36[5] &= v37;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick(v35);
        }
      }
      __writecr8(v33);
      ExFreePoolWithTag(v7, 0x6D566343u);
      *a2 = v15;
      return 0LL;
    }
  }
  v16 = (_QWORD *)qword_140C5F788;
  v17 = v7 + 2;
  if ( *(__int64 **)qword_140C5F788 != &CcVolumeCacheMapList )
    __fastfail(3u);
  *v17 = &CcVolumeCacheMapList;
  v7[3] = (__int64)v16;
  *v16 = v17;
  qword_140C5F788 = (__int64)(v7 + 2);
  _InterlockedIncrement64(&qword_140C5F508);
  if ( *(_DWORD *)(v7[1] + 72) == 20 )
    goto LABEL_27;
  v18 = v7[28] - *(_QWORD *)&NullGuid.Data1;
  if ( !v18 )
    v18 = v7[29] - *(_QWORD *)NullGuid.Data4;
  if ( v18 )
  {
LABEL_27:
    v19 = 0;
  }
  else
  {
    ++*((_DWORD *)v7 + 1);
    v19 = 1;
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v22 = (unsigned int)KiIrqlFlags;
  v23 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    v38 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v38 <= 0xFu && LockHandle.OldIrql <= 0xFu && v38 >= 2u )
    {
      v39 = KeGetCurrentPrcb();
      v21 = v39->SchedulerAssist;
      v22 = (unsigned int)LockHandle.OldIrql + 1;
      v40 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v28 = (v40 & v21[5]) == 0;
      v20 = (unsigned int)v40 & v21[5];
      v21[5] = v20;
      if ( v28 )
        KiRemoveSystemWorkPriorityKick(v39);
    }
  }
  __writecr8(v23);
  if ( v19 )
    CcQueueAsyncGetDeviceGuid(v7, Object);
  if ( !CcRegistryWatchInitComplete )
    CcSetupWatchForRegistryChanges(v22, v20);
  if ( !CcEtwLoggingInitialized )
    CcEtwLoggingInitialized = (int)McGenEventRegister_EtwRegister(
                                     MS_KernelCc_Provider,
                                     v20,
                                     &MS_KernelCc_Provider_Context,
                                     &MS_KernelCc_Provider_Context,
                                     LockHandle.LockQueue.Next,
                                     LockHandle.LockQueue.Lock) >= 0;
  if ( (Microsoft_Windows_Kernel_CacheEnableBits & 1) != 0 )
    McTemplateK0j_EtwWriteTransfer(&MS_KernelCc_Provider_Context, CcEvt_VolumeCacheMap_Init, v21, v7 + 28);
LABEL_9:
  *a2 = v7;
  return 0LL;
}
