/*
 * XREFs of AdtpInitializeAuditingCommon @ 0x140841394
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140B615C0 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     AdtpDbInitializePrivilegeObject @ 0x14039A930 (AdtpDbInitializePrivilegeObject.c)
 *     AdtpInitializeDriveLetters @ 0x140841630 (AdtpInitializeDriveLetters.c)
 *     AdtpObjsInitialize @ 0x140841808 (AdtpObjsInitialize.c)
 */

__int64 AdtpInitializeAuditingCommon()
{
  __int64 result; // rax
  unsigned int v1; // ebx

  AdtpNullSid = 257;
  AdtpRegisteredWithEtw = 1;
  result = AdtpInitializeDriveLetters();
  if ( (int)result >= 0 )
  {
    result = AdtpObjsInitialize();
    v1 = result;
    if ( (int)result >= 0 )
    {
      AdtpDbInitializePrivilegeObject();
      return v1;
    }
  }
  return result;
}
