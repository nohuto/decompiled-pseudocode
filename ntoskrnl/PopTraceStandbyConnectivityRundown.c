/*
 * XREFs of PopTraceStandbyConnectivityRundown @ 0x14098FB84
 * Callers:
 *     PopDiagTraceControlCallback @ 0x14085EC40 (PopDiagTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void PopTraceStandbyConnectivityRundown()
{
  REGHANDLE v0; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  int *v2; // [rsp+40h] [rbp-28h]
  int v3; // [rsp+48h] [rbp-20h]
  int v4; // [rsp+4Ch] [rbp-1Ch]

  if ( PopDiagHandleRegistered )
  {
    v0 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_STANDBY_CONNECTIVITY_RUNDOWN) )
    {
      UserData.Reserved = 0;
      v4 = 0;
      UserData.Ptr = (ULONGLONG)&PopNetStandbyState;
      UserData.Size = 4;
      v2 = &PopNetStandbyReason;
      v3 = 4;
      EtwWrite(v0, &POP_ETW_EVENT_STANDBY_CONNECTIVITY_RUNDOWN, 0LL, 2u, &UserData);
    }
  }
}
