/*
 * XREFs of MmQuerySystemMemoryInformation @ 0x1402FCE88
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x14045F4B0 (EtwpLogMemInfoTimerCallback.c)
 *     PfpPrivSourceEnum @ 0x1407E7DC0 (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoRundown @ 0x1409EBF14 (EtwpLogMemInfoRundown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmQuerySystemMemoryInformation(_OWORD *a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+0h] [rbp-28h]
  __int128 v3; // [rsp+10h] [rbp-18h]

  *(_QWORD *)&v2 = qword_140C695A8;
  *((_QWORD *)&v2 + 1) = qword_140C65108;
  *(_QWORD *)&v3 = qword_140C69630;
  *((_QWORD *)&v3 + 1) = qword_140C6F568;
  result = 0LL;
  *a1 = v2;
  a1[1] = v3;
  return result;
}
