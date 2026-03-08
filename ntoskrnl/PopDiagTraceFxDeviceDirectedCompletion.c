/*
 * XREFs of PopDiagTraceFxDeviceDirectedCompletion @ 0x140591030
 * Callers:
 *     PopFxCompleteDirectedPowerTransition @ 0x1405871FC (PopFxCompleteDirectedPowerTransition.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     PopFxAddLogEntry @ 0x140306584 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceFxDeviceDirectedCompletion(__int64 a1, unsigned __int8 a2)
{
  int v2; // edi
  BOOLEAN result; // al
  REGHANDLE v4; // rbx
  int v5; // ecx
  int v6; // [rsp+40h] [rbp+7h] BYREF
  int v7; // [rsp+44h] [rbp+Bh] BYREF
  __int64 v8; // [rsp+48h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+17h] BYREF
  int *v10; // [rsp+60h] [rbp+27h]
  int v11; // [rsp+68h] [rbp+2Fh]
  int v12; // [rsp+6Ch] [rbp+33h]
  int *v13; // [rsp+70h] [rbp+37h]
  int v14; // [rsp+78h] [rbp+3Fh]
  int v15; // [rsp+7Ch] [rbp+43h]

  v2 = a2;
  v8 = a1;
  result = (unsigned __int8)PopFxAddLogEntry(a1, 0, 26, a2);
  if ( PopDiagHandleRegistered )
  {
    v4 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_POWER_TRANSITION_END);
    if ( result )
    {
      v5 = *(_DWORD *)(v8 + 156);
      UserData.Reserved = 0;
      v12 = 0;
      v15 = 0;
      UserData.Ptr = (ULONGLONG)&v8;
      v10 = &v6;
      v7 = v5;
      v13 = &v7;
      v11 = 4;
      v14 = 4;
      v6 = v2;
      UserData.Size = 8;
      return EtwWriteEx(v4, &POP_ETW_EVENT_DIRECTED_POWER_TRANSITION_END, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return result;
}
