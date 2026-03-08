/*
 * XREFs of MiFreeImageLoadConfig @ 0x140A47684
 * Callers:
 *     MiRelocateImage @ 0x1407F2760 (MiRelocateImage.c)
 *     MiParseImageLoadConfig @ 0x1407F4AEC (MiParseImageLoadConfig.c)
 *     MiFreeRelocations @ 0x140A45458 (MiFreeRelocations.c)
 * Callees:
 *     MiFreeNextAffinityWalker @ 0x1405B559C (MiFreeNextAffinityWalker.c)
 *     MiFreeRetpolineRelocationInformation @ 0x140861430 (MiFreeRetpolineRelocationInformation.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeImageLoadConfig(_QWORD *a1)
{
  void *v2; // rcx
  _QWORD *v3; // rcx
  void *v4; // rcx

  v2 = (void *)a1[1];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x4C617652u);
    a1[1] = 0LL;
  }
  v3 = (_QWORD *)a1[2];
  if ( v3 )
  {
    MiFreeRetpolineRelocationInformation(v3);
    a1[2] = 0LL;
  }
  v4 = (void *)a1[3];
  if ( v4 )
    MiFreeNextAffinityWalker(v4);
}
