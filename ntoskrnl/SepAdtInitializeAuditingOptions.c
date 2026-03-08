/*
 * XREFs of SepAdtInitializeAuditingOptions @ 0x140B615C0
 * Callers:
 *     SeRmInitPhase1 @ 0x140B614EC (SeRmInitPhase1.c)
 * Callees:
 *     NtSetEvent @ 0x1407598A0 (NtSetEvent.c)
 *     NtClose @ 0x1407C00E0 (NtClose.c)
 *     AdtpInitializeAuditingCommon @ 0x140841394 (AdtpInitializeAuditingCommon.c)
 *     SepAdtInitializeCrashOnFail @ 0x1408413D4 (SepAdtInitializeCrashOnFail.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x140841434 (SepAdtOpenRegAndSetupNotification.c)
 *     SepAdtOpenEtwReadyEvent @ 0x1408414C0 (SepAdtOpenEtwReadyEvent.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x140841CF8 (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtInitializeBounds @ 0x140841D58 (SepAdtInitializeBounds.c)
 */

int SepAdtInitializeAuditingOptions()
{
  int result; // eax
  int v1; // ebx
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  Handle = 0LL;
  result = AdtpInitializeAuditingCommon();
  if ( result >= 0 )
  {
    result = SepAdtOpenEtwReadyEvent((unsigned __int64)&Handle);
    if ( result >= 0 )
    {
      v1 = NtSetEvent(Handle, 0LL);
      NtClose(Handle);
      if ( v1 >= 0 )
      {
        result = SepAdtOpenRegAndSetupNotification();
        v1 = result;
        if ( result < 0 )
          return result;
        SepAdtInitializeCrashOnFail();
        SepAdtInitializePrivilegeAuditing();
        SepAdtInitializeBounds();
      }
      return v1;
    }
  }
  return result;
}
