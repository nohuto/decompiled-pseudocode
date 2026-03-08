/*
 * XREFs of IopIoRingUpdateCompletionUserEvent @ 0x1405573C0
 * Callers:
 *     NtSetInformationIoRing @ 0x1409479B0 (NtSetInformationIoRing.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall IopIoRingUpdateCompletionUserEvent(__int64 a1, void **a2, KPROCESSOR_MODE a3)
{
  PVOID v4; // r14
  void *v5; // rcx
  NTSTATUS result; // eax
  KIRQL v7; // al
  void *v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  PVOID v15; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0LL;
  v5 = *a2;
  if ( !*a2
    || (v15 = 0LL,
        result = ObReferenceObjectByHandle(v5, 2u, (POBJECT_TYPE)ExEventObjectType, a3, &v15, 0LL),
        v4 = v15,
        result >= 0) )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 104));
    v8 = *(void **)(a1 + 168);
    v9 = v7;
    *(_QWORD *)(a1 + 168) = v4;
    KxReleaseSpinLock((volatile signed __int64 *)(a1 + 104));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v14 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v9);
    if ( v8 )
      ObfDereferenceObjectWithTag(v8, 0x746C6644u);
    return 0;
  }
  return result;
}
