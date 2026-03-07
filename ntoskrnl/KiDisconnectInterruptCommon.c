__int64 __fastcall KiDisconnectInterruptCommon(int a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *v4; // rcx
  unsigned int v7; // r14d
  char v8; // r12
  KSPIN_LOCK *v9; // rdi
  unsigned __int8 v10; // bl
  __int64 v11; // rdx
  unsigned __int8 v13; // al
  unsigned __int8 v14; // bl
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r8
  int v17; // eax
  bool v18; // zf
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v22; // eax
  char v23[8]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v24; // [rsp+28h] [rbp-48h] BYREF
  char *v25; // [rsp+38h] [rbp-38h]
  _QWORD v26[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v27; // [rsp+50h] [rbp-20h]
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+58h] [rbp-18h] BYREF

  v26[1] = a3;
  v26[0] = 0LL;
  v25 = 0LL;
  v27 = 0LL;
  v4 = *(struct _KTHREAD **)(a2 + 152);
  v24 = 0LL;
  v23[0] = 0;
  v7 = -1073741585;
  v8 = 0;
  PreviousAffinity = 0LL;
  if ( v4 != KeGetCurrentThread() )
  {
    LOWORD(v24) = 1;
    v25 = (char *)&v24 + 8;
    *((_QWORD *)&v24 + 1) = (char *)&v24 + 8;
    v26[0] = &v24;
    BYTE2(v24) = 6;
    DWORD1(v24) = 0;
  }
  if ( a1 )
  {
    v9 = (KSPIN_LOCK *)(KiGlobalSecondaryIDT + 48LL * (unsigned int)(*(_DWORD *)(a2 + 88) - 256));
    KiAcquireSecondaryInterruptConnectLock(v9);
  }
  else
  {
    v9 = 0LL;
    KiAcquireInterruptConnectLock(*(unsigned int *)(a2 + 96), v23, &PreviousAffinity);
  }
  if ( *(_BYTE *)(a2 + 95) && (*(_DWORD *)(a2 + 104) & 2) == 0 )
  {
    if ( !*(_WORD *)(a2 + 102) )
    {
      if ( !a1 )
      {
        v7 = KiDisconnectInterruptInternal(a2, a3);
        goto LABEL_10;
      }
      v7 = KiDisconnectSecondaryInterruptInternal(a2);
      goto LABEL_20;
    }
    _InterlockedOr((volatile signed __int32 *)(a2 + 104), 2u);
    v8 = 1;
    *(_QWORD *)(a2 + 144) = v26;
  }
  if ( !a1 )
  {
LABEL_10:
    if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
    {
      v10 = v23[0];
      if ( v23[0] <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = v23[0];
        v22 = ~(unsigned __int16)(-1LL << (v23[0] + 1));
        v18 = (v22 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v22;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v10 = v23[0];
    }
    __writecr8(v10);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    goto LABEL_13;
  }
LABEL_20:
  KxReleaseSpinLock((volatile signed __int64 *)v9);
  if ( KiIrqlFlags && (v13 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && v13 <= 0xFu )
  {
    v14 = v23[0];
    if ( v23[0] <= 0xFu && v13 >= 2u )
    {
      v15 = KeGetCurrentPrcb();
      v16 = v15->SchedulerAssist;
      v14 = v23[0];
      v17 = ~(unsigned __int16)(-1LL << (v23[0] + 1));
      v18 = (v17 & v16[5]) == 0;
      v11 = (unsigned int)v17 & v16[5];
      v16[5] = v11;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick(v15);
    }
  }
  else
  {
    v14 = v23[0];
  }
  __writecr8(v14);
LABEL_13:
  if ( v26[0] && v8 )
  {
    LOBYTE(v11) = 1;
    KiSignalWaitDisconnectLock(v26[0], v11);
    return (unsigned int)v27;
  }
  return v7;
}
