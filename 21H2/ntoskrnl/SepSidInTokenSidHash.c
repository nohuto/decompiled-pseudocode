/*
 * XREFs of SepSidInTokenSidHash @ 0x14027E844
 * Callers:
 *     SepSidInToken @ 0x14027EA84 (SepSidInToken.c)
 *     SepMatchCapability @ 0x1402B8FEC (SepMatchCapability.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x14034DCE0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     AuthzBasepDeviceMemberOf @ 0x1405C1EE0 (AuthzBasepDeviceMemberOf.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x14069CD74 (SepIsImpersonationAllowedDueToCapability.c)
 *     ObpCreateHandle @ 0x1406F6550 (ObpCreateHandle.c)
 * Callees:
 *     RtlEqualSid @ 0x14027C9E0 (RtlEqualSid.c)
 *     RtlSidHashLookup @ 0x14027E660 (RtlSidHashLookup.c)
 */

char __fastcall SepSidInTokenSidHash(__int64 a1, void *a2, void *a3, char a4, char a5, char a6, char a7)
{
  void *v8; // rbx
  const void **v11; // rax
  int v13; // ecx

  v8 = a3;
  if ( !a4 && a7 && a3 && RtlEqualSid(SeAliasAdminsSid, a3) )
    return 0;
  if ( a2 && RtlEqualSid(SePrincipalSelfSid, v8) )
    v8 = a2;
  if ( a6 && RtlEqualSid(SeOwnerRightsSid, v8) )
    return 1;
  v11 = RtlSidHashLookup(a1, (unsigned __int16 *)v8);
  if ( v11
    && (!a5 && v11 == *(const void ***)(a1 + 8) && (((_DWORD)v11[1] & 0x10) == 0 || a4)
     || (v13 = *((_DWORD *)v11 + 2), (v13 & 4) != 0)
     || a4 && (v13 & 0x10) != 0) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
