_QWORD *__fastcall MiLocateCombineBlock(__int64 a1, unsigned __int64 a2, unsigned int a3, int a4, _QWORD *a5)
{
  _QWORD *v8; // rsi
  unsigned __int8 CurrentIrql; // r14
  _QWORD *v10; // rcx
  _QWORD *v11; // rbx
  volatile signed __int32 *v12; // rcx
  __int64 v14; // rax
  _DWORD *SchedulerAssist; // r10
  __int64 v16; // rdx
  unsigned __int8 v17; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  void *retaddr; // [rsp+68h] [rbp+0h]

  v8 = (_QWORD *)(a1 + 16 * ((a2 & 0xF) + 6));
  if ( a4 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v16) = 4;
      else
        v16 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v16;
    }
    v10 = v8 + 1;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v10, CurrentIrql);
    }
    else if ( !(unsigned __int8)ExpTryAcquireSpinLockShared(v10) )
    {
      ExpWaitForSpinLockSharedAndAcquire(v8 + 1, CurrentIrql);
    }
  }
  v11 = (_QWORD *)*v8;
  if ( *v8 )
  {
    while ( a2 <= v11[3] )
    {
      if ( a2 >= v11[3] )
      {
        v14 = (v11[6] >> 55) & 0x1FLL;
        if ( a3 >= (unsigned int)v14 )
        {
          if ( a3 > (unsigned int)v14 )
            break;
          if ( !a5 )
            goto LABEL_12;
          if ( *a5 > v11[8] )
            break;
          if ( *a5 >= v11[8] )
            goto LABEL_12;
        }
      }
      v11 = (_QWORD *)*v11;
LABEL_11:
      if ( !v11 )
        goto LABEL_12;
    }
    v11 = (_QWORD *)v11[1];
    goto LABEL_11;
  }
LABEL_12:
  if ( !a4 )
  {
    v12 = (volatile signed __int32 *)(v8 + 1);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v12, retaddr);
    }
    else
    {
      _InterlockedAnd(v12, 0xBFFFFFFF);
      _InterlockedDecrement(v12);
    }
    if ( KiIrqlFlags )
    {
      v17 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v19 = CurrentPrcb->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v21 = (v20 & v19[5]) == 0;
        v19[5] &= v20;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
  }
  if ( !v11 )
    return 0LL;
  if ( !v11[7] )
    return 0LL;
  return v11;
}
