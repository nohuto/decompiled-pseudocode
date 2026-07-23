/*
 * XREFs of RtlAddAccessDeniedObjectAce @ 0x140912240
 * Callers:
 *     LocalGetAclForString @ 0x1407877AC (LocalGetAclForString.c)
 * Callees:
 *     RtlpAddKnownAce @ 0x1406D5220 (RtlpAddKnownAce.c)
 *     RtlpAddKnownObjectAce @ 0x1409128F0 (RtlpAddKnownObjectAce.c)
 */

NTSTATUS __cdecl RtlAddAccessDeniedObjectAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        PGUID ObjectTypeGuid,
        PGUID InheritedObjectTypeGuid,
        PSID Sid)
{
  if ( ObjectTypeGuid || InheritedObjectTypeGuid )
    return RtlpAddKnownObjectAce(Acl, (__int64)ObjectTypeGuid, (__int64)InheritedObjectTypeGuid, Sid, 6);
  else
    return RtlpAddKnownAce(Acl, AceRevision, AceFlags, AccessMask, (unsigned __int8 *)Sid, 1u);
}
