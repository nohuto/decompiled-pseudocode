/*
 * XREFs of PopResetCBTriggers @ 0x140825B3C
 * Callers:
 *     PopApplyPolicy @ 0x14082513C (PopApplyPolicy.c)
 *     PopBatteryWorker @ 0x140870230 (PopBatteryWorker.c)
 * Callees:
 *     PopDiagTraceBatteryTriggerFlags @ 0x140870C30 (PopDiagTraceBatteryTriggerFlags.c)
 */

__int64 __fastcall PopResetCBTriggers(unsigned __int8 a1)
{
  __int64 result; // rax
  int v2; // ebx
  unsigned int v3; // ecx
  int v4; // [rsp+38h] [rbp+10h] BYREF

  result = 0LL;
  v4 = 0;
  v2 = ~a1;
  v3 = 0;
  do
  {
    *(&PopCB + 6 * v3 + 83) = v2 & *(&PopCB + 6 * result + 83);
    PopDiagTraceBatteryTriggerFlags(&v4, &PopCB + 6 * result + 82);
    result = (unsigned int)(v4 + 1);
    v4 = result;
    v3 = result;
  }
  while ( (unsigned int)result < 4 );
  return result;
}
