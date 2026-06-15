/*
 * XREFs of sub_1800E349C @ 0x1800E349C
 * Callers:
 *     sub_1800E397C @ 0x1800E397C (sub_1800E397C.c)
 *     sub_1800E3B3C @ 0x1800E3B3C (sub_1800E3B3C.c)
 * Callees:
 *     sub_180002B50 @ 0x180002B50 (sub_180002B50.c)
 */

void __fastcall sub_1800E349C(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 272);
  if ( v2 < 0 )
    sub_180002B50(2 * v2);
  sub_18004F040(a1 + 8);
}
