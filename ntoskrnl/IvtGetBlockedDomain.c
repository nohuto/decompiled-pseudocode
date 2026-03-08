/*
 * XREFs of IvtGetBlockedDomain @ 0x14052A538
 * Callers:
 *     IvtUpdateContextEntry @ 0x14052B564 (IvtUpdateContextEntry.c)
 *     IvtUpdateScalableModeTranslationStructures @ 0x14052BAEC (IvtUpdateScalableModeTranslationStructures.c)
 *     IvtInitializeIommu @ 0x140A87060 (IvtInitializeIommu.c)
 * Callees:
 *     HalpIvtFindReservedDomain @ 0x140532738 (HalpIvtFindReservedDomain.c)
 */

__int64 __fastcall IvtGetBlockedDomain(__int64 a1, unsigned int *a2, unsigned __int64 *a3)
{
  unsigned int *ReservedDomain; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  unsigned __int64 v8; // rdx

  if ( a2 && (ReservedDomain = (unsigned int *)HalpIvtFindReservedDomain(a1, *a2)) != 0LL )
  {
    v6 = *((_QWORD *)ReservedDomain + 1);
    result = *ReservedDomain;
    v8 = *(_QWORD *)(v6 + 16);
  }
  else
  {
    v8 = IvtBlockedPageTablePhysical;
    result = *(unsigned int *)(a1 + 260);
  }
  *a3 = v8 >> 12;
  return result;
}
