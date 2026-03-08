/*
 * XREFs of EtwpLogMemInfoRundown @ 0x1409EBF14
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14080D9F8 (EtwpKernelTraceRundown.c)
 * Callees:
 *     MmQuerySystemMemoryInformation @ 0x1402FCE88 (MmQuerySystemMemoryInformation.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     EtwpLogMemInfo @ 0x1405FBA14 (EtwpLogMemInfo.c)
 *     EtwpLogMemInfoWs @ 0x1408A21C4 (EtwpLogMemInfoWs.c)
 */

void __fastcall EtwpLogMemInfoRundown(__int64 a1)
{
  _OWORD v2[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v2, 0, sizeof(v2));
  MmQuerySystemMemoryInformation(v2);
  EtwpLogMemInfo(a1, (__int64)v2);
  EtwpLogMemInfoWs(a1, *(unsigned __int64 *)&v2[0]);
}
