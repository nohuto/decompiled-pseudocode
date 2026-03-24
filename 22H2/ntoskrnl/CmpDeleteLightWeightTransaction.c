/*
 * XREFs of CmpDeleteLightWeightTransaction @ 0x1406A6130
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall CmpDeleteLightWeightTransaction(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 16);
  if ( v1 )
    ExFreePoolWithTag(v1, 0x72544D43u);
}
