__int64 __fastcall CcDeleteSectionsForPartition(_QWORD **a1, __int64 a2)
{
  char v2; // r14
  char v3; // di
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  _QWORD *i; // rcx
  _QWORD *v13; // rbx
  __int64 v14; // r8
  int v15; // eax
  unsigned __int64 v16; // rbx
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r10
  _DWORD *v19; // r9
  int v20; // eax
  __int64 v21; // rax
  unsigned __int64 v22; // rbx
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r10
  _DWORD *v25; // r9
  int v26; // eax
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // rdx
  __int64 v28; // rdx
  unsigned __int64 v29; // rbx
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
  _DWORD *v32; // r9
  int v33; // eax
  unsigned __int64 v34; // rbx
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  _DWORD *v37; // r9
  int v38; // eax
  __int64 result; // rax
  unsigned __int64 v40; // rbx
  struct _KPRCB *v41; // r9
  _DWORD *v42; // r8
  struct _KLOCK_QUEUE_HANDLE v43; // [rsp+30h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-38h] BYREF
  __int128 Object; // [rsp+60h] [rbp-20h] BYREF
  __int128 v46; // [rsp+70h] [rbp-10h] BYREF

  v2 = 0;
  v3 = 0;
  memset(&v43, 0, sizeof(v43));
  memset(&LockHandle, 0, sizeof(LockHandle));
  Object = 0LL;
  v46 = 0LL;
LABEL_2:
  if ( v3 )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    v3 = 0;
  }
  if ( v2 )
  {
    v2 = 0;
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    v3 = 1;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 768), &v43);
  for ( i = *a1; i != a1; i = (_QWORD *)*i )
  {
    v13 = i - 17;
    if ( (i[2] & 0x800) == 0 )
    {
      if ( MmGetControlAreaPartition(*(_QWORD *)((v13[12] & 0xFFFFFFFFFFFFFFF0uLL) + 0x28)) != *(_QWORD *)(a2 + 8) )
        KeBugCheckEx(0x34u, 0x377uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      if ( (_QWORD *)v13[29] == v13 + 29 )
      {
        v15 = *((_DWORD *)v13 + 38);
        if ( (v15 & 0x8000) != 0 )
        {
          *((_DWORD *)v13 + 38) = v15 & 0xFFFF7FFF;
          goto LABEL_21;
        }
        if ( (v15 & 0x20) != 0 || *((_DWORD *)v13 + 1) || *((_DWORD *)v13 + 28) )
        {
          v28 = 0LL;
          *((_DWORD *)v13 + 38) = v15 | 0x10000;
          WORD4(Object) = 0;
          *((_QWORD *)&v46 + 1) = &v46;
          *(_QWORD *)&v46 = &v46;
          BYTE10(Object) = 6;
          HIDWORD(Object) = 0;
          *(_QWORD *)&Object = v13[35];
          if ( CcEnablePerVolumeLazyWriter )
            v28 = v13[75];
          LOBYTE(v14) = 1;
          v13[35] = (char *)&Object + 1;
          CcScheduleLazyWriteScan((_BYTE *)a2, v28, v14, 1);
          KxReleaseQueuedSpinLock((volatile signed __int64 **)&v43);
          v29 = v43.OldIrql;
          if ( KiIrqlFlags )
          {
            v30 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v30 <= 0xFu && v43.OldIrql <= 0xFu && v30 >= 2u )
            {
              v31 = KeGetCurrentPrcb();
              v32 = v31->SchedulerAssist;
              v33 = ~(unsigned __int16)(-1LL << (v43.OldIrql + 1));
              v11 = (v33 & v32[5]) == 0;
              v32[5] &= v33;
              if ( v11 )
                KiRemoveSystemWorkPriorityKick(v31);
            }
          }
          __writecr8(v29);
          KeWaitForSingleObject((char *)&Object + 8, Executive, 0, 0, 0LL);
        }
        else
        {
          v21 = v13[75];
          if ( !v21 || *(_DWORD *)(v21 + 4) != 1 )
          {
            if ( v3 )
LABEL_44:
              p_LockHandle = &LockHandle;
            else
              p_LockHandle = 0LL;
            CcDeleteSharedCacheMap(v13, p_LockHandle, (__int64)&v43, 0, 0LL);
            v3 = 0;
            goto LABEL_2;
          }
          if ( v3 )
            goto LABEL_44;
          v2 = 1;
          KxReleaseQueuedSpinLock((volatile signed __int64 **)&v43);
          v22 = v43.OldIrql;
          if ( KiIrqlFlags )
          {
            v23 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v23 <= 0xFu && v43.OldIrql <= 0xFu && v23 >= 2u )
            {
              v24 = KeGetCurrentPrcb();
              v25 = v24->SchedulerAssist;
              v26 = ~(unsigned __int16)(-1LL << (v43.OldIrql + 1));
              v11 = (v26 & v25[5]) == 0;
              v25[5] &= v26;
              if ( v11 )
                KiRemoveSystemWorkPriorityKick(v24);
            }
          }
          __writecr8(v22);
        }
      }
      else
      {
LABEL_21:
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&v43);
        v16 = v43.OldIrql;
        if ( KiIrqlFlags )
        {
          v17 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && v43.OldIrql <= 0xFu && v17 >= 2u )
          {
            v18 = KeGetCurrentPrcb();
            v19 = v18->SchedulerAssist;
            v20 = ~(unsigned __int16)(-1LL << (v43.OldIrql + 1));
            v11 = (v20 & v19[5]) == 0;
            v19[5] &= v20;
            if ( v11 )
              KiRemoveSystemWorkPriorityKick(v18);
          }
        }
        __writecr8(v16);
        KeDelayExecutionThread(0, 0, &Cc5Milliseconds);
      }
      goto LABEL_2;
    }
  }
  if ( v3 )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v34 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v35 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v35 <= 0xFu && LockHandle.OldIrql <= 0xFu && v35 >= 2u )
      {
        v36 = KeGetCurrentPrcb();
        v37 = v36->SchedulerAssist;
        v38 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v11 = (v38 & v37[5]) == 0;
        v37[5] &= v38;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(v36);
      }
    }
    __writecr8(v34);
  }
  result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&v43);
  v40 = v43.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && v43.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      v41 = KeGetCurrentPrcb();
      v42 = v41->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (v43.OldIrql + 1));
      v11 = ((unsigned int)result & v42[5]) == 0;
      v42[5] &= result;
      if ( v11 )
        result = KiRemoveSystemWorkPriorityKick(v41);
    }
  }
  __writecr8(v40);
  return result;
}
