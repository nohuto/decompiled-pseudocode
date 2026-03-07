NTSTATUS __stdcall RtlAddAccessAllowedAceEx(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ACCESS_MASK AccessMask,
        PSID Sid)
{
  return RtlpAddKnownAce((__int64)Acl, AceRevision, AceFlags, AccessMask, (unsigned __int8 *)Sid, 0);
}
