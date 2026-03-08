/*
 * XREFs of MmAdjustWorkingSetSize @ 0x14061A080
 * Callers:
 *     PspApplyWorkingSetLimitsToProcess @ 0x1406FEF9C (PspApplyWorkingSetLimitsToProcess.c)
 *     PspApplyWorkingSetLimits @ 0x1409AEF10 (PspApplyWorkingSetLimits.c)
 * Callees:
 *     MmAdjustWorkingSetSizeEx @ 0x14020C61C (MmAdjustWorkingSetSizeEx.c)
 */

__int64 __fastcall MmAdjustWorkingSetSize(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF

  v5[0] = 0;
  return MmAdjustWorkingSetSizeEx(a1, a2, a3, a4, 0, v5);
}
