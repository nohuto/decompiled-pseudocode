NTSTATUS CheckTokenForVMGroupMembership(void)
{
  NTSTATUS result; // eax
  _BYTE v1[4]; // [rsp+20h] [rbp-30h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+24h] [rbp-2Ch] BYREF
  _BYTE Sid[20]; // [rsp+2Ch] [rbp-24h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  result = RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
  if ( result >= 0 )
  {
    *RtlSubAuthoritySid(Sid, 0) = 83;
    *RtlSubAuthoritySid(Sid, 1u) = 0;
    v1[0] = 0;
    result = RtlCheckTokenMembership(0LL, Sid, v1);
    if ( result >= 0 && !v1[0] )
      return -1073741727;
  }
  return result;
}
