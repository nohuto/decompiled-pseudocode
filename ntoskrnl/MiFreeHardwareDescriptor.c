/*
 * XREFs of MiFreeHardwareDescriptor @ 0x1406528BC
 * Callers:
 *     MiZeroEngineMemory @ 0x1402758F0 (MiZeroEngineMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDeleteAcceleratorDescriptor @ 0x14065241C (MiDeleteAcceleratorDescriptor.c)
 */

void __fastcall MiFreeHardwareDescriptor(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  KIRQL v5; // al
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  _QWORD *v9; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf

  v3 = a2 - 32;
  v4 = a2;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 200) + 23160LL));
  v6 = *(_QWORD *)(v3 + 24);
  *(_BYTE *)(v3 + 16) = 0;
  v7 = v5;
  if ( (*(_DWORD *)(v6 + 52) & 1) != 0 || byte_140C69494 )
  {
    v8 = *(_QWORD *)v3;
    v9 = *(_QWORD **)(v3 + 8);
    if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || *v9 != v3 )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
  }
  else
  {
    v4 = 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 200) + 23160LL));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v14 = (v13 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v7);
  if ( v4 )
    MiDeleteAcceleratorDescriptor(v4);
}
