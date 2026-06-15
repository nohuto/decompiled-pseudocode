/*
 * XREFs of sub_1800C5A78 @ 0x1800C5A78
 * Callers:
 *     sub_1800C5D20 @ 0x1800C5D20 (sub_1800C5D20.c)
 *     sub_1800C5DC0 @ 0x1800C5DC0 (sub_1800C5DC0.c)
 * Callees:
 *     sub_1800C5024 @ 0x1800C5024 (sub_1800C5024.c)
 *     sub_1800C59F8 @ 0x1800C59F8 (sub_1800C59F8.c)
 *     sub_1800C5CB0 @ 0x1800C5CB0 (sub_1800C5CB0.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800C5A78(__int64 a1, _QWORD *a2)
{
  EnterCriticalSection(&stru_18019EF00);
  if ( !(unsigned int)sub_1800C59F8((__int64)a2) )
  {
    sub_1800C5CB0(&qword_18019EF28, a2[10]);
    sub_1800C5024(a2);
  }
  LeaveCriticalSection(&stru_18019EF00);
}
