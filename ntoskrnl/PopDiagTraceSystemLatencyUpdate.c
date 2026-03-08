/*
 * XREFs of PopDiagTraceSystemLatencyUpdate @ 0x1402D2140
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x1402D1FF0 (PoFxSendSystemLatencyUpdate.c)
 *     PopDiagTraceControlCallback @ 0x14085EC40 (PopDiagTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceSystemLatencyUpdate(char a1, int a2)
{
  REGHANDLE v3; // rbx
  const EVENT_DESCRIPTOR *v4; // rdx
  const EVENT_DESCRIPTOR *v5; // rdx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+68h] [rbp+10h] BYREF

  v7 = a2;
  if ( PopDiagHandleRegistered )
  {
    v3 = PopDiagHandle;
    v4 = &POP_ETW_EVENT_SYSTEM_LATENCY_UPDATE;
    if ( a1 )
      v4 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_SYSTEM_LATENCY_RUNDOWN;
    if ( EtwEventEnabled(PopDiagHandle, v4) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v7;
      v5 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_SYSTEM_LATENCY_RUNDOWN;
      UserData.Size = 4;
      if ( !a1 )
        v5 = &POP_ETW_EVENT_SYSTEM_LATENCY_UPDATE;
      EtwWrite(v3, v5, 0LL, 1u, &UserData);
    }
  }
}
