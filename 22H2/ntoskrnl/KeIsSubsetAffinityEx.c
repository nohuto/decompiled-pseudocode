/*
 * XREFs of KeIsSubsetAffinityEx @ 0x1402031E0
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KeStartThread @ 0x1402BE0A8 (KeStartThread.c)
 *     PpmIdleExecuteTransition @ 0x1402C52F0 (PpmIdleExecuteTransition.c)
 *     PpmPerfApplyDomainStates @ 0x140352030 (PpmPerfApplyDomainStates.c)
 *     PpmPerfApplyDomainState @ 0x140352098 (PpmPerfApplyDomainState.c)
 *     KiModifySystemAllowedCpuSetsWithLock @ 0x14039D200 (KiModifySystemAllowedCpuSetsWithLock.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AA6BC (KeSetUserGroupAffinityThread.c)
 *     KeCpuPartitionMoveCpus @ 0x140574E64 (KeCpuPartitionMoveCpus.c)
 *     PpmIdleCheckCoordinatedStateEligibility @ 0x140584AA4 (PpmIdleCheckCoordinatedStateEligibility.c)
 *     PpmUpdateIdleDomains @ 0x140586390 (PpmUpdateIdleDomains.c)
 *     NtSetInformationThread @ 0x140733AB0 (NtSetInformationThread.c)
 *     PspInsertThread @ 0x14073F3AC (PspInsertThread.c)
 *     PsUpdateActiveProcessAffinity @ 0x1409AE854 (PsUpdateActiveProcessAffinity.c)
 *     PspSetProcessAffinitySafe @ 0x1409AF970 (PspSetProcessAffinitySafe.c)
 * Callees:
 *     KiAndAffinityEx @ 0x140252320 (KiAndAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x1402BFEA0 (KeIsEqualAffinityEx.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 */

__int64 __fastcall KeIsSubsetAffinityEx(__int64 a1, __int64 a2)
{
  _DWORD v5[68]; // [rsp+20h] [rbp-128h] BYREF

  v5[0] = 2097153;
  memset(&v5[1], 0, 0x104uLL);
  KiAndAffinityEx(a1, a2, v5, 32LL);
  return KeIsEqualAffinityEx(a1, v5);
}
