/*
 * XREFs of PnprMmFree @ 0x140963EA4
 * Callers:
 *     PnpReplacePartitionUnit @ 0x140961B80 (PnpReplacePartitionUnit.c)
 *     PnprMmConstruct @ 0x140963D98 (PnprMmConstruct.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PnprMmFree(_QWORD **a1)
{
  _QWORD *v2; // rcx
  _QWORD *v3; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == a1 )
      break;
    if ( (_QWORD **)v2[1] != a1 || (v3 = (_QWORD *)*v2, *(_QWORD **)(*v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = v3;
    v3[1] = a1;
    ExFreePoolWithTag(v2, 0x52706E50u);
  }
}
