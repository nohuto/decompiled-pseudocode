/*
 * XREFs of HvlRegisterLogicalProcessorFrequency @ 0x140544954
 * Callers:
 *     PpmScaleIdleStateValues @ 0x1402ED878 (PpmScaleIdleStateValues.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     HvlpSetPowerProperty @ 0x140544E50 (HvlpSetPowerProperty.c)
 */

__int64 __fastcall HvlRegisterLogicalProcessorFrequency(int a1, int a2)
{
  __int64 v4; // rdx
  _DWORD v6[106]; // [rsp+20h] [rbp-1A8h] BYREF

  memset(v6, 0, 0x194uLL);
  v6[0] = 2;
  v6[2] = a1;
  v6[4] = a2;
  return HvlpSetPowerProperty(v6, v4);
}
