/*
 * XREFs of DifUpdatePluginState @ 0x1405D54A0
 * Callers:
 *     VfNotifyVerifierOfEvent @ 0x140AC3120 (VfNotifyVerifierOfEvent.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 *     MmManagePartitionMemoryInformation @ 0x14076060C (MmManagePartitionMemoryInformation.c)
 */

unsigned __int64 DifUpdatePluginState()
{
  unsigned __int64 result; // rax

  result = HIDWORD(VfRuleClasses);
  if ( (VfRuleClasses & 0x8000000000LL) != 0 && DifpSystemPartition )
  {
    memset(&DifpSPMemoryInfo, 0, 0xF0uLL);
    dword_140D18C84 = -1;
    dword_140D18C88 = -1;
    result = MmManagePartitionMemoryInformation(&DifpSystemPartition, &DifpSPMemoryInfo);
    if ( (result & 0x80000000) == 0LL )
    {
      DifpLwSPAvailableSystemPages = qword_140D18CB8;
      result = (unsigned int)DifiPluginControlNumerator
             * (qword_140D18CB8
              / (unsigned __int64)(unsigned int)DifiPluginControlDenominator);
      DifpLwSPAllowedSPPages = result;
    }
  }
  return result;
}
