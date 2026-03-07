unsigned __int64 __fastcall MiReferenceInPageFile(__int64 a1, unsigned int a2)
{
  __int64 *v2; // rdi
  __int64 v5; // rdi
  unsigned __int64 v6; // rbp
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rsi
  unsigned __int64 v11; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  int CanPageMove; // eax
  int v18; // r8d

  v2 = *(__int64 **)(a1 + 208);
  if ( !v2 )
    return 0LL;
  v5 = *v2;
  v6 = ObFastReferenceObject(v5 + 64, 1666411853LL);
  if ( !v6 )
  {
    v11 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 72));
    v6 = *(_QWORD *)(v5 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v6 )
      ObfReferenceObjectWithTag((PVOID)(*(_QWORD *)(v5 + 64) & 0xFFFFFFFFFFFFFFF0uLL), 0x63536D4Du);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v11);
  }
  if ( (*(_DWORD *)(v5 + 56) & 0x20) != 0 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v5 + 112));
    v8 = *(_QWORD *)(a1 + 256);
    v9 = *(_QWORD *)(v5 + 96);
    if ( !v8 )
      v8 = a1 + 272;
    v10 = 48LL * *(_QWORD *)(v8 + 48) - 0x220000000000LL;
    *(_DWORD *)(a1 + 188) = MiComputeImagePteIndex(v10, a2);
    if ( *(_QWORD *)(v9 + 32) )
    {
      *(_DWORD *)(a1 + 192) |= 0x10000u;
      if ( (MiFlags & 0x20000) != 0 )
      {
        CanPageMove = MiCanPageMove(v10);
        if ( !CanPageMove
          || (*(_DWORD *)(v5 + 92) & 0xC0000) != 0 && (((unsigned __int8)*(_DWORD *)(v10 + 16) >> 5) & 2) != 0 )
        {
          *(_DWORD *)(a1 + 192) = v18 & 0xFFFEFFFF;
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 208) = 0LL;
  }
  return v6;
}
