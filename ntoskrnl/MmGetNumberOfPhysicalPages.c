/*
 * XREFs of MmGetNumberOfPhysicalPages @ 0x140768AB0
 * Callers:
 *     ExpGetSystemEmulationBasicInformation @ 0x1402DCACC (ExpGetSystemEmulationBasicInformation.c)
 *     ExpGetSystemBasicInformation @ 0x1402DCC68 (ExpGetSystemBasicInformation.c)
 *     ExpInitializePoolTrackerTable @ 0x14039FCEC (ExpInitializePoolTrackerTable.c)
 *     ExpDetermineLargePagePolicy @ 0x1403AFB34 (ExpDetermineLargePagePolicy.c)
 *     PopRequestWrite @ 0x140AA0E40 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140AA2874 (PopWriteHiberPages.c)
 *     ViPtInitCircularPoolTrace @ 0x140ADBE2C (ViPtInitCircularPoolTrace.c)
 *     CmpInitGlobalQuotaAllowed @ 0x140B50998 (CmpInitGlobalQuotaAllowed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPages(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8LL * a1) + 17040LL);
}
