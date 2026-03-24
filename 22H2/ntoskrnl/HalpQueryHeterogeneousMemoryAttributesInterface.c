/*
 * XREFs of HalpQueryHeterogeneousMemoryAttributesInterface @ 0x1406A0C9C
 * Callers:
 *     HaliQuerySystemInformation @ 0x14098F9D0 (HaliQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpQueryHeterogeneousMemoryAttributesInterface(_QWORD *a1)
{
  *a1 = HalpNumaQueryMemorySideCacheInfo;
  return 0LL;
}
