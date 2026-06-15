/*
 * XREFs of sub_180072EA8 @ 0x180072EA8
 * Callers:
 *     sub_1801366A8 @ 0x1801366A8 (sub_1801366A8.c)
 *     sub_1801367C1 @ 0x1801367C1 (sub_1801367C1.c)
 * Callees:
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     sub_180134D8C @ 0x180134D8C (sub_180134D8C.c)
 */

void __fastcall sub_180072EA8(__int64 a1)
{
  int v1; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    v1 = sub_180134D8C(*(_QWORD *)a1);
    if ( v1 < 0 )
      sub_18006D26C((int)retaddr, 1527, (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp", v1);
  }
}
