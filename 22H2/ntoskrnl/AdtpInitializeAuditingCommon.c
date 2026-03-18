/*
 * XREFs of AdtpInitializeAuditingCommon @ 0x1408439E4
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140B648B0 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     AdtpDbInitializePrivilegeObject @ 0x14039F1D0 (AdtpDbInitializePrivilegeObject.c)
 *     AdtpInitializeDriveLetters @ 0x140843C80 (AdtpInitializeDriveLetters.c)
 *     AdtpObjsInitialize @ 0x140843E58 (AdtpObjsInitialize.c)
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
