/*
 * XREFs of SepFreeTokenCapabilities @ 0x140275EE0
 * Callers:
 *     SepSetTokenCapabilities @ 0x1405DD33C (SepSetTokenCapabilities.c)
 *     SepTokenDeleteMethod @ 0x140635410 (SepTokenDeleteMethod.c)
 * Callees:
 *     SepDeReferenceSharedSidEntries @ 0x140924F5C (SepDeReferenceSharedSidEntries.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall SepFreeTokenCapabilities(__int64 a1)
{
  if ( SepTokenCapabilitySidSharingEnabled )
    SepDeReferenceSharedSidEntries(*(_QWORD *)(a1 + 792), *(unsigned int *)(a1 + 800));
  ExFreePoolWithTag(*(PVOID *)(a1 + 792), 0);
}
