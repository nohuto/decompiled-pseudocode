__int64 __fastcall VerifierPortKeReleaseSpinLockNoXdv(volatile signed __int64 *a1, unsigned __int8 a2)
{
  char *v2; // rdi
  unsigned __int64 v3; // rbx
  volatile signed __int64 *v4; // r9
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf
  __int64 result; // rax

  v2 = 0LL;
  v3 = a2;
  v4 = a1;
  if ( (MmVerifierData & 1) != 0 )
    v2 = VfKeIrqlTransitionReserveLogEntry(KeGetCurrentIrql(), a2);
  KxReleaseSpinLock(v4);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v9 = (v8 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v8;
      if ( v9 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v3);
  result = (unsigned int)MmVerifierData;
  if ( (MmVerifierData & 1) != 0 )
    return VfKeIrqlLogLower(v2);
  return result;
}
