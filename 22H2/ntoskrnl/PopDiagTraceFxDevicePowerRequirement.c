/*
 * XREFs of PopDiagTraceFxDevicePowerRequirement @ 0x140260470
 * Callers:
 *     PopFxProcessWork @ 0x1402600A4 (PopFxProcessWork.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x1403A59C0 (PopFxIdleTimeoutDpcRoutine.c)
 *     PopFxDeliverDevicePowerRequired @ 0x1403A6468 (PopFxDeliverDevicePowerRequired.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x1403C8054 (PopFxUpdateDeviceIdleTimer.c)
 * Callees:
 *     EtwEventEnabled @ 0x14021BEF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x14025D570 (EtwWriteEx.c)
 *     PopFxAddLogEntry @ 0x140260514 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceFxDevicePowerRequirement(__int64 a1, char a2, unsigned __int8 a3)
{
  int v3; // esi
  const EVENT_DESCRIPTOR *v4; // rbx
  __int64 v5; // r8
  BOOLEAN result; // al
  REGHANDLE v7; // rdi
  int v8; // [rsp+40h] [rbp-48h] BYREF
  __int64 v9; // [rsp+48h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-38h] BYREF
  int *v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]

  v3 = a3;
  v9 = a1;
  if ( a2 == 1 )
  {
    v4 = &POP_ETW_EVENT_DEVICE_POWER_REQUIREMENT_FROM_PEP;
    v5 = 4LL;
  }
  else
  {
    v4 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_DEVICE_POWER_REQUIREMENT_TO_DEVICE;
    v5 = 5LL;
  }
  result = PopFxAddLogEntry(a1, 0LL, v5);
  if ( PopDiagHandleRegistered )
  {
    v7 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, v4);
    if ( result )
    {
      UserData.Reserved = 0;
      v13 = 0;
      UserData.Ptr = (ULONGLONG)&v9;
      v8 = v3;
      v11 = &v8;
      UserData.Size = 8;
      v12 = 4;
      return EtwWriteEx(v7, v4, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
    }
  }
  return result;
}
