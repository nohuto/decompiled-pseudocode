BOOLEAN __fastcall SepIsImpersonationAllowedDueToCapability(__int64 Token, __int64 a2)
{
  bool v2; // si
  BOOLEAN result; // al
  char v6; // bp
  char v7; // bp
  char v8; // al
  char v9; // bp
  char v10; // cl
  bool v11; // sf
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( *(_DWORD *)(a2 + 120) != *(_DWORD *)(Token + 120)
    || (*(_DWORD *)(*(_QWORD *)(a2 + 216) + 32LL) & 0x10) != 0
    || (unsigned __int8)RtlIsMultiSessionSku() )
  {
    return 0;
  }
  v6 = SepSidInToken(Token, 0LL, (__int64)SeDefaultAccountAliasSid, 0LL, 0, 0);
  if ( v6 )
  {
    if ( SeTokenIsRestricted((PACCESS_TOKEN)Token) )
      v6 = SepSidInToken(Token, 0LL, (__int64)SeDefaultAccountAliasSid, 0LL, 1, 0);
    v2 = v6 != 0;
  }
  if ( SepAllowSessionImpersonationCap && (*(_DWORD *)(Token + 200) & 0x4000) == 0 )
  {
    v7 = SepSidInToken(Token, 0LL, (__int64)SeSessionImpersonationCapabilityGroupSid, 0LL, 0, 0);
    if ( v7 )
    {
      if ( SeTokenIsRestricted((PACCESS_TOKEN)Token) )
        v7 = SepSidInToken(Token, 0LL, (__int64)SeSessionImpersonationCapabilityGroupSid, 0LL, 1, 0);
      if ( v7 )
        return 1;
    }
    v8 = v7;
    if ( v2 )
      v8 = 1;
    if ( v8 )
      return 1;
  }
  if ( (*(_DWORD *)(a2 + 200) & 0x4000) == 0 )
    return 0;
  v9 = SepSidInToken(Token, 0LL, (__int64)SeConstrainedImpersonationCapabilityGroupSid, 0LL, 0, 0);
  if ( v9 )
  {
    if ( SeTokenIsRestricted((PACCESS_TOKEN)Token) )
      v9 = SepSidInToken(Token, 0LL, (__int64)SeConstrainedImpersonationCapabilityGroupSid, 0LL, 1, 0);
    if ( v9 )
      goto LABEL_27;
  }
  v10 = v9;
  if ( v2 )
    v10 = 1;
  if ( v10 )
  {
LABEL_27:
    if ( (*(_DWORD *)(Token + 200) & 0x4000) == 0 )
      return 1;
  }
  result = SepSidInTokenSidHash(
             (_DWORD *)(Token + 808),
             0LL,
             (unsigned __int8 *)SeConstrainedImpersonationCapabilitySid,
             0,
             1,
             0);
  LOBYTE(v12) = result;
  if ( result )
  {
    v11 = (int)SepCheckCapabilities((PACCESS_TOKEN)Token, (__int64)&v12) < 0;
    result = v12;
    if ( !v11 && !(_BYTE)v12 )
      return RtlEqualSid(*(PSID *)(Token + 784), *(PSID *)(a2 + 784));
  }
  return result;
}
