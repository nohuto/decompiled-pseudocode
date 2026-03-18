/*
 * XREFs of SepSidInToken @ 0x14021F640
 * Callers:
 *     SeTokenIsAdmin @ 0x140695DA0 (SeTokenIsAdmin.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1407F4B20 (SepIsImpersonationAllowedDueToCapability.c)
 *     SeExamineSacl @ 0x1409CAE50 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x1409CB770 (SepExamineSaclEx.c)
 * Callees:
 *     SepSidInTokenSidHash @ 0x1402FD65C (SepSidInTokenSidHash.c)
 */

__int64 __fastcall SepSidInToken(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6)
{
  return SepSidInTokenSidHash((a5 != 0 ? 504LL : 232LL) + a1, a2, a3, a4, a5, a6);
}
