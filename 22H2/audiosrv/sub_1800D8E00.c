/*
 * XREFs of sub_1800D8E00 @ 0x1800D8E00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180036510 @ 0x180036510 (sub_180036510.c)
 *     sub_180047278 @ 0x180047278 (sub_180047278.c)
 *     sub_1801259DC @ 0x1801259DC (sub_1801259DC.c)
 */

// Hidden C++ exception states: #wind=1
void sub_1800D8E00()
{
  ULONGLONG v0; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0LL;
  sub_180047278((__int64 *)&v0);
  if ( (int)sub_1801259DC(&v0) >= 0 && v0 )
    sub_180036510(v0, 0);
  sub_180047278((__int64 *)&v0);
  sub_18005841C();
}
