/*
 * XREFs of SepRmCallLsa @ 0x14034D310
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     SepRmDispatchDataToLsa @ 0x14034D558 (SepRmDispatchDataToLsa.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     NtWaitForSingleObject @ 0x14063DF50 (NtWaitForSingleObject.c)
 *     NtClose @ 0x14063E0A0 (NtClose.c)
 *     SepAdtOpenEtwReadyEvent @ 0x14079E824 (SepAdtOpenEtwReadyEvent.c)
 *     AdtpWriteToEtw @ 0x1407B8E98 (AdtpWriteToEtw.c)
 *     SepAuditFailed @ 0x140925950 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepRmCallLsa(__int64 **a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  char v4; // r15
  int v6; // r14d
  __int64 *v7; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v9; // rcx
  __int64 *v10; // rax
  signed __int32 v11; // r14d
  void *v12; // rcx
  __int64 result; // rax
  struct _KTHREAD *v14; // rax
  struct _LIST_ENTRY *v15; // rcx
  struct _LIST_ENTRY *Blink; // rbx
  int v17; // eax
  NTSTATUS v18; // ebx
  struct _KEVENT *v19; // rcx
  _QWORD *v20; // rdx
  __int64 *v21; // rcx
  struct _KEVENT *v22; // rcx
  __int64 v23; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v28; // eax
  bool v29; // zf
  char v30[8]; // [rsp+20h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v33[3]; // [rsp+48h] [rbp-38h] BYREF

  Handle = 0LL;
  v4 = SepRmAuditingEnabled;
  memset(v33, 0, sizeof(v33));
  v6 = 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !AdtpRegisteredWithEtw )
  {
    result = SepAdtOpenEtwReadyEvent(&Handle);
    if ( (int)result < 0 )
      return result;
    v18 = NtWaitForSingleObject(Handle, 1u, 0LL);
    NtClose(Handle);
    if ( v18 < 0 )
      return (unsigned int)v18;
  }
  if ( v4 )
    KiStackAttachProcess((_KPROCESS *)SepRmLsaCallProcess, 0LL, (__int64)v33, a4);
  do
  {
    v7 = 0LL;
    if ( ((_BYTE)a1[28] & 1) == 0 )
      goto LABEL_53;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 4), 1u);
    v9 = *a1;
    if ( *a1 == (__int64 *)a1 )
    {
      v19 = (struct _KEVENT *)a1[24];
      if ( v19 )
        KeSetEvent(v19, 0, 0);
    }
    else if ( *((_DWORD *)v9 + 13) == *((_DWORD *)a1 + 46) + 1 )
    {
      v7 = *a1;
      v10 = (__int64 *)*v9;
      if ( (__int64 **)v9[1] != a1 || (__int64 *)v10[1] != v9 )
LABEL_50:
        __fastfail(3u);
      *a1 = v10;
      v10[1] = (__int64)a1;
    }
    ExReleaseResourceLite((PERESOURCE)(a1 + 4));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( !v7 )
    {
LABEL_53:
      if ( ((_BYTE)a1[28] & 2) == 0 )
        continue;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 17, &LockHandle);
      v20 = a1 + 2;
      v21 = a1[2];
      if ( v21 == (__int64 *)(a1 + 2) )
      {
        v22 = (struct _KEVENT *)a1[25];
        if ( v22 )
          KeSetEvent(v22, 0, 0);
      }
      else if ( *((_DWORD *)v21 + 13) == *((_DWORD *)a1 + 46) + 1 )
      {
        v7 = a1[2];
        v23 = *v21;
        if ( (_QWORD *)v21[1] != v20 || *(__int64 **)(v23 + 8) != v21 )
          goto LABEL_50;
        *v20 = v23;
        *(_QWORD *)(v23 + 8) = v20;
      }
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v28 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v29 = (v28 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v28;
            if ( v29 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
      if ( !v7 )
        continue;
    }
    if ( *((_DWORD *)v7 + 8) != 1 || (*(_DWORD *)(v7[3] + 20) & 2) != 0 )
    {
      if ( v4 )
        SepRmDispatchDataToLsa(v7);
    }
    else
    {
      v14 = KeGetCurrentThread();
      v15 = (struct _LIST_ENTRY *)v7[7];
      v30[0] = 0;
      Blink = v14[1].WaitBlock[3].WaitListEntry.Blink;
      v14[1].WaitBlock[3].WaitListEntry.Blink = v15;
      v17 = AdtpWriteToEtw(v7[3], v30);
      KeGetCurrentThread()[1].WaitBlock[3].WaitListEntry.Blink = Blink;
      if ( v17 < 0 )
      {
        SepAdtLastAuditFailStatus = v17;
        _InterlockedIncrement(&SepAdtAuditFailureCount);
        if ( !v30[0] )
          SepAuditFailed((unsigned int)v17);
      }
      if ( (unsigned int)(*((_DWORD *)v7 + 4) - 4) <= 1 )
        ExFreePoolWithTag((PVOID)v7[3], 0);
    }
    _InterlockedIncrement((volatile signed __int32 *)a1 + 46);
    v11 = _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 44, 0xFFFFFFFF);
    v12 = (void *)v7[7];
    v6 = v11 - 1;
    if ( v12 )
    {
      ObfDereferenceObjectWithTag(v12, 0x69416553u);
      v7[7] = 0LL;
    }
    ((void (__fastcall *)(__int64 *))a1[27])(v7);
  }
  while ( v6 );
  if ( v4 )
    KiUnstackDetachProcess((__int64)v33, 0);
  return 0LL;
}
