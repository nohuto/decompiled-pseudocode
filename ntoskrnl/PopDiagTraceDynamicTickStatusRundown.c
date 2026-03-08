/*
 * XREFs of PopDiagTraceDynamicTickStatusRundown @ 0x14098BB88
 * Callers:
 *     PopDiagTraceControlCallback @ 0x14085EC40 (PopDiagTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeGetDynamicTickDisableReason @ 0x14056D328 (KeGetDynamicTickDisableReason.c)
 */

void PopDiagTraceDynamicTickStatusRundown()
{
  REGHANDLE v0; // rbx
  char DynamicTickDisableReason; // [rsp+30h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-20h] BYREF

  if ( PopDiagHandleRegistered )
  {
    v0 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DYNAMIC_TICK_STATUS_RUNDOWN) )
    {
      UserData.Reserved = 0;
      DynamicTickDisableReason = KeGetDynamicTickDisableReason();
      UserData.Size = 1;
      UserData.Ptr = (ULONGLONG)&DynamicTickDisableReason;
      EtwWrite(v0, &POP_ETW_EVENT_DYNAMIC_TICK_STATUS_RUNDOWN, 0LL, 1u, &UserData);
    }
  }
}
