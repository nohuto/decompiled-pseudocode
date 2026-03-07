__int64 __fastcall SleepstudyHelperBlockerActiveReference(PKSPIN_LOCK SpinLock)
{
  PKSPIN_LOCK v2; // rbx
  __int64 v3; // rdx
  unsigned __int64 v4; // rdi
  volatile signed __int64 *v5; // rcx
  unsigned int v6; // esi
  unsigned __int8 v8; // al
  struct _KPRCB *v9; // r10
  _DWORD *v10; // r9
  int v11; // eax
  bool v12; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v15; // eax
  _DWORD *SchedulerAssist; // r8
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r10
  int v19; // edx
  _DWORD *v20; // r9

  if ( !SpinLock )
    return (unsigned int)-1073741811;
  v2 = SpinLock;
  while ( 1 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(v2);
    if ( v2 == SpinLock )
      break;
    if ( ++*((_DWORD *)v2 + 4) != 1 )
    {
      v5 = (volatile signed __int64 *)v2;
LABEL_6:
      KxReleaseSpinLock(v5);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v12 = (v15 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v15;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v4);
      return 0;
    }
LABEL_5:
    ++*((_DWORD *)v2 + 3);
    v5 = (volatile signed __int64 *)v2;
    if ( *((_DWORD *)v2 + 3) != 1 )
      goto LABEL_6;
    LOBYTE(v3) = 1;
    SshpSetBlockerActive(v2, v3);
    KxReleaseSpinLock((volatile signed __int64 *)v2);
    if ( KiIrqlFlags )
    {
      v8 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v8 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v8 >= 2u )
      {
        v9 = KeGetCurrentPrcb();
        v10 = v9->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v12 = (v11 & v10[5]) == 0;
        v10[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(v9);
      }
    }
    __writecr8(v4);
    v2 = (PKSPIN_LOCK)v2[36];
    if ( !v2 )
      return 0;
  }
  if ( *((_DWORD *)v2 + 3) != 0x7FFFFFFF )
    goto LABEL_5;
  v6 = -1073741675;
  KxReleaseSpinLock((volatile signed __int64 *)v2);
  if ( KiIrqlFlags )
  {
    v17 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && (unsigned __int8)v4 <= 0xFu && v17 >= 2u )
    {
      v18 = KeGetCurrentPrcb();
      v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v20 = v18->SchedulerAssist;
      v12 = (v19 & v20[5]) == 0;
      v20[5] &= v19;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick(v18);
    }
  }
  __writecr8(v4);
  return v6;
}
