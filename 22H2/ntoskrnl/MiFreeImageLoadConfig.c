/*
 * XREFs of MiFreeImageLoadConfig @ 0x14076A848
 * Callers:
 *     MiParseImageLoadConfig @ 0x140662858 (MiParseImageLoadConfig.c)
 *     MiRelocateImage @ 0x140702D80 (MiRelocateImage.c)
 *     MiFreeRelocations @ 0x14076A7B8 (MiFreeRelocations.c)
 * Callees:
 *     MiFreeRetpolineRelocationInformation @ 0x14078D6C4 (MiFreeRetpolineRelocationInformation.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeImageLoadConfig(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)(a1 + 16);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x4C617652u);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  v3 = *(void **)(a1 + 24);
  if ( v3 )
  {
    MiFreeRetpolineRelocationInformation(v3);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
