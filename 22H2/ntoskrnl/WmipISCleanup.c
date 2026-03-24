/*
 * XREFs of WmipISCleanup @ 0x140772010
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall WmipISCleanup(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 88);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 88) = 0LL;
  }
}
