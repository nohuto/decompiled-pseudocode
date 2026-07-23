/*
 * XREFs of SepSidInToken @ 0x140347A94
 * Callers:
 *     SepNormalAccessCheck @ 0x1402D1160 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x1402D1A30 (SepMaximumAccessCheck.c)
 *     SepTokenIsOwner @ 0x1403475A0 (SepTokenIsOwner.c)
 *     SepCheckForCriticalAceRemoval @ 0x140347FBC (SepCheckForCriticalAceRemoval.c)
 *     SepMaximumAccessCheckEx @ 0x1403743A4 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x1403744CC (SepNormalAccessCheckEx.c)
 *     SeMaximumAuditMask @ 0x140595DB4 (SeMaximumAuditMask.c)
 *     AuthzBasepMemberOf @ 0x1405C1F68 (AuthzBasepMemberOf.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x140681634 (SepIsImpersonationAllowedDueToCapability.c)
 *     SeTokenIsAdmin @ 0x14070E6D0 (SeTokenIsAdmin.c)
 *     SeExamineSacl @ 0x140921470 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x140921DA0 (SepExamineSaclEx.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x140347854 (SepSidInTokenSidHash.c)
 */

char __fastcall SepSidInToken(__int64 a1, void *a2, void *a3, char a4, char a5, char a6, char a7)
{
  return SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)((a5 != 0 ? 504LL : 232LL) + a1), a2, a3, a4, a5, a6, a7);
}
