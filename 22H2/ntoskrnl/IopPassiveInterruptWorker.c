/*
 * XREFs of IopPassiveInterruptWorker @ 0x14050D4F0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035C8F0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035CA50 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     IopAcquirePassiveInterruptBlockLock @ 0x14050D0F4 (IopAcquirePassiveInterruptBlockLock.c)
 *     IopDereferencePassiveInterruptBlock @ 0x14050D170 (IopDereferencePassiveInterruptBlock.c)
 *     KiInterruptDispatchCommon @ 0x140521368 (KiInterruptDispatchCommon.c)
 *     IopAcquireReleaseDispatcherLock @ 0x1408A153C (IopAcquireReleaseDispatcherLock.c)
 */

void __fastcall IopPassiveInterruptWorker(char *P, __int64 a2)
{
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v4; // di
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  bool v8; // zf
  KSPIN_LOCK *v9; // rcx
  unsigned __int8 v10; // al
  unsigned __int8 v11; // di
  struct _KPRCB *v12; // r9
  _DWORD *v13; // r8
  int v14; // eax
  unsigned __int8 v15[8]; // [rsp+30h] [rbp-30h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-28h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-18h] BYREF

  v15[0] = 0;
  LOBYTE(a2) = 1;
  PreviousAffinity = 0LL;
  IopAcquireReleaseDispatcherLock(P, a2);
  if ( !P[28] )
  {
    Affinity = *(_GROUP_AFFINITY *)(P + 40);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  IopAcquirePassiveInterruptBlockLock((__int64)P, v15);
  while ( 1 )
  {
    v9 = (KSPIN_LOCK *)(P + 56);
    if ( !P[65] )
      break;
    P[65] = 0;
    KxReleaseSpinLock(v9);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v4 = v15[0];
      if ( v15[0] <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v4 = v15[0];
        v7 = ~(unsigned __int16)(-1LL << (v15[0] + 1));
        v8 = (v7 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v7;
        if ( v8 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    else
    {
      v4 = v15[0];
    }
    __writecr8(v4);
    KiInterruptDispatchCommon(P[28] != 0, *((_DWORD *)P + 5), 1, 0, 0LL);
    IopAcquirePassiveInterruptBlockLock((__int64)P, v15);
  }
  P[64] = 0;
  KxReleaseSpinLock(v9);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v10 = KeGetCurrentIrql(), v10 <= 0xFu) )
  {
    v11 = v15[0];
    if ( v15[0] <= 0xFu && v10 >= 2u )
    {
      v12 = KeGetCurrentPrcb();
      v13 = v12->SchedulerAssist;
      v11 = v15[0];
      v14 = ~(unsigned __int16)(-1LL << (v15[0] + 1));
      v8 = (v14 & v13[5]) == 0;
      v13[5] &= v14;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick((__int64)v12);
    }
  }
  else
  {
    v11 = v15[0];
  }
  __writecr8(v11);
  if ( !P[28] )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  IopAcquireReleaseDispatcherLock(P, 0LL);
  if ( !*((_DWORD *)P + 8) )
    ((void (__fastcall *)(_QWORD, __int64))off_140C00778[0])(*((unsigned int *)P + 6), 2LL);
  IopDereferencePassiveInterruptBlock(P);
}
