/*
 * XREFs of AdtpInitializeAuditingCommon @ 0x14079E8B0
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140A4BB0C (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     AdtpDbInitializePrivilegeObject @ 0x1403B45F4 (AdtpDbInitializePrivilegeObject.c)
 *     AdtpObjsInitialize @ 0x14079E8F0 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x14079EDE8 (AdtpInitializeDriveLetters.c)
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
