/*
 * XREFs of IommuInitializeLibrary @ 0x1403B5BD8
 * Callers:
 *     HalpIommuInitSystem @ 0x140A8A420 (HalpIommuInitSystem.c)
 * Callees:
 *     IommupHvInitializeLibrary @ 0x140B93694 (IommupHvInitializeLibrary.c)
 */

__int64 IommuInitializeLibrary()
{
  IommupSystemContextListPushLock = 0LL;
  qword_140C601F8 = (__int64)&IommupSystemContextListHead;
  IommupSystemContextListHead = &IommupSystemContextListHead;
  if ( HalpHvIommu )
    IommupHvInitializeLibrary();
  return 0LL;
}
