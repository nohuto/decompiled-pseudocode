/*
 * XREFs of BiFreeIdentifierList @ 0x1408043F8
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x140804D40 (BiBindEfiNamespaceObjects.c)
 *     BiBuildIdentifierList @ 0x140806BE8 (BiBuildIdentifierList.c)
 *     BiExportStoreAlterationsToEfi @ 0x140A5E9AC (BiExportStoreAlterationsToEfi.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall BiFreeIdentifierList(_QWORD **a1)
{
  _QWORD *v1; // rdi
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  void *v6; // rcx

  v1 = *a1;
  while ( v1 != a1 )
  {
    v3 = (_QWORD *)*v1;
    v4 = v1;
    v1 = v3;
    if ( (_QWORD *)v3[1] != v4 || (v5 = (_QWORD *)v4[1], (_QWORD *)*v5 != v4) )
      __fastfail(3u);
    *v5 = v3;
    v3[1] = v5;
    if ( (v4[6] & 1) != 0 )
    {
      v6 = (void *)v4[5];
      if ( v6 )
        ExFreePoolWithTag(v6, 0x4B444342u);
    }
    ExFreePoolWithTag(v4, 0x4B444342u);
  }
}
