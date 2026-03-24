/*
 * XREFs of ?SizeWithSnapAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0223B7C
 * Callers:
 *     xxxInitializeMoveSizeData @ 0x1C0211E0C (xxxInitializeMoveSizeData.c)
 *     xxxHandleNCMouseGuys @ 0x1C0223D04 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C0223BCC (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 */

bool __fastcall SizeWithSnapAllowed(struct tagWND *a1)
{
  bool result; // al

  if ( !(unsigned int)WindowArrangementApplicable(a1) )
    return 0;
  result = 1;
  if ( (dword_1C0330BFC & 1) == 0 || (dword_1C0330BFC & 4) == 0 )
    return 0;
  return result;
}
