NTSTATUS __stdcall RtlAddAccessAllowedAce(PACL Acl, ULONG AceRevision, ACCESS_MASK AccessMask, PSID Sid)
{
  return RtlpAddKnownAce((__int64)Acl, AceRevision, 0, AccessMask, (unsigned __int8 *)Sid, 0);
}
