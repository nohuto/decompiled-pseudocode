/*
 * XREFs of HvlRegisterLogicalProcessorFrequency @ 0x140546DF4
 * Callers:
 *     PpmScaleIdleStateValues @ 0x14034ED1C (PpmScaleIdleStateValues.c)
 * Callees:
 *     memset @ 0x140435400 (memset.c)
 *     HvlpSetPowerProperty @ 0x1405472F0 (HvlpSetPowerProperty.c)
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
