/*
 * XREFs of SeTokenIsAdmin @ 0x1407819E0
 * Callers:
 *     SepMandatorySubProcessToken @ 0x140297F20 (SepMandatorySubProcessToken.c)
 *     IoComputeRedirectionTrustLevel @ 0x140556740 (IoComputeRedirectionTrustLevel.c)
 *     PspIsContextAdmin @ 0x140781848 (PspIsContextAdmin.c)
 *     MiIsUserQueryVmCallerTrusted @ 0x14078194C (MiIsUserQueryVmCallerTrusted.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     PspDisablePrimaryTokenExchange @ 0x1407ED630 (PspDisablePrimaryTokenExchange.c)
 *     EtwpCoverageUserIsAdmin @ 0x1409E5B48 (EtwpCoverageUserIsAdmin.c)
 * Callees:
 *     SeTokenIsRestricted @ 0x140206B10 (SeTokenIsRestricted.c)
 *     SepSidInToken @ 0x1402EF7EC (SepSidInToken.c)
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
