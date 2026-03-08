/*
 * XREFs of IopPassiveInterruptWorker @ 0x14039E620
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1402AA110 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402ABED0 (KeSetSystemGroupAffinityThread.c)
 *     KiInterruptDispatchCommon @ 0x14039E224 (KiInterruptDispatchCommon.c)
 *     IopDereferencePassiveInterruptBlock @ 0x14039E56C (IopDereferencePassiveInterruptBlock.c)
 *     IopAcquirePassiveInterruptBlockLock @ 0x14039E744 (IopAcquirePassiveInterruptBlockLock.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     IopAcquireReleaseDispatcherLock @ 0x140847424 (IopAcquireReleaseDispatcherLock.c)
 */

void __fastcall IopPassiveInterruptWorker(char *P, __int64 a2)
{
  volatile signed __int64 *v3; // rcx
  unsigned __int8 v4; // di
  unsigned __int8 v5; // di
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r9
  _DWORD *v13; // r8
  int v14; // eax
  char v15[8]; // [rsp+30h] [rbp-30h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-28h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-18h] BYREF

  v15[0] = 0;
  LOBYTE(a2) = 1;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  IopAcquireReleaseDispatcherLock(P, a2);
  if ( !P[28] )
  {
    Affinity = *(struct _GROUP_AFFINITY *)(P + 40);
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  IopAcquirePassiveInterruptBlockLock(P, v15);
  while ( 1 )
  {
    v3 = (volatile signed __int64 *)(P + 56);
    if ( !P[65] )
      break;
    P[65] = 0;
    KxReleaseSpinLock(v3);
    if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
    {
      v4 = v15[0];
      if ( v15[0] <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v4 = v15[0];
        v9 = ~(unsigned __int16)(-1LL << (v15[0] + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v4 = v15[0];
    }
    __writecr8(v4);
    KiInterruptDispatchCommon(P[28] != 0, *((_DWORD *)P + 5), 1, 0LL, 0LL);
    IopAcquirePassiveInterruptBlockLock(P, v15);
  }
  P[64] = 0;
  KxReleaseSpinLock(v3);
  if ( KiIrqlFlags && (v11 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && v11 <= 0xFu )
  {
    v5 = v15[0];
    if ( v15[0] <= 0xFu && v11 >= 2u )
    {
      v12 = KeGetCurrentPrcb();
      v13 = v12->SchedulerAssist;
      v5 = v15[0];
      v14 = ~(unsigned __int16)(-1LL << (v15[0] + 1));
      v10 = (v14 & v13[5]) == 0;
      v13[5] &= v14;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick(v12);
    }
  }
  else
  {
    v5 = v15[0];
  }
  __writecr8(v5);
  if ( !P[28] )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  IopAcquireReleaseDispatcherLock(P, 0LL);
  if ( !*((_DWORD *)P + 8) )
    ((void (__fastcall *)(_QWORD, __int64))off_140C01B88[0])(*((unsigned int *)P + 6), 2LL);
  IopDereferencePassiveInterruptBlock(P);
}
