/*
 * XREFs of ExpWnfSpecializeSecurityDescriptor @ 0x14071C08C
 * Callers:
 *     NtCreateWnfStateName @ 0x14071BBD0 (NtCreateWnfStateName.c)
 *     ExpWnfLookupPermanentName @ 0x14071C320 (ExpWnfLookupPermanentName.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140299320 (RtlGetDaclSecurityDescriptor.c)
 *     RtlpApplyAclToObject @ 0x14071C11C (RtlpApplyAclToObject.c)
 *     RtlGetSaclSecurityDescriptor @ 0x14071C1D0 (RtlGetSaclSecurityDescriptor.c)
 */

NTSTATUS __fastcall ExpWnfSpecializeSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  NTSTATUS result; // eax
  BOOLEAN DaclPresent; // [rsp+38h] [rbp+18h] BYREF
  BOOLEAN DaclDefaulted; // [rsp+40h] [rbp+20h] BYREF
  PACL Dacl; // [rsp+48h] [rbp+28h] BYREF

  Dacl = 0LL;
  DaclPresent = 0;
  if ( RtlGetDaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, &DaclDefaulted) >= 0 && DaclPresent && Dacl )
    RtlpApplyAclToObject(Dacl, &ExpWnfNotificationMapping);
  result = RtlGetSaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, &DaclDefaulted);
  if ( result >= 0 && DaclPresent )
  {
    if ( Dacl )
      return RtlpApplyAclToObject(Dacl, &ExpWnfNotificationMapping);
  }
  return result;
}
