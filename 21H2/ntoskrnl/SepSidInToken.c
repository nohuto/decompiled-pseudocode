/*
 * XREFs of SepSidInToken @ 0x14026CA24
 * Callers:
 *     SepTokenIsOwner @ 0x14026C530 (SepTokenIsOwner.c)
 *     SepCheckForCriticalAceRemoval @ 0x14026CF4C (SepCheckForCriticalAceRemoval.c)
 *     SepNormalAccessCheck @ 0x14035B720 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x14035BFF0 (SepMaximumAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x140373714 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x14037383C (SepNormalAccessCheckEx.c)
 *     SeMaximumAuditMask @ 0x1405960A4 (SeMaximumAuditMask.c)
 *     AuthzBasepMemberOf @ 0x1405C2258 (AuthzBasepMemberOf.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1405FBE44 (SepIsImpersonationAllowedDueToCapability.c)
 *     SeTokenIsAdmin @ 0x1406C5B80 (SeTokenIsAdmin.c)
 *     SeExamineSacl @ 0x140921580 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x140921EB0 (SepExamineSaclEx.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x14026C7E4 (SepSidInTokenSidHash.c)
 */

char __fastcall SepSidInToken(__int64 a1, void *a2, void *a3, char a4, char a5, char a6, char a7)
{
  return SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)((a5 != 0 ? 504LL : 232LL) + a1), a2, a3, a4, a5, a6, a7);
}
