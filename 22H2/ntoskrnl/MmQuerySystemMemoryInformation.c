/*
 * XREFs of MmQuerySystemMemoryInformation @ 0x1403262B8
 * Callers:
 *     EtwpLogMemInfoTimerCallback @ 0x1405A8C60 (EtwpLogMemInfoTimerCallback.c)
 *     PfpPrivSourceEnum @ 0x14062B8D4 (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoRundown @ 0x14093DCA4 (EtwpLogMemInfoRundown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmQuerySystemMemoryInformation(_OWORD *a1)
{
  __int64 result; // rax
  __int128 v2; // [rsp+0h] [rbp-28h]
  __int128 v3; // [rsp+10h] [rbp-18h]

  *(_QWORD *)&v2 = qword_140C4EF28;
  *((_QWORD *)&v2 + 1) = qword_140C4C8C8;
  *(_QWORD *)&v3 = qword_140C4EFB8;
  *((_QWORD *)&v3 + 1) = qword_140C52AA8;
  result = 0LL;
  *a1 = v2;
  a1[1] = v3;
  return result;
}
