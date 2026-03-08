/*
 * XREFs of SetWindowState @ 0x1C0226960
 * Callers:
 *     NtUserSetWindowState @ 0x1C01DE7D0 (NtUserSetWindowState.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     ?ValidateState@@YAHK@Z @ 0x1C02268D8 (-ValidateState@@YAHK@Z.c)
 */

__int64 __fastcall SetWindowState(__int64 a1, __int16 a2)
{
  unsigned __int16 v2; // r10
  __int64 *v3; // r11

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) == *(_QWORD *)(gptiCurrent + 424LL) && ValidateState(a2) )
    SetOrClrWF(1, v3, v2, 1);
  return 1LL;
}
