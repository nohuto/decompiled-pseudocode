__int64 __fastcall KiSetProcessorDpcLimits(__int64 a1, int *a2, __int64 a3, _QWORD *a4)
{
  unsigned __int8 CurrentIrql; // bl
  int v7; // eax
  __int64 v8; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v11; // rdx
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v14; // r8
  int v15; // eax
  bool v16; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xDuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 13 )
      LODWORD(v11) = 0x2000;
    else
      v11 = (-1LL << (CurrentIrql + 1)) & 0x3FFC;
    SchedulerAssist[5] |= v11;
  }
  *(_DWORD *)(a1 + 33116) = 0;
  *(_DWORD *)(a1 + 32428) = 0;
  v7 = *a2;
  *a4 = 0LL;
  *(_DWORD *)(a1 + 33120) = v7;
  *(_DWORD *)(a1 + 32424) = a2[1];
  *(_DWORD *)(a1 + 13260) = a2[2];
  *(_DWORD *)(a1 + 13272) = a2[3];
  *(_DWORD *)(a1 + 33344) = a2[4];
  *(_DWORD *)(a1 + 32436) = a2[5];
  v8 = *(_QWORD *)(a1 + 34984);
  if ( a3 != v8 )
  {
    *a4 = v8;
    *(_QWORD *)(a1 + 34984) = a3;
    *(_DWORD *)(a1 + 13276) = a2[6];
    v8 = a3;
  }
  *(_QWORD *)(a1 + 34992) = v8;
  if ( KiIrqlFlags )
  {
    v12 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v14 = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v16 = (v15 & v14[5]) == 0;
      v14[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return 0LL;
}
