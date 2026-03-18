/*
 * XREFs of MmGetNumberOfPhysicalPages @ 0x1407B9EA0
 * Callers:
 *     ExpGetSystemEmulationBasicInformation @ 0x140346AAC (ExpGetSystemEmulationBasicInformation.c)
 *     ExpGetSystemBasicInformation @ 0x140346C48 (ExpGetSystemBasicInformation.c)
 *     ExpInitializePoolTrackerTable @ 0x140398524 (ExpInitializePoolTrackerTable.c)
 *     ExpDetermineLargePagePolicy @ 0x1403986B8 (ExpDetermineLargePagePolicy.c)
 *     PopRequestWrite @ 0x140AA4070 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140AA5AA4 (PopWriteHiberPages.c)
 *     ViPtInitCircularPoolTrace @ 0x140ADFE2C (ViPtInitCircularPoolTrace.c)
 *     CmpInitGlobalQuotaAllowed @ 0x140B746D4 (CmpInitGlobalQuotaAllowed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C674C8 + 8LL * a1) + 17040LL);
}
