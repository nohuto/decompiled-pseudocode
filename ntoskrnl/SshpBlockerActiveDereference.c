/*
 * XREFs of SshpBlockerActiveDereference @ 0x1402F102C
 * Callers:
 *     SleepstudyHelperBlockerActiveDereference @ 0x1402F1010 (SleepstudyHelperBlockerActiveDereference.c)
 *     SleepstudyHelperDestroyBlocker @ 0x1403AFD80 (SleepstudyHelperDestroyBlocker.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     SshpSetBlockerActive @ 0x1402F11C8 (SshpSetBlockerActive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall SshpBlockerActiveDereference(PKSPIN_LOCK SpinLock, int a2)
{
  PKSPIN_LOCK v4; // rbx
  unsigned __int64 v5; // rdi
  bool v6; // zf
  volatile signed __int64 *v7; // rcx
  unsigned int v8; // ebp
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r10
  _DWORD *v12; // r9
  int v13; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v16; // eax
  _DWORD *SchedulerAssist; // r8
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r10
  int v20; // edx
  _DWORD *v21; // r9

  if ( !SpinLock )
    return (unsigned int)-1073741811;
  v4 = SpinLock;
  while ( 1 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(v4);
    if ( v4 == SpinLock )
      break;
    v6 = (*((_DWORD *)v4 + 4))-- == 1;
    if ( !v6 )
    {
      v7 = (volatile signed __int64 *)v4;
LABEL_6:
      KxReleaseSpinLock(v7);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v6 = (v16 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v16;
          if ( v6 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v5);
      return 0;
    }
LABEL_5:
    v6 = *((_DWORD *)v4 + 3) == a2;
    *((_DWORD *)v4 + 3) -= a2;
    v7 = (volatile signed __int64 *)v4;
    if ( !v6 )
      goto LABEL_6;
    SshpSetBlockerActive(v4, 0LL);
    KxReleaseSpinLock((volatile signed __int64 *)v4);
    if ( KiIrqlFlags )
    {
      v10 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v10 <= 0xFu && (unsigned __int8)v5 <= 0xFu && v10 >= 2u )
      {
        v11 = KeGetCurrentPrcb();
        v12 = v11->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v6 = (v13 & v12[5]) == 0;
        v12[5] &= v13;
        if ( v6 )
          KiRemoveSystemWorkPriorityKick(v11);
      }
    }
    __writecr8(v5);
    v4 = (PKSPIN_LOCK)v4[36];
    a2 = 1;
    if ( !v4 )
      return 0;
  }
  if ( *((_DWORD *)v4 + 3) >= a2 )
    goto LABEL_5;
  v8 = -1073741675;
  KxReleaseSpinLock((volatile signed __int64 *)v4);
  if ( KiIrqlFlags )
  {
    v18 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && (unsigned __int8)v5 <= 0xFu && v18 >= 2u )
    {
      v19 = KeGetCurrentPrcb();
      v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v21 = v19->SchedulerAssist;
      v6 = (v20 & v21[5]) == 0;
      v21[5] &= v20;
      if ( v6 )
        KiRemoveSystemWorkPriorityKick(v19);
    }
  }
  __writecr8(v5);
  return v8;
}
