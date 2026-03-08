/*
 * XREFs of PopDiagTraceSystemIdleRundown @ 0x14098ECD0
 * Callers:
 *     PopDiagTraceControlCallback @ 0x14085EC40 (PopDiagTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void PopDiagTraceSystemIdleRundown()
{
  REGHANDLE v0; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-28h] BYREF

  if ( PopDiagHandleRegistered )
  {
    v0 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_SYSTEM_IDLE_RUNDOWN) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&PopIdleScanInterval;
      UserData.Size = 4;
      EtwWrite(v0, &POP_ETW_EVENT_SYSTEM_IDLE_RUNDOWN, 0LL, 1u, &UserData);
    }
  }
}
