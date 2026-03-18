/*
 * XREFs of ?DragOperationFromMaximizedAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C023CA38
 * Callers:
 *     xxxSysCommand @ 0x1C011BA1C (xxxSysCommand.c)
 *     xxxHandleNCMouseGuys @ 0x1C021D324 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     ?IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C023CA64 (-IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall WindowArrangement::DragOperationFromMaximizedAllowed(WindowArrangement *this, const struct tagWND *a2)
{
  char v2; // bl

  v2 = 0;
  if ( (dword_1C032CF64 & 2) != 0 )
    return WindowArrangement::IsSupported(this, a2);
  return v2;
}
