/*
 * XREFs of PopDiagTraceFxDeviceDirectedTransition @ 0x140591134
 * Callers:
 *     PopFxHandleDirectedPowerTransition @ 0x140588000 (PopFxHandleDirectedPowerTransition.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     PopFxAddLogEntry @ 0x140306584 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceFxDeviceDirectedTransition(__int64 a1, unsigned __int8 a2)
{
  int v2; // edi
  BOOLEAN result; // al
  REGHANDLE v4; // rbx
  int v5; // [rsp+40h] [rbp-48h] BYREF
  __int64 v6; // [rsp+48h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-38h] BYREF
  int *v8; // [rsp+60h] [rbp-28h]
  int v9; // [rsp+68h] [rbp-20h]
  int v10; // [rsp+6Ch] [rbp-1Ch]

  v2 = a2;
  v6 = a1;
  result = (unsigned __int8)PopFxAddLogEntry(a1, 0, 25, a2);
  if ( PopDiagHandleRegistered )
  {
    v4 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_POWER_TRANSITION_START);
    if ( result )
    {
      UserData.Reserved = 0;
      v10 = 0;
      UserData.Ptr = (ULONGLONG)&v6;
      v5 = v2;
      v8 = &v5;
      UserData.Size = 8;
      v9 = 4;
      return EtwWriteEx(v4, &POP_ETW_EVENT_DIRECTED_POWER_TRANSITION_START, 0LL, 0, 0LL, 0LL, 2u, &UserData);
    }
  }
  return result;
}
