/*
 * XREFs of KiEnumerateNmiSxCallback @ 0x1403D0194
 * Callers:
 *     KiEnumerateCallback @ 0x1403D0130 (KiEnumerateCallback.c)
 *     KeIsNmiCallbackRegisteredForDriver @ 0x14056A100 (KeIsNmiCallbackRegisteredForDriver.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiEnumerateNmiSxCallback(PVOID **a1, unsigned __int8 *a2, _QWORD *a3)
{
  unsigned __int8 CurrentIrql; // r8
  PVOID *v6; // rax
  PVOID *v7; // r9
  PVOID *v8; // rcx
  __int64 result; // rax
  unsigned __int64 v10; // rbx
  _DWORD *SchedulerAssist; // rbx
  __int64 v12; // rax
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v15; // eax
  _DWORD *v16; // r8
  bool v17; // zf

  CurrentIrql = KeGetCurrentIrql();
  v6 = *a1;
  v7 = &KiNmiCallbackListHead;
  if ( *a1 == &KiNmiCallbackListHead )
    goto LABEL_9;
  if ( v6 )
    goto LABEL_6;
  if ( CurrentIrql < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        LODWORD(v12) = 4;
        if ( CurrentIrql != 2 )
          v12 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v12;
      }
    }
  }
  *a2 = CurrentIrql;
  v6 = (PVOID *)KiNmiCallbackListHead;
  if ( KiNmiCallbackListHead )
  {
LABEL_6:
    *a3 = v6[1];
    v8 = (PVOID *)*v6;
    result = 1LL;
    if ( v8 )
      v7 = v8;
    *a1 = v7;
  }
  else
  {
LABEL_9:
    v10 = *a2;
    if ( (unsigned __int8)v10 < 2u )
    {
      if ( KiIrqlFlags )
      {
        v13 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v13 - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v16 = CurrentPrcb->SchedulerAssist;
          v17 = (v15 & v16[5]) == 0;
          v16[5] &= v15;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v10);
    }
    return 0LL;
  }
  return result;
}
