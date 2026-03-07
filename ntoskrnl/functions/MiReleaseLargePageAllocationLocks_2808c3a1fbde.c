__int64 __fastcall MiReleaseLargePageAllocationLocks(__int64 a1)
{
  __int64 v1; // r9
  _DWORD *v3; // rcx
  __int64 result; // rax
  __int64 v5; // rdi
  _DWORD *v6; // rdi
  __int64 **v7; // rcx
  unsigned int v8; // r8d
  __int64 *v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v16; // zf
  unsigned __int8 v17; // cl
  struct _KPRCB *v18; // r10
  _DWORD *v19; // r9
  void *retaddr; // [rsp+48h] [rbp+0h]
  int v21; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 152);
  if ( v1 )
  {
    v10 = *(_QWORD *)(a1 + 120);
    if ( v10 )
      *(_DWORD *)(v1 + 4LL * *(unsigned int *)(a1 + 16)) = (0xAAAAAAAAAAAAAAABuLL
                                                          * ((v10 + 0x220000000000LL) >> 4)
                                                          / MiLargePageSizes[*(unsigned int *)(a1 + 16)]
                                                          + 1)
                                                         % *(unsigned int *)(a1 + 76);
  }
  v3 = (_DWORD *)(*(_QWORD *)(a1 + 160) + 23104LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v3, retaddr);
  else
    *v3 = 0;
  result = *(_QWORD *)(a1 + 136);
  if ( result )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(a1 + 48) )
      {
        v5 = 0LL;
LABEL_7:
        _InterlockedAnd64((volatile signed __int64 *)(result + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(CurrentIrql - 2) <= 0xDu )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v16 = (SchedulerAssist[5] & 0xFFFF0007) == 0;
            SchedulerAssist[5] &= 0xFFFF0007;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(2uLL);
        result = v5;
        if ( !v5 )
          break;
      }
      else
      {
        v5 = *(_QWORD *)result;
        if ( !*(_QWORD *)result )
          goto LABEL_7;
        _InterlockedAnd64((volatile signed __int64 *)(result + 24), 0x7FFFFFFFFFFFFFFFuLL);
        result = v5;
      }
    }
  }
  if ( *(_BYTE *)(a1 + 58) )
  {
    v12 = *(_QWORD *)(a1 + 144);
    v21 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v21);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    result = *(_QWORD *)(a1 + 144);
    _InterlockedAnd64((volatile signed __int64 *)(result + 24), 0x7FFFFFFFFFFFFFFFuLL);
    *(_QWORD *)(a1 + 144) = 0LL;
  }
  v6 = (_DWORD *)(a1 + 44);
  if ( !*(_QWORD *)(a1 + 112) || (*v6 & 0x100) == 0 )
  {
    result = (unsigned int)KiIrqlFlags;
    v11 = *(unsigned __int8 *)(a1 + 59);
    if ( KiIrqlFlags )
    {
      v17 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && (unsigned __int8)v11 <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = v18->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v16 = ((unsigned int)result & v19[5]) == 0;
        v19[5] &= result;
        if ( v16 )
          result = KiRemoveSystemWorkPriorityKick(v18);
      }
    }
    __writecr8(v11);
  }
  if ( (*v6 & 0x200) == 0 )
  {
    v7 = *(__int64 ***)(a1 + 136);
    if ( v7 )
    {
      do
      {
        v8 = *(_DWORD *)(a1 + 40);
        v9 = *v7;
        result = *((unsigned __int8 *)v7 + 34) >> 6;
        if ( (_DWORD)result != v8 )
          result = MiChangePageAttributeContiguous(
                     0xAAAAAAAAAAAAAAABuLL * ((__int64)(v7 + 0x44000000000LL) >> 4),
                     *(_QWORD *)(a1 + 64),
                     v8,
                     0);
        v7 = (__int64 **)v9;
      }
      while ( v9 );
    }
  }
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  return result;
}
