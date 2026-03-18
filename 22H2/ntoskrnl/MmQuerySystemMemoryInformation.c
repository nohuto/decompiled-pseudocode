/*
 * XREFs of MmQuerySystemMemoryInformation @ 0x1403680B8
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x1404673B0 (EtwpLogMemInfoTimerCallback.c)
 *     PfpPrivSourceEnum @ 0x140741CC0 (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoRundown @ 0x1409EEDA8 (EtwpLogMemInfoRundown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmQuerySystemMemoryInformation(_OWORD *a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+0h] [rbp-28h]
  __int128 v3; // [rsp+10h] [rbp-18h]

  *(_QWORD *)&v2 = qword_140C69A28;
  *((_QWORD *)&v2 + 1) = qword_140C65588;
  *(_QWORD *)&v3 = qword_140C69AB0;
  *((_QWORD *)&v3 + 1) = qword_140C6F9A8;
  result = 0LL;
  *a1 = v2;
  a1[1] = v3;
  return result;
}
