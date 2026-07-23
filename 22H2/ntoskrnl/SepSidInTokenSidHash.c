/*
 * XREFs of SepSidInTokenSidHash @ 0x140347854
 * Callers:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1402CE470 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepMatchCapability @ 0x14031070C (SepMatchCapability.c)
 *     SepSidInToken @ 0x140347A94 (SepSidInToken.c)
 *     AuthzBasepDeviceMemberOf @ 0x1405C1E20 (AuthzBasepDeviceMemberOf.c)
 *     ObpCreateHandle @ 0x140643C70 (ObpCreateHandle.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x140681634 (SepIsImpersonationAllowedDueToCapability.c)
 * Callees:
 *     RtlEqualSid @ 0x1403459F0 (RtlEqualSid.c)
 *     RtlSidHashLookup @ 0x140347670 (RtlSidHashLookup.c)
 */

char __fastcall SepSidInTokenSidHash(
        PSID_AND_ATTRIBUTES_HASH SidAttrHash,
        void *a2,
        void *a3,
        char a4,
        char a5,
        char a6,
        char a7)
{
  void *v8; // rbx
  PSID_AND_ATTRIBUTES v11; // rax
  ULONG Attributes; // ecx

  v8 = a3;
  if ( !a4 && a7 && a3 && RtlEqualSid(SeAliasAdminsSid, a3) )
    return 0;
  if ( a2 && RtlEqualSid(SePrincipalSelfSid, v8) )
    v8 = a2;
  if ( a6 && RtlEqualSid(SeOwnerRightsSid, v8) )
    return 1;
  v11 = RtlSidHashLookup(SidAttrHash, v8);
  if ( v11
    && (!a5 && v11 == SidAttrHash->SidAttr && ((v11->Attributes & 0x10) == 0 || a4)
     || (Attributes = v11->Attributes, (Attributes & 4) != 0)
     || a4 && (Attributes & 0x10) != 0) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
