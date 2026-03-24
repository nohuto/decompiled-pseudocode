/*
 * XREFs of SeTokenIsAdmin @ 0x140717530
 * Callers:
 *     SepMandatorySubProcessToken @ 0x1402517DC (SepMandatorySubProcessToken.c)
 *     IoComputeRedirectionTrustLevel @ 0x1403F1500 (IoComputeRedirectionTrustLevel.c)
 *     PspDisablePrimaryTokenExchange @ 0x1406478CC (PspDisablePrimaryTokenExchange.c)
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
 *     PspIsContextAdmin @ 0x140715EE0 (PspIsContextAdmin.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x1407174C0 (MiIsUserQueryVmCallerTrusted.c)
 *     EtwpCoverageUserIsAdmin @ 0x140935758 (EtwpCoverageUserIsAdmin.c)
 * Callees:
 *     SepSidInToken @ 0x14027EA84 (SepSidInToken.c)
 *     SeTokenIsRestricted @ 0x14035FFF0 (SeTokenIsRestricted.c)
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
