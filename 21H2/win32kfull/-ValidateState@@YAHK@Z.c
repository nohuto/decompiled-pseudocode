/*
 * XREFs of ?ValidateState@@YAHK@Z @ 0x1C014FCB4
 * Callers:
 *     SetWindowState @ 0x1C014FC00 (SetWindowState.c)
 *     ClearWindowState @ 0x1C014FC5C (ClearWindowState.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ValidateState(__int16 a1)
{
  return HIBYTE(a1) <= 0xFu && ((unsigned __int8)a1 & byte_1C02ED880[HIBYTE(a1)]) == (_BYTE)a1;
}
