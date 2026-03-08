/*
 * XREFs of HvlSetLogicalProcessorHwpRequest @ 0x140544AA0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     HvlpSetPowerProperty @ 0x140544E50 (HvlpSetPowerProperty.c)
 */

__int64 __fastcall HvlSetLogicalProcessorHwpRequest(int a1, __int64 a2)
{
  __int64 v4; // rdx
  _QWORD v6[53]; // [rsp+20h] [rbp-1A8h] BYREF

  memset(v6, 0, 0x194uLL);
  LODWORD(v6[0]) = 6;
  LODWORD(v6[1]) = a1;
  v6[2] = a2;
  return HvlpSetPowerProperty(v6, v4);
}
