/*
 * XREFs of SeTokenIsAdmin @ 0x14070E6D0
 * Callers:
 *     SepMandatorySubProcessToken @ 0x14025103C (SepMandatorySubProcessToken.c)
 *     IoComputeRedirectionTrustLevel @ 0x1403F0B10 (IoComputeRedirectionTrustLevel.c)
 *     IopParseDevice @ 0x14064E680 (IopParseDevice.c)
 *     PspDisablePrimaryTokenExchange @ 0x1406C068C (PspDisablePrimaryTokenExchange.c)
 *     PspIsContextAdmin @ 0x14070CE38 (PspIsContextAdmin.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x14070E660 (MiIsUserQueryVmCallerTrusted.c)
 *     EtwpCoverageUserIsAdmin @ 0x1409357A8 (EtwpCoverageUserIsAdmin.c)
 * Callees:
 *     SepSidInToken @ 0x140347A94 (SepSidInToken.c)
 *     SeTokenIsRestricted @ 0x14035F3A0 (SeTokenIsRestricted.c)
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
