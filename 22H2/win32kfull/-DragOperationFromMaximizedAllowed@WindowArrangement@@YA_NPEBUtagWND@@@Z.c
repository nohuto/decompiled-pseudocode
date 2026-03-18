/*
 * XREFs of ?DragOperationFromMaximizedAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C022DE70
 * Callers:
 *     xxxSysCommand @ 0x1C00A7BFC (xxxSysCommand.c)
 *     xxxHandleNCMouseGuys @ 0x1C0200A20 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     ?IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C022DE9C (-IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall WindowArrangement::DragOperationFromMaximizedAllowed(WindowArrangement *this, const struct tagWND *a2)
{
  char v2; // bl

  v2 = 0;
  if ( (dword_1C03591FC & 2) != 0 )
    return WindowArrangement::IsSupported(this, a2);
  return v2;
}
