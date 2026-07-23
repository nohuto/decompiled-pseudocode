/*
 * XREFs of RtlGetControlSecurityDescriptor @ 0x14066A9A0
 * Callers:
 *     AdtpIsSDValidSelfRelative @ 0x1403F9C24 (AdtpIsSDValidSelfRelative.c)
 *     ObpInsertOrLocateNamedObject @ 0x140657720 (ObpInsertOrLocateNamedObject.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x14066A500 (LocalConvertSDToStringSD_Rev1.c)
 *     SepHasCriticalAcesRemoved @ 0x14066CDA0 (SepHasCriticalAcesRemoved.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetControlSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_DESCRIPTOR_CONTROL Control,
        PULONG Revision)
{
  *Revision = *(unsigned __int8 *)SecurityDescriptor;
  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  *Control = *((_WORD *)SecurityDescriptor + 1);
  return 0;
}
