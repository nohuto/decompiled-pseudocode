/*
 * XREFs of sub_1800D8D90 @ 0x1800D8D90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180047278 @ 0x180047278 (sub_180047278.c)
 *     sub_1801259DC @ 0x1801259DC (sub_1801259DC.c)
 *     sub_180136D4C @ 0x180136D4C (sub_180136D4C.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800D8D90(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD **)(a1 + 8);
  if ( v1 )
    v1 = (_QWORD *)*v1;
  v2 = 0LL;
  sub_180047278(&v2);
  if ( (int)sub_1801259DC(&v2) >= 0 && v2 )
    sub_180136D4C(v2, v1);
  sub_180047278(&v2);
  sub_18005841C();
}
