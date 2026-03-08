/*
 * XREFs of IvtGetIdentityMappedDomain @ 0x14052A60C
 * Callers:
 *     IvtInitializeIommu @ 0x140A87060 (IvtInitializeIommu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IvtGetIdentityMappedDomain(__int64 a1, __int64 *a2)
{
  *a2 = *(__int64 *)(a1 + 328) >> 12;
  return *(unsigned int *)(a1 + 264);
}
