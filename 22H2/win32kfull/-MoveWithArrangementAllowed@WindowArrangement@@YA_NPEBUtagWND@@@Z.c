/*
 * XREFs of ?MoveWithArrangementAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C022DED8
 * Callers:
 *     xxxSysCommand @ 0x1C00A7BFC (xxxSysCommand.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01ED858 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C0200A20 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     ?IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C022DE9C (-IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall WindowArrangement::MoveWithArrangementAllowed(WindowArrangement *this, const struct tagWND *a2)
{
  char v2; // bl

  v2 = 0;
  if ( (dword_1C03591FC & 8) != 0 )
    return WindowArrangement::IsSupported(this, a2) != 0;
  return v2;
}
