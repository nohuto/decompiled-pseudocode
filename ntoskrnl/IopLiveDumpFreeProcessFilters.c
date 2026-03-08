/*
 * XREFs of IopLiveDumpFreeProcessFilters @ 0x14094B484
 * Callers:
 *     IopLiveDumpReleaseResources @ 0x14094BEA8 (IopLiveDumpReleaseResources.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall IopLiveDumpFreeProcessFilters(__int64 a1)
{
  _QWORD **v1; // rbx
  _QWORD *v2; // rcx
  _QWORD *v3; // rax

  v1 = (_QWORD **)(a1 + 1200);
  while ( 1 )
  {
    v2 = *v1;
    if ( *v1 == v1 )
      break;
    if ( (_QWORD **)v2[1] != v1 || (v3 = (_QWORD *)*v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *v1 = v3;
    v3[1] = v1;
    ExFreePoolWithTag(v2, 0x706D644Cu);
  }
}
