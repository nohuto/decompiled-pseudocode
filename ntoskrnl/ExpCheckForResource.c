/*
 * XREFs of ExpCheckForResource @ 0x140608878
 * Callers:
 *     ExFreeHeapPool @ 0x1402B61C0 (ExFreeHeapPool.c)
 *     ExpFreePoolChecks @ 0x140313BA0 (ExpFreePoolChecks.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     ExAcquireSpinLockShared @ 0x140308060 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     VfCheckForResource @ 0x140AE138C (VfCheckForResource.c)
 */

__int64 __fastcall ExpCheckForResource(__int64 *a1, ULONG_PTR a2)
{
  KIRQL v4; // al
  __int64 *v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v10; // eax
  bool v11; // zf

  if ( ((MmVerifierData & 0x800) == 0
     || (MmVerifierData & 0x10) == 0
     || !(unsigned int)VfCheckForResource((ULONG_PTR)a1, a2))
    && (unsigned int)KeNumberProcessors_0 <= 1
    && (ExResourceCheckFlags & 1) != 0 )
  {
    v4 = ExAcquireSpinLockShared(&ExpResourceSpinLock);
    v5 = (__int64 *)ExpSystemResourcesList;
    v6 = v4;
    while ( v5 != &ExpSystemResourcesList )
    {
      if ( v5 >= a1 && v5 < (__int64 *)((char *)a1 + a2) )
      {
        DbgPrintEx(
          0,
          0,
          "EX: ExFreePool( %p, %Ix ) contains an ERESOURCE structure that has not been ExDeleteResourced\n",
          a1,
          a2);
        __debugbreak();
      }
      v5 = (__int64 *)*v5;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&ExpResourceSpinLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v6);
  }
  return 0LL;
}
