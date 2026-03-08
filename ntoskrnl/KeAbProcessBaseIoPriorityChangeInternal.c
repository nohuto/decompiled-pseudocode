/*
 * XREFs of KeAbProcessBaseIoPriorityChangeInternal @ 0x140357A54
 * Callers:
 *     IoUpdateThreadIoRateThrottle @ 0x140200B50 (IoUpdateThreadIoRateThrottle.c)
 *     KeAbProcessBaseIoPriorityChange @ 0x140357A24 (KeAbProcessBaseIoPriorityChange.c)
 * Callees:
 *     KiAbThreadInsertList @ 0x1402F45E0 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x14035845C (KiAbQueueAutoBoostDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeAbProcessBaseIoPriorityChangeInternal(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r11
  __int64 v6; // rax
  _QWORD *v7; // r8
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // rdx
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v6) = 4;
    if ( CurrentIrql != 2 )
      v6 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v6;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !*(_BYTE *)(a1 + 871) || a2 )
  {
    if ( !*(_BYTE *)(a1 + 793) || !a2 )
      goto LABEL_4;
    v7 = (_QWORD *)(a1 + 808);
    p_AbPropagateBoostsList = &CurrentPrcb->AbPropagateBoostsList;
  }
  else
  {
    v7 = (_QWORD *)(a1 + 816);
    p_AbPropagateBoostsList = &CurrentPrcb->AbSelfIoBoostsList;
  }
  if ( (unsigned int)KiAbThreadInsertList(a1, p_AbPropagateBoostsList, v7) )
    KiAbQueueAutoBoostDpc(CurrentPrcb);
LABEL_4:
  if ( KiIrqlFlags )
  {
    v9 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
    {
      v10 = KeGetCurrentPrcb();
      v11 = v10->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v13 = (v12 & v11[5]) == 0;
      v11[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(v10);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
