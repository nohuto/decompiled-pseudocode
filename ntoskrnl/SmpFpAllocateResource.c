/*
 * XREFs of SmpFpAllocateResource @ 0x1405C9EC8
 * Callers:
 *     SmpFpWaitForResource @ 0x1405CA06C (SmpFpWaitForResource.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall SmpFpAllocateResource(PEX_SPIN_LOCK SpinLock, int a2)
{
  __int64 v2; // rbx
  KIRQL v4; // al
  __int64 *v5; // r8
  unsigned __int64 v6; // rsi
  __int64 i; // rax
  __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // edx
  bool v13; // zf

  v2 = a2;
  v4 = ExAcquireSpinLockExclusive(SpinLock);
  v5 = *(__int64 **)&SpinLock[2 * v2 + 10];
  v6 = v4;
  for ( i = v2; (v5[1] & 1) != 0; v5 = (__int64 *)*v5 )
    ;
  v8 = v5[1];
  *((_DWORD *)v5 + 2) |= 1u;
  ++*((_BYTE *)SpinLock + i + 88);
  ++*((_BYTE *)SpinLock + 94);
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v13 = (v12 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v6);
  return v8;
}
