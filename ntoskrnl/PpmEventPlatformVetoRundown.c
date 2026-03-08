/*
 * XREFs of PpmEventPlatformVetoRundown @ 0x140598C84
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140860AA0 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PpmEventTracePreVetoAccounting @ 0x140599A10 (PpmEventTracePreVetoAccounting.c)
 */

void PpmEventPlatformVetoRundown()
{
  KIRQL v0; // al
  __int64 v1; // r8
  unsigned int v2; // edx
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _QWORD **v5; // rsi
  _QWORD *v6; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  unsigned int i; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  _QWORD *v14; // [rsp+58h] [rbp-28h]
  int v15; // [rsp+60h] [rbp-20h]
  int v16; // [rsp+64h] [rbp-1Ch]
  char *v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+70h] [rbp-10h]
  int v19; // [rsp+74h] [rbp-Ch]

  if ( PpmPlatformStates )
  {
    for ( i = 0; i < *(_DWORD *)PpmPlatformStates; ++i )
    {
      UserData.Reserved = 0;
      UserData.Size = 4;
      UserData.Ptr = (ULONGLONG)&i;
      PpmEventTracePreVetoAccounting(&PPM_ETW_PLATFORM_PRE_VETO_ACCOUNTING_RUNDOWN);
    }
    if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PLATFORM_IDLE_VETO_RUNDOWN) )
    {
      v0 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
      v1 = PpmPlatformStates;
      v2 = 0;
      i = 0;
      v3 = v0;
      if ( *(_DWORD *)PpmPlatformStates )
      {
        v4 = 0LL;
        do
        {
          UserData.Reserved = 0;
          UserData.Ptr = (ULONGLONG)&i;
          UserData.Size = 4;
          v5 = (_QWORD **)(448 * v4 + v1 + 88);
          v6 = *v5;
          if ( *v5 != v5 )
          {
            do
            {
              v16 = 0;
              v19 = 0;
              v14 = v6 + 2;
              v15 = 4;
              v17 = (char *)v6 + 20;
              v18 = 4;
              EtwWriteEx(PpmEtwHandle, &PPM_ETW_PLATFORM_IDLE_VETO_RUNDOWN, 0LL, 0, 0LL, 0LL, 3u, &UserData);
              v6 = (_QWORD *)*v6;
            }
            while ( v6 != v5 );
            v2 = i;
          }
          v1 = PpmPlatformStates;
          i = ++v2;
          v4 = v2;
        }
        while ( v2 < *(_DWORD *)PpmPlatformStates );
      }
      KxReleaseSpinLock((volatile signed __int64 *)&PpmIdleVetoLock);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v11 = (v10 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v10;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v3);
    }
  }
}
