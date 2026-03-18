/*
 * XREFs of PopDiagTraceFxDevicePowered @ 0x140310990
 * Callers:
 *     PopFxCompleteDevicePowerRequired @ 0x140310900 (PopFxCompleteDevicePowerRequired.c)
 * Callees:
 *     EtwWriteEx @ 0x1402580C0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140258300 (EtwEventEnabled.c)
 *     PopFxAddLogEntry @ 0x140312914 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceFxDevicePowered(__int64 a1)
{
  BOOLEAN result; // al
  char v2; // r9
  REGHANDLE v3; // rbx
  __int64 v4; // [rsp+40h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-20h] BYREF

  v4 = a1;
  result = PopFxAddLogEntry(a1, 0LL, 7LL, 0LL);
  if ( PopDiagHandleRegistered != v2 )
  {
    v3 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_POWERED);
    if ( result )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v4;
      UserData.Size = 8;
      return EtwWriteEx(v3, &POP_ETW_EVENT_DEVICE_POWERED, 0LL, 1u, 0LL, 0LL, 1u, &UserData);
    }
  }
  return result;
}
