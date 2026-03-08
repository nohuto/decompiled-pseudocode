/*
 * XREFs of CmpFreeSectionList @ 0x140B4ECD4
 * Callers:
 *     EmpParseInfDatabase @ 0x140B4CEE0 (EmpParseInfDatabase.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     CmpFreeLineList @ 0x140B4ED2C (CmpFreeLineList.c)
 */

void __fastcall CmpFreeSectionList(PVOID P)
{
  PVOID v1; // rbx
  void *v2; // rdi
  void *v3; // rcx

  if ( P )
  {
    v1 = P;
    do
    {
      v2 = *(void **)v1;
      if ( *((_BYTE *)v1 + 24) )
      {
        v3 = (void *)*((_QWORD *)v1 + 1);
        if ( v3 )
          ExFreePoolWithTag(v3, 0);
      }
      CmpFreeLineList(*((PVOID *)v1 + 2));
      ExFreePoolWithTag(v1, 0);
      v1 = v2;
    }
    while ( v2 );
  }
}
