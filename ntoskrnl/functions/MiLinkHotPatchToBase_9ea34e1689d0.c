_QWORD *__fastcall MiLinkHotPatchToBase(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v8; // rax
  _QWORD *result; // rax
  _QWORD *v10; // r8
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf

  if ( (MiFlags & 0x30) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      LODWORD(v8) = 4;
      if ( CurrentIrql != 2 )
        v8 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v8;
    }
    MiUpdatePatchInProgress(a1, a2, 3LL);
  }
  else
  {
    CurrentIrql = 17;
  }
  *(_DWORD *)(a2 + 196) |= 0x20u;
  *(_QWORD *)(a2 + 280) = a1;
  result = (_QWORD *)(a2 + 296);
  *(_DWORD *)(a2 + 312) = a3;
  v10 = *(_QWORD **)(a1 + 304);
  if ( *v10 != a1 + 296 )
    __fastfail(3u);
  *result = a1 + 296;
  *(_QWORD *)(a2 + 304) = v10;
  *v10 = result;
  *(_QWORD *)(a1 + 304) = result;
  if ( CurrentIrql != 17 )
  {
    if ( KiIrqlFlags )
    {
      v11 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v15 = (v14 & v13[5]) == 0;
        v13[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    result = (_QWORD *)CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
