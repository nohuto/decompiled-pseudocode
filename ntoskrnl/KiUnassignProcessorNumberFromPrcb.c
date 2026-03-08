/*
 * XREFs of KiUnassignProcessorNumberFromPrcb @ 0x14056E48C
 * Callers:
 *     KiStartDynamicProcessor @ 0x140970898 (KiStartDynamicProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiUnassignProcessorNumberFromPrcb(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = (unsigned __int64)*(unsigned __int8 *)(a1 + 208) << 6;
  KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)] = 0;
  result = *(unsigned __int8 *)(a1 + 209);
  KiProcessorNumberToIndexMappingTable[result + v1] = 0;
  *(_QWORD *)(a1 + 192) = 0LL;
  return result;
}
