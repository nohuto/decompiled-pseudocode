/*
 * XREFs of PspSetPicoThreadDescriptorBase @ 0x1405A2900
 * Callers:
 *     <none>
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PspSetPicoThreadDescriptorBase(int a1, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // rsi
  int v5; // eax
  unsigned int v6; // ecx
  unsigned __int8 v7; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v9; // r8
  int v10; // eax
  bool v11; // zf
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v5 = 4;
    if ( CurrentIrql != 2 )
      v5 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v5;
  }
  if ( a1 )
  {
    CurrentThread[1].WaitBlock[2].Object = (PVOID)a2;
    v6 = -1073741566;
  }
  else
  {
    CurrentThread[1].WaitBlock[2].Thread = (struct _KTHREAD *)a2;
    v6 = -1073741568;
  }
  __writemsr(v6, a2);
  if ( KiIrqlFlags )
  {
    v7 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v11 = (v10 & v9[5]) == 0;
      v9[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
