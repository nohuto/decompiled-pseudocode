/*
 * XREFs of MiKernelStackVaToStackNode @ 0x14062AE2C
 * Callers:
 *     MiInPageSingleKernelStack @ 0x1402A7A08 (MiInPageSingleKernelStack.c)
 *     MiResolvePageFileFault @ 0x140668EDC (MiResolvePageFileFault.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140308060 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall MiKernelStackVaToStackNode(unsigned __int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v8; // edx
  bool v9; // zf

  v2 = ExAcquireSpinLockShared(&dword_140C68160);
  v3 = (_QWORD *)qword_140C68158;
  v4 = v2;
  while ( v3 )
  {
    if ( a1 <= v3[3] )
    {
      if ( a1 >= v3[4] )
        break;
      v3 = (_QWORD *)*v3;
    }
    else
    {
      v3 = (_QWORD *)v3[1];
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C68160);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v9 = (v8 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v8;
      if ( v9 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v4);
  return v3;
}
