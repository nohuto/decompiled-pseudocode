/*
 * XREFs of ?DragOperationFromMaximizedAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C0230B84
 * Callers:
 *     xxxSysCommand @ 0x1C00DE67C (xxxSysCommand.c)
 *     xxxHandleNCMouseGuys @ 0x1C02035C0 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     ?IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C0230BB0 (-IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall WindowArrangement::DragOperationFromMaximizedAllowed(WindowArrangement *this, const struct tagWND *a2)
{
  char v2; // bl

  v2 = 0;
  if ( (dword_1C035C1FC & 2) != 0 )
    return WindowArrangement::IsSupported(this, a2);
  return v2;
}
