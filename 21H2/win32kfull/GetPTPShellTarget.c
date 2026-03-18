/*
 * XREFs of GetPTPShellTarget @ 0x1C0212580
 * Callers:
 *     <none>
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C0077618 (INPUTDEST_FROM_PWND.c)
 *     GetPTPShellListener @ 0x1C0212548 (GetPTPShellListener.c)
 */

__int64 __fastcall GetPTPShellTarget(__int64 a1)
{
  __int64 PTPShellListener; // rax
  _DWORD *v3; // rcx

  PTPShellListener = GetPTPShellListener();
  INPUTDEST_FROM_PWND(v3, PTPShellListener);
  return a1;
}
