/*
 * XREFs of KiGetTrapFrameMode @ 0x140394460
 * Callers:
 *     KiSwInterruptDispatch @ 0x1403DC520 (KiSwInterruptDispatch.c)
 * Callees:
 *     <none>
 */

char __fastcall KiGetTrapFrameMode(__int64 a1)
{
  return *(_BYTE *)(a1 + 368) & 1;
}
