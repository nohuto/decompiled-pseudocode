char __fastcall KiPreprocessFlushTb(char a1, unsigned int a2, int a3, _BYTE *a4, unsigned __int8 *a5)
{
  struct _KPRCB *CurrentPrcb; // rcx
  _KTHREAD *CurrentThread; // rax
  unsigned __int8 CurrentIrql; // r8
  _DWORD *SchedulerAssist; // r10
  __int64 v11; // rdx
  unsigned __int64 v12; // rdi
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r9
  int v15; // eax
  _DWORD *v16; // r8
  bool v17; // zf
  signed __int32 v18[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (HvlEnlightenments & 4) == 0 )
    goto LABEL_2;
  if ( (HvlEnlightenments & 2) != 0 )
    goto LABEL_9;
  if ( a1 )
  {
    if ( (HvlEnlightenments & 0x800000) != 0 && (unsigned __int8)KiIsFlushEntire(a2) )
      goto LABEL_9;
  }
  else if ( (KiFlushPcid & 3) == 1 )
  {
    goto LABEL_9;
  }
  if ( (_DWORD)KeNumberProcessors_0 == 1 )
  {
LABEL_2:
    *a4 = 0;
    return 0;
  }
  if ( a3 )
  {
LABEL_9:
    *a4 = 1;
    return 0;
  }
  _InterlockedOr(v18, 0);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 12 )
      LODWORD(v11) = 4096;
    else
      v11 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
    SchedulerAssist[5] |= v11;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = CurrentPrcb->CurrentThread;
  *a5 = CurrentIrql;
  if ( (unsigned int)KiAffinityContainsProcessorsOtherThanSelf(
                       CurrentPrcb,
                       &CurrentThread->ApcState.Process->ActiveProcessors) )
  {
    v12 = *a5;
    if ( KiIrqlFlags )
    {
      v13 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v13 >= 2u )
      {
        v14 = KeGetCurrentPrcb();
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        v16 = v14->SchedulerAssist;
        v17 = (v15 & v16[5]) == 0;
        v16[5] &= v15;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(v14);
      }
    }
    __writecr8(v12);
    *a4 = 1;
    return 0;
  }
  *a4 = 0;
  return 1;
}
