/*
 * XREFs of KeIsSubsetAffinityEx @ 0x1402B13D0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14022D7D0 (PpmIdleExecuteTransition.c)
 *     KeStartThread @ 0x1402385C4 (KeStartThread.c)
 *     KeSetUserAffinityThread @ 0x1402B0FA0 (KeSetUserAffinityThread.c)
 *     PpmPerfApplyDomainStates @ 0x1402E5690 (PpmPerfApplyDomainStates.c)
 *     PpmPerfApplyDomainState @ 0x1402E56F8 (PpmPerfApplyDomainState.c)
 *     KiSetLegacyAffinityThread @ 0x1402FDE2C (KiSetLegacyAffinityThread.c)
 *     KiModifySystemAllowedCpuSetsWithLock @ 0x1403991C4 (KiModifySystemAllowedCpuSetsWithLock.c)
 *     KeSetUserGroupAffinityThread @ 0x1403A8A60 (KeSetUserGroupAffinityThread.c)
 *     KeCpuPartitionMoveCpus @ 0x140572954 (KeCpuPartitionMoveCpus.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x140582574 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmUpdateIdleDomains @ 0x140583E60 (PpmUpdateIdleDomains.c)
 *     PspInsertThread @ 0x1406B0F50 (PspInsertThread.c)
 *     NtSetInformationThread @ 0x1406D8E90 (NtSetInformationThread.c)
 *     PsUpdateActiveProcessAffinity @ 0x1409AB80C (PsUpdateActiveProcessAffinity.c)
 *     PspSetProcessAffinitySafe @ 0x1409AC928 (PspSetProcessAffinitySafe.c)
 * Callees:
 *     KeIsEqualAffinityEx @ 0x140237260 (KeIsEqualAffinityEx.c)
 *     KiAndAffinityEx @ 0x140237720 (KiAndAffinityEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall KeIsSubsetAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2)
{
  _DWORD v5[68]; // [rsp+20h] [rbp-128h] BYREF

  v5[0] = 2097153;
  memset(&v5[1], 0, 0x104uLL);
  KiAndAffinityEx(a1, a2, v5, 0x20u);
  return KeIsEqualAffinityEx(a1, (unsigned __int16 *)v5);
}
