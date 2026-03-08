/*
 * XREFs of ?BufferingDisabled@CInteraction@@UEBAHXZ @ 0x1801063C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::BufferingDisabled(CInteraction *this)
{
  return (*((unsigned __int8 *)this + 128) >> 6) & 1;
}
