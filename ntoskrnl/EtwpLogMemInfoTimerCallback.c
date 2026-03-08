/*
 * XREFs of EtwpLogMemInfoTimerCallback @ 0x14045F4B0
 * Callers:
 *     <none>
 * Callees:
 *     MmQuerySystemMemoryInformation @ 0x1402FCE88 (MmQuerySystemMemoryInformation.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     EtwpLogMemNodeInfo @ 0x14045F526 (EtwpLogMemNodeInfo.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x14045F908 (EtwpQueuePerfMemInfoWorkItem.c)
 *     EtwpLogMemInfo @ 0x1405FBA14 (EtwpLogMemInfo.c)
 */

__int64 EtwpLogMemInfoTimerCallback()
{
  __int64 result; // rax
  _OWORD v1[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v1, 0, sizeof(v1));
  result = MmQuerySystemMemoryInformation(v1);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x80000) != 0 )
  {
    EtwpLogMemInfo(0LL, v1);
    result = EtwpLogMemNodeInfo();
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x800000) != 0 )
    return EtwpQueuePerfMemInfoWorkItem(*(_QWORD *)&v1[0]);
  return result;
}
