/*
 * XREFs of SepSidInTokenSidHash @ 0x1402FD65C
 * Callers:
 *     SepCheckForCriticalAceRemoval @ 0x140207028 (SepCheckForCriticalAceRemoval.c)
 *     SepSidInToken @ 0x14021F640 (SepSidInToken.c)
 *     SepMatchCapability @ 0x140244144 (SepMatchCapability.c)
 *     SepTokenIsOwner @ 0x1402A45CC (SepTokenIsOwner.c)
 *     SepMaximumAccessCheck @ 0x1402F9680 (SepMaximumAccessCheck.c)
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     SepNormalAccessCheck @ 0x1402FB0E0 (SepNormalAccessCheck.c)
 *     SeAccessCheckByType @ 0x1402FBEC0 (SeAccessCheckByType.c)
 *     SepMaximumAccessCheckEx @ 0x140384600 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x14038473C (SepNormalAccessCheckEx.c)
 *     SeMaximumAuditMask @ 0x1405F4040 (SeMaximumAuditMask.c)
 *     AuthzBasepDeviceMemberOf @ 0x14064AFB8 (AuthzBasepDeviceMemberOf.c)
 *     AuthzBasepMemberOf @ 0x14064B0FC (AuthzBasepMemberOf.c)
 *     ObpCreateHandle @ 0x140731DA0 (ObpCreateHandle.c)
 *     NtCreateLowBoxToken @ 0x14078DDF0 (NtCreateLowBoxToken.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1407F4B20 (SepIsImpersonationAllowedDueToCapability.c)
 * Callees:
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     RtlSidHashLookup @ 0x1402FD710 (RtlSidHashLookup.c)
 */

bool __fastcall SepSidInTokenSidHash(__int64 a1, void *a2, void *a3, char a4, char a5, char a6)
{
  void *v7; // rbx
  __int64 v10; // rax
  bool result; // al
  int v12; // ecx

  v7 = a3;
  if ( a2 && RtlEqualSid(SePrincipalSelfSid, a3) )
    v7 = a2;
  result = 1;
  if ( !a6 || !RtlEqualSid(SeOwnerRightsSid, v7) )
  {
    v10 = RtlSidHashLookup(a1, v7);
    if ( !v10 )
      return 0;
    if ( a5 || v10 != *(_QWORD *)(a1 + 8) || (*(_DWORD *)(v10 + 8) & 0x10) != 0 && !a4 )
    {
      v12 = *(_DWORD *)(v10 + 8);
      if ( (v12 & 4) == 0 && (!a4 || (v12 & 0x10) == 0) )
        return 0;
    }
  }
  return result;
}
