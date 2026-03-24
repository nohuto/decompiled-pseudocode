/*
 * XREFs of IvtGetIdentityMappedDomain @ 0x1404DFF64
 * Callers:
 *     IvtInitializeIommu @ 0x1409A9A90 (IvtInitializeIommu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IvtGetIdentityMappedDomain(__int64 a1, __int64 *a2)
{
  *a2 = *(__int64 *)(a1 + 272) >> 12;
  return *(unsigned int *)(a1 + 224);
}
