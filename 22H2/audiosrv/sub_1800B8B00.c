/*
 * XREFs of sub_1800B8B00 @ 0x1800B8B00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800F76D0 @ 0x1800F76D0 (sub_1800F76D0.c)
 *     sub_180104F08 @ 0x180104F08 (sub_180104F08.c)
 */

// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall sub_1800B8B00(__int64 a1, _QWORD *a2)
{
  BOOL v3; // ebx

  v3 = (int)sub_1800F76D0(*a2 + 28LL) < 0;
  sub_180104F08(*a2 + 28LL);
  if ( (int)MMDevAPI_15() < 0 )
    v3 = 1;
  _o_free(*a2);
  *a2 = 0LL;
  return v3;
}
