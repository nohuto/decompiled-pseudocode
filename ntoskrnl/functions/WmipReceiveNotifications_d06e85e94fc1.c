__int64 __fastcall WmipReceiveNotifications(unsigned int *a1, int *a2, __int64 a3)
{
  __int64 v4; // r12
  unsigned int v6; // r14d
  PVOID *Pool2; // rdi
  int v8; // r8d
  __int64 v9; // rsi
  char v10; // r13
  char v11; // dl
  int v12; // r9d
  void **v13; // rcx
  void *v14; // rcx
  _DWORD *v15; // rcx
  unsigned int v16; // edx
  PVOID *v17; // rax
  __int64 v18; // rax
  unsigned int v19; // ecx
  __int64 v20; // rdx
  unsigned int v21; // r8d
  _QWORD *v22; // rcx
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  bool v25; // r14
  unsigned __int64 OldIrql; // r15
  PVOID *v27; // rbx
  char v29; // al
  PVOID *v30; // r12
  __int64 v31; // r13
  unsigned int v32; // ebx
  int v33; // r14d
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v37; // eax
  bool v38; // zf
  NTSTATUS v39; // [rsp+44h] [rbp-BCh]
  unsigned int v40; // [rsp+48h] [rbp-B8h]
  unsigned int v41; // [rsp+48h] [rbp-B8h]
  char v42; // [rsp+4Ch] [rbp-B4h]
  int v43; // [rsp+50h] [rbp-B0h]
  int v44; // [rsp+54h] [rbp-ACh]
  char v45; // [rsp+58h] [rbp-A8h]
  char v46; // [rsp+5Ch] [rbp-A4h]
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v49; // [rsp+78h] [rbp-88h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-80h] BYREF
  _BYTE P[256]; // [rsp+A0h] [rbp-60h] BYREF

  v4 = *a1;
  v6 = *a2;
  v39 = -1073741811;
  v49 = a1 + 2;
  if ( (unsigned int)v4 > 0x10 )
  {
    Pool2 = (PVOID *)ExAllocatePool2(256LL, 16 * v4, 1885957463LL);
    if ( !Pool2 )
      return 3221225626LL;
  }
  else
  {
    Pool2 = (PVOID *)P;
  }
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v8 = 0;
  v45 = 0;
  v9 = 0LL;
  v43 = 0;
  v40 = 0;
  v10 = 0;
  v11 = 0;
  v46 = 0;
  v12 = 0;
  v42 = 0;
  v44 = 0;
  if ( (_DWORD)v4 )
  {
    v13 = (void **)(a1 + 2);
    while ( 1 )
    {
      v14 = *v13;
      Object = 0LL;
      v39 = ObReferenceObjectByHandle(v14, 4u, WmipGuidObjectType, 1, &Object, 0LL);
      if ( v39 < 0 )
        break;
      v15 = Object;
      v16 = 0;
      if ( (_DWORD)v9 )
      {
        v17 = Pool2;
        while ( Object != *v17 )
        {
          ++v16;
          v17 += 2;
          if ( v16 >= (unsigned int)v9 )
            goto LABEL_10;
        }
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
        v11 = v42;
        v8 = v43;
        v12 = v44;
      }
      else
      {
LABEL_10:
        v11 = v42;
        if ( *((_QWORD *)Object + 9) )
          v11 = 1;
        v18 = 2LL * (unsigned int)v9;
        v9 = (unsigned int)(v9 + 1);
        v42 = v11;
        Pool2[v18] = Object;
        if ( *((_QWORD *)v15 + 12) )
        {
          if ( v15[29] )
            v10 = 1;
          v46 = v10;
        }
        if ( *((_QWORD *)v15 + 16) )
        {
          v29 = v45;
          if ( v15[37] )
            v29 = 1;
          v45 = v29;
        }
        v8 = ((v15[29] + 7) & 0xFFFFFFF8) + v43;
        v43 = v8;
        v12 = ((v15[37] + 7) & 0xFFFFFFF8) + v44;
        v44 = v12;
      }
      v13 = (void **)(v49 + 2);
      ++v40;
      v49 += 2;
      if ( v40 >= (unsigned int)v4 )
        goto LABEL_16;
    }
  }
  else
  {
LABEL_16:
    v19 = v12 + v8;
    v41 = v12 + v8;
    if ( v11 == 1 && (_DWORD)v9 )
    {
      v30 = Pool2;
      v31 = (unsigned int)v9;
      do
      {
        if ( *((_QWORD *)*v30 + 9) )
          WmipCompleteGuidIrpWithError();
        v30 += 2;
        --v31;
      }
      while ( v31 );
      v19 = v41;
      v10 = v46;
    }
    if ( (unsigned __int8)v45 | (unsigned __int8)v10 )
    {
      if ( v19 > v6 )
      {
        v33 = 56;
        a1[11] = 32;
        *a1 = 56;
        a1[12] = v19;
      }
      else
      {
        v32 = v6;
        if ( v10 )
        {
          WmipCopyFromEventQueues(Pool2, (unsigned int)v9, a1);
          v32 = v6;
        }
        if ( v45 )
          WmipCopyFromEventQueues(Pool2, (unsigned int)v9, a1);
        v33 = v6 - v32;
      }
      *a2 = v33;
    }
    else
    {
      v20 = a3 + 120;
      v21 = 0;
      *(_QWORD *)&LockHandle.OldIrql = 0LL;
      *(_QWORD *)(a3 + 128) = a3 + 120;
      *(_QWORD *)(a3 + 120) = a3 + 120;
      for ( LockHandle.LockQueue = 0LL; v21 < (unsigned int)v9; *(_QWORD *)(a3 + 128) = v23 )
      {
        v22 = Pool2[2 * v21];
        v22[9] = a3;
        v23 = v22 + 10;
        v24 = *(_QWORD **)(a3 + 128);
        if ( *v24 != v20 )
          __fastfail(3u);
        *v23 = v20;
        ++v21;
        v23[1] = v24;
        *v24 = v23;
      }
      v39 = 259;
      v25 = 0;
      *(_BYTE *)(*(_QWORD *)(a3 + 184) + 3LL) |= 1u;
      KeAcquireInStackQueuedSpinLock(&WmipCancelSpinLock, &LockHandle);
      _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)&WmipNotificationIrpCancel);
      if ( *(_BYTE *)(a3 + 68) )
      {
        WmipClearIrpObjectList(a3);
        v39 = -1073741536;
        v25 = _InterlockedExchange64((volatile __int64 *)(a3 + 104), 0LL) != 0;
      }
      KxReleaseQueuedSpinLock(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v37 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v38 = (v37 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v37;
          if ( v38 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
      if ( v25 )
      {
        *(_QWORD *)(a3 + 56) = 0LL;
        *(_DWORD *)(a3 + 48) = -1073741536;
        IofCompleteRequest((PIRP)a3, 0);
      }
      *a2 = 0;
    }
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  if ( (_DWORD)v9 )
  {
    v27 = Pool2;
    do
    {
      ObfDereferenceObjectWithTag(*v27, 0x746C6644u);
      v27 += 2;
      --v9;
    }
    while ( v9 );
  }
  if ( Pool2 != (PVOID *)P )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v39;
}
