/*
 * XREFs of NtAccessCheck @ 0x1403477F0
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x140346F70 (SeAccessCheckByType.c)
 */

NTSTATUS __cdecl NtAccessCheck(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        PGENERIC_MAPPING GenericMapping,
        PPRIVILEGE_SET PrivilegeSet,
        PULONG PrivilegeSetLength,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus)
{
  return SeAccessCheckByType(
           (__int16 *)SecurityDescriptor,
           0LL,
           ClientToken,
           DesiredAccess,
           0LL,
           0,
           (__int128 *)GenericMapping,
           PrivilegeSet,
           PrivilegeSetLength,
           GrantedAccess,
           AccessStatus,
           0);
}
