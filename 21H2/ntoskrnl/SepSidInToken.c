/*
 * XREFs of SepSidInToken @ 0x14027EA84
 * Callers:
 *     SepTokenIsOwner @ 0x14027E590 (SepTokenIsOwner.c)
 *     SepCheckForCriticalAceRemoval @ 0x14027EFAC (SepCheckForCriticalAceRemoval.c)
 *     SepNormalAccessCheck @ 0x1403509D0 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x1403512A0 (SepMaximumAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x140373BC4 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140373CEC (SepNormalAccessCheckEx.c)
 *     SeMaximumAuditMask @ 0x140595E74 (SeMaximumAuditMask.c)
 *     AuthzBasepMemberOf @ 0x1405C2028 (AuthzBasepMemberOf.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x14069CD74 (SepIsImpersonationAllowedDueToCapability.c)
 *     SeTokenIsAdmin @ 0x140717530 (SeTokenIsAdmin.c)
 *     SeExamineSacl @ 0x140921420 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x140921D50 (SepExamineSaclEx.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x14027E844 (SepSidInTokenSidHash.c)
 */

char __fastcall SepSidInToken(__int64 a1, void *a2, void *a3, char a4, char a5, char a6, char a7)
{
  return SepSidInTokenSidHash((a5 != 0 ? 504LL : 232LL) + a1, a2, a3, a4, a5, a6, a7);
}
