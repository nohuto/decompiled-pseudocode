/*
 * XREFs of IommuInitializeLibrary @ 0x1403B0F48
 * Callers:
 *     HalpIommuInitSystem @ 0x140A86E10 (HalpIommuInitSystem.c)
 * Callees:
 *     IommupHvInitializeLibrary @ 0x140B8F474 (IommupHvInitializeLibrary.c)
 */

__int64 IommuInitializeLibrary()
{
  IommupSystemContextListPushLock = 0LL;
  qword_140C5FD98 = (__int64)&IommupSystemContextListHead;
  IommupSystemContextListHead = &IommupSystemContextListHead;
  if ( HalpHvIommu )
    IommupHvInitializeLibrary();
  return 0LL;
}
