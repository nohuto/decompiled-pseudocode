/*
 * XREFs of sub_1407E15BC @ 0x1407E15BC
 * Callers:
 *     sub_1407D2B00 @ 0x1407D2B00 (sub_1407D2B00.c)
 *     WbFreeWarbirdProcess @ 0x1407E1440 (WbFreeWarbirdProcess.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407E15BC(_QWORD *P)
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
