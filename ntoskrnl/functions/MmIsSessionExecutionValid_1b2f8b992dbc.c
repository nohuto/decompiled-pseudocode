__int64 __fastcall MmIsSessionExecutionValid(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rcx
  int v6; // esi
  unsigned int v7; // esi
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 v9; // cl
  _QWORD *v10; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v13; // rdx
  unsigned __int8 v14; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v16; // r9
  int v17; // edx
  bool v18; // zf

  v5 = *(_QWORD *)(a2 + 1368);
  if ( !v5 )
    return 0LL;
  if ( (*(_DWORD *)(a2 + 2172) & 0x1000) != 0 )
    return 0LL;
  v6 = *(_DWORD *)(v5 + 8);
  if ( v6 == -1 || *(_BYTE *)(a1 + 586) == 1 && v6 != (unsigned int)MmGetSessionIdEx(*(_QWORD *)(a1 + 544)) )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 116) & 0x800) != 0
    || *(char *)(a1 + 1385) < 0
    || *(_QWORD *)(a1 + 40) != KeGetPcr()->Prcb.RspBase )
  {
    return 0LL;
  }
  v7 = 1;
  if ( a3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql < 0xFu )
    {
      v9 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && v9 <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          if ( v9 == 15 )
            LODWORD(v13) = 0x8000;
          else
            v13 = (-1LL << (v9 + 1)) & 0xFFFC;
          SchedulerAssist[5] |= v13;
        }
      }
    }
    ExAcquireSpinLockSharedAtDpcLevel(&PsLoadedModuleSpinLock);
    v10 = *(_QWORD **)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 64);
    if ( !v10 )
      goto LABEL_22;
    do
    {
      if ( a3 > v10[6] )
      {
        v10 = (_QWORD *)v10[1];
      }
      else
      {
        if ( a3 >= (v10[5] & 0xFFFFFFFFFFFFFFFCuLL) )
          break;
        v10 = (_QWORD *)*v10;
      }
    }
    while ( v10 );
    if ( !v10 )
LABEL_22:
      v7 = 0;
    ExReleaseSpinLockSharedFromDpcLevel(&PsLoadedModuleSpinLock);
    if ( CurrentIrql < 0xFu )
    {
      if ( KiIrqlFlags )
      {
        v14 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(v14 - 2) <= 0xDu )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v16 = CurrentPrcb->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v18 = (v17 & v16[5]) == 0;
          v16[5] &= v17;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
    }
  }
  return v7;
}
