__int64 __fastcall SepRmCallLsa(__int64 **a1)
{
  char v1; // r15
  int v3; // r14d
  __int64 *v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v6; // rcx
  __int64 *v7; // rax
  signed __int32 v8; // r14d
  void *v9; // rcx
  __int64 result; // rax
  struct _KTHREAD *v11; // rax
  struct _LIST_ENTRY *v12; // rcx
  struct _LIST_ENTRY *Blink; // rbx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  int v17; // ebx
  struct _KEVENT *v18; // rcx
  _QWORD *v19; // rdx
  __int64 *v20; // rcx
  struct _KEVENT *v21; // rcx
  __int64 v22; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // eax
  bool v28; // zf
  char v29[8]; // [rsp+20h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v32; // [rsp+48h] [rbp-38h] BYREF

  Handle = 0LL;
  v1 = SepRmAuditingEnabled;
  memset(&v32, 0, sizeof(v32));
  v3 = 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !AdtpRegisteredWithEtw )
  {
    result = SepAdtOpenEtwReadyEvent(&Handle);
    if ( (int)result < 0 )
      return result;
    LOBYTE(v16) = 1;
    v17 = NtWaitForSingleObject(Handle, v16, 0LL);
    NtClose(Handle);
    if ( v17 < 0 )
      return (unsigned int)v17;
  }
  if ( v1 )
    KiStackAttachProcess(SepRmLsaCallProcess);
  do
  {
    v4 = 0LL;
    if ( ((_BYTE)a1[28] & 1) == 0 )
      goto LABEL_55;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 4), 1u);
    v6 = *a1;
    if ( *a1 == (__int64 *)a1 )
    {
      v18 = (struct _KEVENT *)a1[24];
      if ( v18 )
        KeSetEvent(v18, 0, 0);
    }
    else if ( *((_DWORD *)v6 + 13) == *((_DWORD *)a1 + 46) + 1 )
    {
      v4 = *a1;
      v7 = (__int64 *)*v6;
      if ( (__int64 **)v6[1] != a1 || (__int64 *)v7[1] != v6 )
LABEL_52:
        __fastfail(3u);
      *a1 = v7;
      v7[1] = (__int64)a1;
    }
    ExReleaseResourceLite((PERESOURCE)(a1 + 4));
    KeLeaveCriticalRegionThread(KeGetCurrentThread());
    if ( !v4 )
    {
LABEL_55:
      if ( ((_BYTE)a1[28] & 2) == 0 )
        continue;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 17, &LockHandle);
      v19 = a1 + 2;
      v20 = a1[2];
      if ( v20 == (__int64 *)(a1 + 2) )
      {
        v21 = (struct _KEVENT *)a1[25];
        if ( v21 )
          KeSetEvent(v21, 0, 0);
      }
      else if ( *((_DWORD *)v20 + 13) == *((_DWORD *)a1 + 46) + 1 )
      {
        v4 = a1[2];
        v22 = *v20;
        if ( (_QWORD *)v20[1] != v19 || *(__int64 **)(v22 + 8) != v20 )
          goto LABEL_52;
        *v19 = v22;
        *(_QWORD *)(v22 + 8) = v19;
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
          v27 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v28 = (v27 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v27;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
      if ( !v4 )
        continue;
    }
    if ( *((_DWORD *)v4 + 8) != 1 || (*(_DWORD *)(v4[3] + 20) & 2) != 0 )
    {
      if ( v1 )
        SepRmDispatchDataToLsa(v4);
    }
    else
    {
      v11 = KeGetCurrentThread();
      v12 = (struct _LIST_ENTRY *)v4[7];
      v29[0] = 0;
      Blink = v11[1].WaitBlock[3].WaitListEntry.Blink;
      v11[1].WaitBlock[3].WaitListEntry.Blink = v12;
      v14 = AdtpWriteToEtw(v4[3], v29);
      KeGetCurrentThread()[1].WaitBlock[3].WaitListEntry.Blink = Blink;
      if ( v14 < 0 )
      {
        SepAdtLastAuditFailStatus = v14;
        _InterlockedIncrement(&SepAdtAuditFailureCount);
        if ( !v29[0] )
          SepAuditFailed((unsigned int)v14);
      }
      v15 = *((_DWORD *)v4 + 4);
      if ( v15 == 4 || v15 == 5 )
        ExFreePoolWithTag((PVOID)v4[3], 0);
    }
    _InterlockedIncrement((volatile signed __int32 *)a1 + 46);
    v8 = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 44, 0xFFFFFFFF);
    v9 = (void *)v4[7];
    v3 = v8 - 1;
    if ( v9 )
    {
      ObfDereferenceObjectWithTag(v9, 0x69416553u);
      v4[7] = 0LL;
    }
    ((void (__fastcall *)(__int64 *))a1[27])(v4);
  }
  while ( v3 );
  if ( v1 )
    KiUnstackDetachProcess(&v32);
  return 0LL;
}
