/*
 * XREFs of RtlSetInformationAcl @ 0x1800E9DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlSetInformationAcl(
        PACL Acl,
        PVOID AclInformation,
        ULONG AclInformationLength,
        ACL_INFORMATION_CLASS AclInformationClass)
{
  if ( (unsigned __int8)(Acl->AclRevision - 2) > 2u )
    return -1073741811;
  if ( AclInformationClass != AclRevisionInformation )
    return -1073741821;
  if ( AclInformationLength < 4 )
    return -1073741789;
  if ( *(_DWORD *)AclInformation < (unsigned int)Acl->AclRevision )
    return -1073741811;
  Acl->AclRevision = *(_BYTE *)AclInformation;
  return 0;
}
