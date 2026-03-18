/*
 * XREFs of ?SizeWithSnapAllowed@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C023CAD4
 * Callers:
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C020D6AC (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     xxxHandleNCMouseGuys @ 0x1C021D324 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     ?IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z @ 0x1C023CA64 (-IsSupported@WindowArrangement@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall WindowArrangement::SizeWithSnapAllowed(WindowArrangement *this, const struct tagWND *a2)
{
  char v2; // bl

  v2 = 0;
  if ( (dword_1C032CF64 & 4) != 0 )
    return WindowArrangement::IsSupported(this, a2) != 0;
  return v2;
}
