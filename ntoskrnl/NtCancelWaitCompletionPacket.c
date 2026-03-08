/*
 * XREFs of NtCancelWaitCompletionPacket @ 0x1402DEDA0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopCancelWaitCompletionPacket @ 0x1402DEF38 (IopCancelWaitCompletionPacket.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtCancelWaitCompletionPacket(void *a1)
{
  NTSTATUS v1; // esi
  PVOID v2; // rbx
  KIRQL v3; // al
  KSPIN_LOCK *v4; // r15
  unsigned __int64 v5; // rdi
  _BYTE *v6; // rbx
  unsigned __int64 v7; // rdi
  _BYTE *v8; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r9
  int v19; // eax
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  int v23; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  PVOID Object; // [rsp+90h] [rbp+40h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Object = 0LL;
  v1 = ObReferenceObjectByHandle(
         a1,
         1u,
         IopWaitCompletionPacketObjectType,
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL);
  if ( v1 < 0 )
    goto LABEL_10;
  v2 = Object;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 12);
  v4 = (KSPIN_LOCK *)*((_QWORD *)v2 + 11);
  v5 = v3;
  if ( v4 )
    ObfReferenceObjectWithTag(*((PVOID *)v2 + 11), 0x746C6644u);
  KxReleaseSpinLock((volatile signed __int64 *)v2 + 12);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v15 = (v14 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v14;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v5);
  if ( !v4 )
  {
    v1 = -1073741536;
    goto LABEL_10;
  }
  KeAcquireInStackQueuedSpinLock(v4 + 8, &LockHandle);
  v6 = Object;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Object + 12);
  if ( !v6[104] )
  {
    v1 = -1073741536;
LABEL_15:
    KxReleaseSpinLock((volatile signed __int64 *)Object + 12);
    if ( KiIrqlFlags )
    {
      v16 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v16 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v15 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
    __writecr8(v7);
    goto LABEL_8;
  }
  v8 = Object;
  if ( !(unsigned __int8)IopCancelWaitCompletionPacket(Object) )
  {
    if ( v8[104] )
      v1 = 259;
    goto LABEL_15;
  }
LABEL_8:
  KxReleaseQueuedSpinLock(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    v20 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v20 <= 0xFu && LockHandle.OldIrql <= 0xFu && v20 >= 2u )
    {
      v21 = KeGetCurrentPrcb();
      v22 = v21->SchedulerAssist;
      v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v15 = (v23 & v22[5]) == 0;
      v22[5] &= v23;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick(v21);
    }
  }
  __writecr8(OldIrql);
  ObfDereferenceObjectWithTag(v4, 0x746C6644u);
LABEL_10:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return (unsigned int)v1;
}
