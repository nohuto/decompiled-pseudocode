/*
 * XREFs of KeRemoveProcessorGroupAffinity @ 0x1402AB070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeRemoveProcessorGroupAffinity(__int64 *a1, int a2)
{
  __int64 result; // rax

  result = *a1;
  _bittestandreset64(&result, KiProcessorIndexToNumberMappingTable[a2] & 0x3F);
  *a1 = result;
  return result;
}
