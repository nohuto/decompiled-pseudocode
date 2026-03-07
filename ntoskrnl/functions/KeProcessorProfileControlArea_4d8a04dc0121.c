__int64 __fastcall KeProcessorProfileControlArea(__int64 a1, int a2, char a3)
{
  char v5; // bp
  char *Pool2; // rbx
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r10
  unsigned __int8 v12; // r11
  unsigned int v13; // edi
  __int64 v14; // rax
  unsigned __int8 v15; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v17; // r8
  int v18; // eax
  bool v19; // zf

  if ( a3 )
    return 3221225506LL;
  if ( a2 != 16 )
    return 3221225476LL;
  v5 = *(_BYTE *)(a1 + 8);
  Pool2 = 0LL;
  if ( v5 )
  {
    Pool2 = (char *)ExAllocatePool2(72LL, 160LL, 1094930512LL);
    if ( !Pool2 )
    {
      *(_QWORD *)a1 = 0LL;
      return 3221225626LL;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v9 = 4;
    if ( CurrentIrql != 2 )
      v9 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v9;
  }
  if ( !KiIsIntelPebsSupported((__int64)KeGetCurrentPrcb()) )
  {
    *(_QWORD *)a1 = 0LL;
    v13 = -1073741637;
    goto LABEL_21;
  }
  if ( v5 )
  {
    v14 = *(_QWORD *)(v10 + 34968);
    if ( v14 )
    {
      *(_QWORD *)a1 = v14;
      v13 = -1073741302;
      goto LABEL_21;
    }
    *(_QWORD *)(v10 + 34968) = Pool2;
    *(_QWORD *)(v10 + 34976) = Pool2 + 40;
    *(_QWORD *)a1 = Pool2;
    Pool2 = 0LL;
    goto LABEL_20;
  }
  *(_QWORD *)a1 = 0LL;
  if ( *(_QWORD *)(v10 + 34968) )
  {
LABEL_20:
    v13 = 0;
    goto LABEL_21;
  }
  v13 = -1073741664;
LABEL_21:
  if ( KiIrqlFlags )
  {
    v15 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v15 <= v12 && CurrentIrql <= v12 && v15 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v17 = CurrentPrcb->SchedulerAssist;
      v18 = ~(unsigned __int16)(v11 << (CurrentIrql + 1));
      v19 = (v18 & v17[5]) == 0;
      v17[5] &= v18;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return v13;
}
