/*
 * XREFs of KxEnableOptionalXStateFeatures @ 0x140570874
 * Callers:
 *     KeEnableOptionalXStateFeaturesApc @ 0x14056FFF0 (KeEnableOptionalXStateFeaturesApc.c)
 *     KiEnableOptionalXStateFeatures @ 0x14057033C (KiEnableOptionalXStateFeatures.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KeCopyXfdMaskToTeb @ 0x14056FED0 (KeCopyXfdMaskToTeb.c)
 */

__int64 __fastcall KxEnableOptionalXStateFeatures(__int64 a1, __int64 a2, void *a3, char *a4)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  unsigned __int8 v12; // cl
  struct _KPRCB *v13; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf
  int v17; // eax
  size_t v18; // r8
  char v19; // al
  __int64 v20; // rbp
  unsigned __int8 v21; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v23; // r8
  int v24; // eax

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 544) + 1408LL) )
    return 3221225659LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v11 = 4;
    if ( CurrentIrql != 2 )
      v11 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v11;
  }
  if ( (a2 & *(_QWORD *)(a1 + 1064)) != 0 )
  {
    v17 = *(_DWORD *)(a1 + 116);
    if ( (v17 & 0x800000) != 0 )
    {
      v19 = 0;
    }
    else
    {
      v18 = (unsigned int)KeDecoupledStateSaveAreaLength;
      *(_DWORD *)(a1 + 116) = v17 | 0x800000;
      *(_QWORD *)(a1 + 96) = a3;
      memset(a3, 0, v18);
      v19 = 1;
    }
    *a4 = v19;
    *(_QWORD *)(a1 + 592) |= a2;
    v20 = ~a2;
    *(_QWORD *)(a1 + 1064) &= v20;
    __writemsr(0x1C4u, v20 & __readmsr(0x1C4u));
    if ( KiIrqlFlags )
    {
      v21 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v23 = CurrentPrcb->SchedulerAssist;
        v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v24 & v23[5]) == 0;
        v23[5] &= v24;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    KeCopyXfdMaskToTeb((_QWORD *)a1);
  }
  else
  {
    if ( KiIrqlFlags )
    {
      v12 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
      {
        v13 = KeGetCurrentPrcb();
        v14 = v13->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v16 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)v13);
      }
    }
    __writecr8(CurrentIrql);
    *a4 = 0;
  }
  return 0LL;
}
