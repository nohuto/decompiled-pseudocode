/*
 * XREFs of HalpTscTraceStatus @ 0x1405083E0
 * Callers:
 *     HalpTscAdvSynchLeader @ 0x140387D38 (HalpTscAdvSynchLeader.c)
 *     HalpTscFallbackToPlatformSource @ 0x1405082E4 (HalpTscFallbackToPlatformSource.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall HalpTscTraceStatus(PCEVENT_DESCRIPTOR EventDescriptor, int a2)
{
  REGHANDLE v3; // rdi
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+78h] [rbp+10h] BYREF

  v5 = a2;
  if ( HalpDiagnosticEventsRegistered )
  {
    v3 = HalpDiagnosticEventHandle;
    if ( EtwEventEnabled(HalpDiagnosticEventHandle, EventDescriptor) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v5;
      UserData.Size = 4;
      EtwWriteEx(v3, EventDescriptor, 0LL, 0, 0LL, 0LL, 1u, &UserData);
    }
  }
}
