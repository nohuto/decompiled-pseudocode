/*
 * XREFs of NtCreateToken @ 0x140922760
 * Callers:
 *     <none>
 * Callees:
 *     NtCreateTokenEx @ 0x1405DC930 (NtCreateTokenEx.c)
 */

NTSTATUS __cdecl NtCreateToken(
        PHANDLE TokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        TOKEN_TYPE Type,
        PLUID AuthenticationId,
        PLARGE_INTEGER ExpirationTime,
        PTOKEN_USER User,
        PTOKEN_GROUPS Groups,
        PTOKEN_PRIVILEGES Privileges,
        PTOKEN_OWNER Owner,
        PTOKEN_PRIMARY_GROUP PrimaryGroup,
        PTOKEN_DEFAULT_DACL DefaultDacl,
        PTOKEN_SOURCE Source)
{
  return NtCreateTokenEx(
           TokenHandle,
           DesiredAccess,
           ObjectAttributes,
           Type,
           AuthenticationId,
           ExpirationTime,
           User,
           Groups,
           Privileges,
           0LL,
           0LL,
           0LL,
           0LL,
           Owner,
           PrimaryGroup,
           DefaultDacl,
           Source);
}
