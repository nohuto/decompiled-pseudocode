/*
 * XREFs of SepFreeTokenCapabilities @ 0x1402F35E0
 * Callers:
 *     SepSetTokenCapabilities @ 0x140710278 (SepSetTokenCapabilities.c)
 *     SepTokenDeleteMethod @ 0x1407C3CB0 (SepTokenDeleteMethod.c)
 * Callees:
 *     SepDeReferenceSharedSidEntries @ 0x1409CE4F0 (SepDeReferenceSharedSidEntries.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall SepFreeTokenCapabilities(__int64 a1)
{
  PVOID *v1; // rbx

  v1 = (PVOID *)(a1 + 792);
  if ( SepTokenCapabilitySidSharingEnabled )
    SepDeReferenceSharedSidEntries(*v1, *(unsigned int *)(a1 + 800));
  ExFreePoolWithTag(*v1, 0);
}
