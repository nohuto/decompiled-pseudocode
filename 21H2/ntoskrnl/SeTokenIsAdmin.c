/*
 * XREFs of SeTokenIsAdmin @ 0x1406C5B80
 * Callers:
 *     SepMandatorySubProcessToken @ 0x1402F5FEC (SepMandatorySubProcessToken.c)
 *     IoComputeRedirectionTrustLevel @ 0x1403F13D0 (IoComputeRedirectionTrustLevel.c)
 *     PspDisablePrimaryTokenExchange @ 0x14063C6BC (PspDisablePrimaryTokenExchange.c)
 *     PspIsContextAdmin @ 0x1406C4530 (PspIsContextAdmin.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x1406C5B10 (MiIsUserQueryVmCallerTrusted.c)
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 *     EtwpCoverageUserIsAdmin @ 0x140935928 (EtwpCoverageUserIsAdmin.c)
 * Callees:
 *     SepSidInToken @ 0x14026CA24 (SepSidInToken.c)
 *     SeTokenIsRestricted @ 0x1402A4F20 (SeTokenIsRestricted.c)
 */

BOOLEAN __stdcall SeTokenIsAdmin(PACCESS_TOKEN Token)
{
  PSID v2; // rsi
  BOOLEAN v3; // di

  if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 || *((_DWORD *)Token + 48) == 2 && *((int *)Token + 49) < 2 )
    return 0;
  v2 = SeAliasAdminsSid;
  v3 = SepSidInToken((__int64)Token, 0LL, SeAliasAdminsSid, 0, 0, 0, 0);
  if ( v3 )
  {
    if ( SeTokenIsRestricted(Token) )
      return SepSidInToken((__int64)Token, 0LL, v2, 0, 1, 0, 0);
  }
  return v3;
}
