/*
 * XREFs of EtwpApplyStackWalkIdFilter @ 0x140601EC8
 * Callers:
 *     EtwpEventWriteFull @ 0x1402319C0 (EtwpEventWriteFull.c)
 *     EtwpApplyStackWalkFilterOnUserEvent @ 0x1409F2310 (EtwpApplyStackWalkFilterOnUserEvent.c)
 * Callees:
 *     EtwpPerfectHashFunctionSearch @ 0x140233A30 (EtwpPerfectHashFunctionSearch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

bool __fastcall EtwpApplyStackWalkIdFilter(__int16 a1, __int64 a2, unsigned int a3, char a4)
{
  bool v4; // di
  unsigned __int8 CurrentIrql; // bl
  __int64 v6; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  __int64 v9; // rdx
  char v10; // al
  _BYTE *v11; // rdx
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf
  __int64 v17; // rdx
  char v18; // al
  _BYTE *v19; // rdx

  v4 = 1;
  if ( a4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v6 = -1LL;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v8 = 4;
      if ( CurrentIrql != 2 )
        v8 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v8;
    }
    v9 = *(_QWORD *)(104LL * a3 + *(_QWORD *)(a2 + 384) + 48);
    if ( v9 )
    {
      v10 = EtwpPerfectHashFunctionSearch(a1, v9);
      v4 = *v11 == (unsigned __int8)v10;
    }
    if ( KiIrqlFlags )
    {
      v12 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v14 = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(v6 << (CurrentIrql + 1));
        v16 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
  }
  else
  {
    v17 = *(_QWORD *)(104LL * a3 + *(_QWORD *)(a2 + 384) + 48);
    if ( v17 )
    {
      v18 = EtwpPerfectHashFunctionSearch(a1, v17);
      return *v19 == (unsigned __int8)v18;
    }
  }
  return v4;
}
