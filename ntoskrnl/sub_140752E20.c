/*
 * XREFs of sub_140752E20 @ 0x140752E20
 * Callers:
 *     WbFreeWarbirdProcess @ 0x140752CDC (WbFreeWarbirdProcess.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140752E20(__int64 a1)
{
  void *v2; // rcx

  if ( a1 )
  {
    v2 = *(void **)(a1 + 16);
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
}
