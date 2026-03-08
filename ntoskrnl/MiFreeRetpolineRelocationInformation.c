/*
 * XREFs of MiFreeRetpolineRelocationInformation @ 0x140861430
 * Callers:
 *     MiCreateRetpolineRelocationInformation @ 0x1407F5B50 (MiCreateRetpolineRelocationInformation.c)
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 *     MiFreeImageLoadConfig @ 0x140A47684 (MiFreeImageLoadConfig.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeRetpolineRelocationInformation(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)P[2];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = (void *)P[6];
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  ExFreePoolWithTag(P, 0);
}
