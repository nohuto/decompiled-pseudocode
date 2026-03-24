/*
 * XREFs of SepIsImpersonationAllowedDueToCapability @ 0x14069CD74
 * Callers:
 *     SeTokenCanImpersonate @ 0x14065B420 (SeTokenCanImpersonate.c)
 * Callees:
 *     RtlEqualSid @ 0x14027C9E0 (RtlEqualSid.c)
 *     SepSidInTokenSidHash @ 0x14027E844 (SepSidInTokenSidHash.c)
 *     SepSidInToken @ 0x14027EA84 (SepSidInToken.c)
 *     SeTokenIsRestricted @ 0x14035FFF0 (SeTokenIsRestricted.c)
 *     RtlIsMultiSessionSku @ 0x14069CDE0 (RtlIsMultiSessionSku.c)
 *     SepCheckCapabilities @ 0x1406A7AE0 (SepCheckCapabilities.c)
 */

BOOLEAN __fastcall SepIsImpersonationAllowedDueToCapability(__int64 Token, __int64 a2)
{
  char v4; // si
  BOOLEAN result; // al
  PSID v6; // r14
  char v7; // bp
  PSID v8; // r14
  char v9; // bp
  char v10; // al
  PSID v11; // r14
  char v12; // bp
  char v13; // cl
  bool v14; // sf
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0;
  if ( *(_DWORD *)(a2 + 120) != *(_DWORD *)(Token + 120)
    || (*(_DWORD *)(*(_QWORD *)(a2 + 216) + 32LL) & 0x10) != 0
    || (unsigned __int8)RtlIsMultiSessionSku() )
  {
    return 0;
  }
  v6 = SeDefaultAccountAliasSid;
  v7 = SepSidInToken(Token, 0LL, SeDefaultAccountAliasSid, 0, 0, 0, 0);
  if ( v7 )
  {
    if ( SeTokenIsRestricted((PACCESS_TOKEN)Token) )
      v7 = SepSidInToken(Token, 0LL, v6, 0, 1, 0, 0);
    if ( v7 )
      v4 = 1;
  }
  if ( SepAllowSessionImpersonationCap && (*(_DWORD *)(Token + 200) & 0x4000) == 0 )
  {
    v8 = SeSessionImpersonationCapabilityGroupSid;
    v9 = SepSidInToken(Token, 0LL, SeSessionImpersonationCapabilityGroupSid, 0, 0, 0, 0);
    if ( v9 )
    {
      if ( SeTokenIsRestricted((PACCESS_TOKEN)Token) )
        v9 = SepSidInToken(Token, 0LL, v8, 0, 1, 0, 0);
      if ( v9 )
        return 1;
    }
    v10 = v9;
    if ( v4 )
      v10 = 1;
    if ( v10 )
      return 1;
  }
  if ( (*(_DWORD *)(a2 + 200) & 0x4000) == 0 )
    return 0;
  v11 = SeConstrainedImpersonationCapabilityGroupSid;
  v12 = SepSidInToken(Token, 0LL, SeConstrainedImpersonationCapabilityGroupSid, 0, 0, 0, 0);
  if ( v12 )
  {
    if ( SeTokenIsRestricted((PACCESS_TOKEN)Token) )
      v12 = SepSidInToken(Token, 0LL, v11, 0, 1, 0, 0);
    if ( v12 )
      goto LABEL_28;
  }
  v13 = v12;
  if ( v4 )
    v13 = 1;
  if ( v13 )
  {
LABEL_28:
    if ( (*(_DWORD *)(Token + 200) & 0x4000) == 0 )
      return 1;
  }
  result = SepSidInTokenSidHash(Token + 808, 0LL, SeConstrainedImpersonationCapabilitySid, 0, 1, 0, 0);
  LOBYTE(v15) = result;
  if ( result )
  {
    v14 = (int)SepCheckCapabilities((PACCESS_TOKEN)Token, (__int64)&v15) < 0;
    result = v15;
    if ( !v14 && !(_BYTE)v15 )
      return RtlEqualSid(*(PSID *)(Token + 784), *(PSID *)(a2 + 784));
  }
  return result;
}
