/*
 * XREFs of PopDiagTraceDeepSleepConstraintRundown @ 0x140590238
 * Callers:
 *     PopDiagTraceControlCallback @ 0x14085EC40 (PopDiagTraceControlCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void PopDiagTraceDeepSleepConstraintRundown()
{
  unsigned __int16 v0; // bx
  unsigned int v1; // eax
  unsigned int v2; // r8d
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  ULONG UserDataCount; // r9d
  bool v6; // zf
  _DWORD *v7; // rcx
  __int64 v8; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  unsigned __int16 v13; // [rsp+40h] [rbp-118h] BYREF
  _DWORD v14[14]; // [rsp+48h] [rbp-110h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-D8h] BYREF
  _QWORD v16[22]; // [rsp+90h] [rbp-C8h]

  v0 = 0;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_DEEP_SLEEP_CONSTRAINT_RUNDOWN) )
  {
    LOBYTE(v1) = KeAcquireSpinLockRaiseToDpc(&PopDeepSleepDisengageReasonLock);
    v2 = PopDeepSleepDisengageReasonMask;
    v3 = (unsigned __int8)v1;
    *(_QWORD *)&UserData.Size = 2LL;
    v4 = (unsigned int)PopDeepSleepDisengageReasonMask
       - (((unsigned __int64)(unsigned int)PopDeepSleepDisengageReasonMask >> 1) & 0x5555555555555555LL);
    v13 = (0x101010101010101LL
         * (((v4 & 0x3333333333333333LL)
           + ((v4 >> 2) & 0x3333333333333333LL)
           + (((v4 & 0x3333333333333333LL) + ((v4 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    UserDataCount = v13 + 1;
    UserData.Ptr = (ULONGLONG)&v13;
    v6 = !_BitScanForward(&v1, PopDeepSleepDisengageReasonMask);
    v14[0] = v1;
    if ( !v6 )
    {
      v7 = v14;
      do
      {
        v2 &= v2 - 1;
        v8 = 2LL * v0++;
        v16[v8] = v7;
        v16[v8 + 1] = 4LL;
        v7 = &v14[v0];
        v6 = !_BitScanForward((unsigned int *)&v8, v2);
        *v7 = v8;
      }
      while ( !v6 );
    }
    EtwWriteEx(PopDiagHandle, &POP_ETW_DEEP_SLEEP_CONSTRAINT_RUNDOWN, 0LL, 0, 0LL, 0LL, UserDataCount, &UserData);
    KxReleaseSpinLock((volatile signed __int64 *)&PopDeepSleepDisengageReasonLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v6 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v6 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v3);
  }
}
