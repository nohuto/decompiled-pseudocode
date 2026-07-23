/*
 * XREFs of SepFreeTokenCapabilities @ 0x1403005B0
 * Callers:
 *     SepSetTokenCapabilities @ 0x1406CCA98 (SepSetTokenCapabilities.c)
 *     SepTokenDeleteMethod @ 0x1406FF0D0 (SepTokenDeleteMethod.c)
 * Callees:
 *     SepDeReferenceSharedSidEntries @ 0x14092506C (SepDeReferenceSharedSidEntries.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall SepFreeTokenCapabilities(__int64 a1)
{
  if ( SepTokenCapabilitySidSharingEnabled )
    SepDeReferenceSharedSidEntries(*(_QWORD *)(a1 + 792), *(unsigned int *)(a1 + 800));
  ExFreePoolWithTag(*(PVOID *)(a1 + 792), 0);
}
