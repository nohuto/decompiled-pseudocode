/*
 * XREFs of MmGetNumberOfPhysicalPages @ 0x1406C8500
 * Callers:
 *     ExpGetSystemEmulationBasicInformation @ 0x140316278 (ExpGetSystemEmulationBasicInformation.c)
 *     ExpGetSystemBasicInformation @ 0x140344ADC (ExpGetSystemBasicInformation.c)
 *     ExpDetermineLargePagePolicy @ 0x1403C39A8 (ExpDetermineLargePagePolicy.c)
 *     ExpQuerySystemInformation @ 0x1406C9E30 (ExpQuerySystemInformation.c)
 *     PopWriteHiberPages @ 0x1409916A0 (PopWriteHiberPages.c)
 *     PopRequestWrite @ 0x140994594 (PopRequestWrite.c)
 *     ExInitializePoolTracker @ 0x140A68AF4 (ExInitializePoolTracker.c)
 *     CmpInitGlobalQuotaAllowed @ 0x140A723C4 (CmpInitGlobalQuotaAllowed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C4E648 + 8LL * a1) + 6928LL);
}
