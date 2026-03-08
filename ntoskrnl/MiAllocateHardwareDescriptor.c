/*
 * XREFs of MiAllocateHardwareDescriptor @ 0x140652308
 * Callers:
 *     MiZeroEngineMemory @ 0x1402758F0 (MiZeroEngineMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 *__fastcall MiAllocateHardwareDescriptor(_QWORD *a1)
{
  __int64 *v2; // rdi
  KIRQL v3; // al
  __int64 *v4; // rdx
  unsigned __int64 v5; // rbx
  __int64 *v6; // rax
  __int64 *v7; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // edx
  bool v12; // zf
  __int64 **v14; // r8
  __int64 **v15; // rcx

  v2 = 0LL;
  v3 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1[25] + 23160LL));
  v4 = a1 + 14;
  v5 = v3;
  v6 = (__int64 *)a1[14];
  if ( v6 != a1 + 14 )
  {
    while ( 1 )
    {
      v7 = (__int64 *)*v6;
      if ( !*((_BYTE *)v6 + 16) )
        break;
      v6 = (__int64 *)*v6;
      if ( v7 == v4 )
        goto LABEL_4;
    }
    v14 = (__int64 **)v6[1];
    if ( (__int64 *)v7[1] != v6
      || *v14 != v6
      || (*v14 = v7, v2 = v6 + 4, v7[1] = (__int64)v14, *((_BYTE *)v6 + 16) = 1, v15 = (__int64 **)a1[15], *v15 != v4) )
    {
      __fastfail(3u);
    }
    *v6 = (__int64)v4;
    v6[1] = (__int64)v15;
    *v15 = v6;
    a1[15] = v6;
  }
LABEL_4:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1[25] + 23160LL));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v12 = (v11 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v11;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v5);
  return v2;
}
