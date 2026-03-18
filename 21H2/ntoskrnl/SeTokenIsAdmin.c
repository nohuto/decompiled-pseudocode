/*
 * XREFs of SeTokenIsAdmin @ 0x140695DA0
 * Callers:
 *     IoComputeRedirectionTrustLevel @ 0x140201F40 (IoComputeRedirectionTrustLevel.c)
 *     SepMandatorySubProcessToken @ 0x140205B1C (SepMandatorySubProcessToken.c)
 *     PspIsContextAdmin @ 0x1406950FC (PspIsContextAdmin.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x140695CF8 (MiIsUserQueryVmCallerTrusted.c)
 *     PspDisablePrimaryTokenExchange @ 0x140702AF8 (PspDisablePrimaryTokenExchange.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     EtwpCoverageUserIsAdmin @ 0x1409E57B8 (EtwpCoverageUserIsAdmin.c)
 * Callees:
 *     SepSidInToken @ 0x14021F640 (SepSidInToken.c)
 *     SeTokenIsRestricted @ 0x14021F680 (SeTokenIsRestricted.c)
 */

BOOLEAN __stdcall SeTokenIsAdmin(PACCESS_TOKEN Token)
{
  BOOLEAN v2; // di

  if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 || *((_DWORD *)Token + 48) == 2 && *((int *)Token + 49) < 2 )
    return 0;
  v2 = SepSidInToken((__int64)Token, 0LL, (__int64)SeAliasAdminsSid, 0LL, 0, 0);
  if ( v2 )
  {
    if ( SeTokenIsRestricted(Token) )
      return SepSidInToken((__int64)Token, 0LL, (__int64)SeAliasAdminsSid, 0LL, 1, 0);
  }
  return v2;
}
