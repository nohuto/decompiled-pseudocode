/*
 * XREFs of PopTraceSystemIdleS0LowPowerDozeTimerCancelled @ 0x14098FD78
 * Callers:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x14036D07C (PopIdleCancelAoAcDozeS4Timer.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall PopTraceSystemIdleS0LowPowerDozeTimerCancelled(int a1)
{
  REGHANDLE v1; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  int v3; // [rsp+60h] [rbp+8h] BYREF

  v3 = a1;
  if ( PopDiagHandleRegistered )
  {
    v1 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_S0_LOW_POWER_DOZE_TIMER_CANCELLED) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v3;
      UserData.Size = 4;
      EtwWrite(v1, &POP_ETW_EVENT_SYSTEM_IDLE_S0_LOW_POWER_DOZE_TIMER_CANCELLED, 0LL, 1u, &UserData);
    }
  }
}
