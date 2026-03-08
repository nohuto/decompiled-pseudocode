/*
 * XREFs of EtwpUpdateGroupMasks @ 0x14080D8D8
 * Callers:
 *     EtwpStopLoggerInstance @ 0x140748874 (EtwpStopLoggerInstance.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x14080D834 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409DF094 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     EtwpUpdateSelectedGroupMasks @ 0x14037F908 (EtwpUpdateSelectedGroupMasks.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     EtwpMapEnableFlags @ 0x1407487E8 (EtwpMapEnableFlags.c)
 */

__int64 __fastcall EtwpUpdateGroupMasks(int *a1, _DWORD *a2)
{
  _DWORD v5[8]; // [rsp+20h] [rbp-38h] BYREF

  v5[7] = -1;
  v5[0] = 0x1FFFFFFF;
  v5[1] = 0x3FFFFFFF;
  v5[2] = 1610612735;
  v5[3] = 0x7FFFFFFF;
  v5[4] = -1610612737;
  v5[5] = -1073741825;
  v5[6] = -536870913;
  EtwpMapEnableFlags((__int64)a2, 1);
  return EtwpUpdateSelectedGroupMasks(a1, v5, a2);
}
