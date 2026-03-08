/*
 * XREFs of SepSidInToken @ 0x1402EF7EC
 * Callers:
 *     SepIsImpersonationAllowedDueToCapability @ 0x140744780 (SepIsImpersonationAllowedDueToCapability.c)
 *     SeTokenIsAdmin @ 0x1407819E0 (SeTokenIsAdmin.c)
 *     SeExamineSacl @ 0x1408A18B0 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x1409CB8C4 (SepExamineSaclEx.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x14033DEA0 (SepSidInTokenSidHash.c)
 */

__int64 __fastcall SepSidInToken(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6)
{
  return SepSidInTokenSidHash((a5 != 0 ? 504LL : 232LL) + a1, a2, a3, a4, a5, a6);
}
