/*
 * XREFs of VfMiscExDeleteResourceLite_Entry @ 0x140ADCAB0
 * Callers:
 *     <none>
 * Callees:
 *     VfDeleteResource @ 0x140AE14D0 (VfDeleteResource.c)
 */

__int64 __fastcall VfMiscExDeleteResourceLite_Entry(__int64 a1)
{
  return VfDeleteResource(*(_QWORD *)(a1 + 8));
}
