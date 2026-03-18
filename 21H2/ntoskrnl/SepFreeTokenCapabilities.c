/*
 * XREFs of SepFreeTokenCapabilities @ 0x1402493D4
 * Callers:
 *     SepTokenDeleteMethod @ 0x1406FE720 (SepTokenDeleteMethod.c)
 *     SepSetTokenCapabilities @ 0x140799BB0 (SepSetTokenCapabilities.c)
 * Callees:
 *     SepDeReferenceSharedSidEntries @ 0x1409CE7E8 (SepDeReferenceSharedSidEntries.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall SepFreeTokenCapabilities(__int64 a1)
{
  if ( SepTokenCapabilitySidSharingEnabled )
    SepDeReferenceSharedSidEntries(*(_QWORD *)(a1 + 792), *(unsigned int *)(a1 + 800));
  ExFreePoolWithTag(*(PVOID *)(a1 + 792), 0);
}
