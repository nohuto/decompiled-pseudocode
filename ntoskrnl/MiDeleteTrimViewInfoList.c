/*
 * XREFs of MiDeleteTrimViewInfoList @ 0x14085BDD4
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1402A031C (MiTrimSharedPageFromViews.c)
 *     MiLocateSharedPageViews @ 0x1406340C0 (MiLocateSharedPageViews.c)
 *     MmQueryBadAddresses @ 0x140A2D108 (MmQueryBadAddresses.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteTrimViewInfoList(_QWORD *P)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdi
  void *v3; // rcx

  if ( P )
  {
    v1 = P;
    do
    {
      v2 = v1;
      v1 = (_QWORD *)*v1;
      v3 = (void *)v2[1];
      if ( v3 )
        ObfDereferenceObject(v3);
      ExFreePoolWithTag(v2, 0);
    }
    while ( v1 );
  }
}
