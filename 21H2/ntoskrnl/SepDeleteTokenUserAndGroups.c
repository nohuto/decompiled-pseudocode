/*
 * XREFs of SepDeleteTokenUserAndGroups @ 0x140923138
 * Callers:
 *     SepTokenDeleteMethod @ 0x1406FF0D0 (SepTokenDeleteMethod.c)
 * Callees:
 *     SepDereferenceSidValuesBlock @ 0x1409231C0 (SepDereferenceSidValuesBlock.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall SepDeleteTokenUserAndGroups(__int64 a1)
{
  void *v2; // rcx
  unsigned int v3; // eax
  void *v4; // rcx

  v2 = *(void **)(a1 + 1120);
  if ( v2 )
  {
    v3 = *(_DWORD *)(a1 + 208);
    if ( v3 != -1 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 152) + 16LL * v3) = 0LL;
      v2 = *(void **)(a1 + 1120);
      *(_DWORD *)(a1 + 208) = -1;
    }
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 1120) = 0LL;
  }
  v4 = *(void **)(a1 + 1128);
  if ( v4 )
  {
    SepDereferenceSidValuesBlock(v4);
    *(_QWORD *)(a1 + 1128) = 0LL;
  }
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 124) = 0;
}
