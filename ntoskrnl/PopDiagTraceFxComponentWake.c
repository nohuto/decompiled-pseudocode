/*
 * XREFs of PopDiagTraceFxComponentWake @ 0x140590BCC
 * Callers:
 *     PoFxSetComponentWake @ 0x1405863F0 (PoFxSetComponentWake.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     PopFxAddLogEntry @ 0x140306584 (PopFxAddLogEntry.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceFxComponentWake(__int64 a1, int a2, unsigned __int8 a3)
{
  int v3; // edi
  BOOLEAN result; // al
  REGHANDLE v5; // rbx
  int v6; // [rsp+48h] [rbp+7h] BYREF
  __int64 v7; // [rsp+50h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+17h] BYREF
  int *v9; // [rsp+68h] [rbp+27h]
  int v10; // [rsp+70h] [rbp+2Fh]
  int v11; // [rsp+74h] [rbp+33h]
  int *v12; // [rsp+78h] [rbp+37h]
  int v13; // [rsp+80h] [rbp+3Fh]
  int v14; // [rsp+84h] [rbp+43h]
  int v15; // [rsp+B0h] [rbp+6Fh] BYREF

  v15 = a2;
  v3 = a3;
  v7 = a1;
  result = (unsigned __int8)PopFxAddLogEntry(a1, a2, 11, a3);
  if ( PopDiagHandleRegistered )
  {
    v5 = PopDiagHandle;
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_WAKE);
    if ( result )
    {
      UserData.Reserved = 0;
      v11 = 0;
      v14 = 0;
      UserData.Ptr = (ULONGLONG)&v7;
      v10 = 4;
      v9 = &v15;
      v13 = 4;
      v12 = &v6;
      v6 = v3;
      UserData.Size = 8;
      return EtwWriteEx(v5, &POP_ETW_EVENT_COMPONENT_WAKE, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return result;
}
