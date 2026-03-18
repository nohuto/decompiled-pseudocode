/*
 * XREFs of SepAdtInitializeAuditingOptions @ 0x140B22004
 * Callers:
 *     SeRmInitPhase1 @ 0x140B21F30 (SeRmInitPhase1.c)
 * Callees:
 *     NtSetEvent @ 0x14069E0C0 (NtSetEvent.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     SepAdtInitializeBounds @ 0x14084CA74 (SepAdtInitializeBounds.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x14084CAF8 (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtInitializeCrashOnFail @ 0x14084CB58 (SepAdtInitializeCrashOnFail.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x14084CBB8 (SepAdtOpenRegAndSetupNotification.c)
 *     SepAdtOpenEtwReadyEvent @ 0x14084CC44 (SepAdtOpenEtwReadyEvent.c)
 *     AdtpInitializeAuditingCommon @ 0x14084CCD8 (AdtpInitializeAuditingCommon.c)
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
