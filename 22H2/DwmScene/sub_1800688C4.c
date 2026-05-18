/*
 * XREFs of sub_1800688C4 @ 0x1800688C4
 * Callers:
 *     sub_180096B80 @ 0x180096B80 (sub_180096B80.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800688C4(__int64 a1, char a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 96) + 14472LL;
  if ( a2 != *(_BYTE *)(v2 + 60) )
  {
    *(_BYTE *)(v2 + 60) = a2;
    *(_BYTE *)(v2 + 61) = 1;
  }
}
