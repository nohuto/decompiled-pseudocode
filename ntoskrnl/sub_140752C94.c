/*
 * XREFs of sub_140752C94 @ 0x140752C94
 * Callers:
 *     WbFreeWarbirdProcess @ 0x140752CDC (WbFreeWarbirdProcess.c)
 *     sub_140755994 @ 0x140755994 (sub_140755994.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140752C94(_QWORD *P)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( P )
  {
    v2 = (void *)P[5];
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    v3 = (void *)P[7];
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    ExFreePoolWithTag(P, 0);
  }
  return 0LL;
}
