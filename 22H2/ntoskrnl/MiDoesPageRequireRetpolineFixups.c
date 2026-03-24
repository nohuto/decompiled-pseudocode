/*
 * XREFs of MiDoesPageRequireRetpolineFixups @ 0x1405FC594
 * Callers:
 *     MiRelocateImagePfn @ 0x1405FC260 (MiRelocateImagePfn.c)
 *     MiInitializePrivateFixupBitmap @ 0x1405FC490 (MiInitializePrivateFixupBitmap.c)
 *     MiPageHasRelocations @ 0x14068044C (MiPageHasRelocations.c)
 *     MiRelocateImage @ 0x140702D80 (MiRelocateImage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiDoesPageRequireRetpolineFixups(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 24);
  return v2 && *(_QWORD *)(v2 + 8LL * a2 + 56);
}
