/*
 * XREFs of RtlEqualSid @ 0x180038310
 * Callers:
 *     RtlpCompareKnownAces @ 0x180038240 (RtlpCompareKnownAces.c)
 *     RtlpOwnerAcesPresent @ 0x18003FB98 (RtlpOwnerAcesPresent.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x180043EE0 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlSidDominates @ 0x18007C5B0 (RtlSidDominates.c)
 *     RtlpValidOwnerSubjectContext @ 0x18007DD40 (RtlpValidOwnerSubjectContext.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800886B0 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800CBC30 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlpCompareKnownObjectAces @ 0x1800E7120 (RtlpCompareKnownObjectAces.c)
 *     RtlFindAceBySid @ 0x1800E9CB4 (RtlFindAceBySid.c)
 * Callees:
 *     memcmp @ 0x1800906D0 (memcmp.c)
 */

bool __fastcall RtlEqualSid(unsigned __int8 *a1, _WORD *a2)
{
  return *(_WORD *)a1 == *a2 && memcmp(a1, a2, 4LL * a1[1] + 8) == 0;
}
