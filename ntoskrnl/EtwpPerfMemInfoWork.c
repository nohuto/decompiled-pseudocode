/*
 * XREFs of EtwpPerfMemInfoWork @ 0x1408A27F0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpLogMemInfoWs @ 0x1408A21C4 (EtwpLogMemInfoWs.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpPerfMemInfoWork(_QWORD *a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1[4];
  ExFreePoolWithTag(a1, 0);
  EtwpLogMemInfoWs(0LL, v1);
}
