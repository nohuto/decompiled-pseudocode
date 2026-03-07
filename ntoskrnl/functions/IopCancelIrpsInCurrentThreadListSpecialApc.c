LONG __fastcall IopCancelIrpsInCurrentThreadListSpecialApc(__int64 a1, __int64 a2, __int64 a3, _BYTE **a4)
{
  struct _KTHREAD *CurrentThread; // r15
  _BYTE *v6; // r14
  char v7; // bp
  unsigned __int64 v8; // rbx
  unsigned int *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r8d
  __int64 v13; // rax
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r10
  _DWORD *v17; // r8
  int v18; // eax
  bool v19; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v23; // eax

  CurrentThread = KeGetCurrentThread();
  v6 = *a4;
  v7 = 0;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CurrentThread[1].WaitBlock[0].Thread);
  v9 = *(unsigned int **)&CurrentThread[1].SystemCallNumber;
  *v6 = 0;
  *(_DWORD *)(a1 + 132) = 0;
  if ( &CurrentThread[1].SystemCallNumber == v9 )
  {
    KxReleaseSpinLock((volatile signed __int64 *)&CurrentThread[1].WaitBlock[0].Thread);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v19 = (v23 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v23;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v8);
  }
  else
  {
    do
    {
      if ( *((char *)v9 + 35) < *((char *)v9 + 34) + 2 )
      {
        v10 = *(_QWORD *)(a1 + 96);
        if ( !v10 || *((_QWORD *)v9 + 5) == v10 )
        {
          v11 = *(_QWORD *)(a1 + 88);
          if ( !v11 || *((_QWORD *)v9 + 20) == v11 )
          {
            v12 = *(v9 - 4);
            if ( (v12 & 0x402) == 0 && ((v12 & 0x84) != 0 || (*((_BYTE *)v9 + 39) & 2) != 0) )
            {
              *((_BYTE *)v9 + 36) = 1;
              v7 = 1;
              *v6 = 1;
              v10 = *(_QWORD *)(a1 + 96);
              *(_DWORD *)(a1 + 132) = 1;
            }
          }
        }
        if ( !*(_BYTE *)(a1 + 128) && (!v10 || *((_QWORD *)v9 + 5) == v10) )
        {
          v13 = *(_QWORD *)(a1 + 88);
          if ( (!v13 || *((_QWORD *)v9 + 20) == v13) && (*(v9 - 4) & 2) == 0 )
          {
            *v6 = 1;
            *(_DWORD *)(a1 + 132) = 1;
          }
        }
      }
      v9 = *(unsigned int **)v9;
    }
    while ( &CurrentThread[1].SystemCallNumber != v9 );
    KxReleaseSpinLock((volatile signed __int64 *)&CurrentThread[1].WaitBlock[0].Thread);
    if ( KiIrqlFlags )
    {
      v15 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = v16->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v19 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
    __writecr8(v8);
    if ( v7 )
      KeAlertThread(CurrentThread, 0LL);
  }
  return KeSetEvent((PRKEVENT)(a1 + 104), 0, 0);
}
