/*
 * XREFs of ?MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C02234F4
 * Callers:
 *     xxxSysCommand @ 0x1C0130364 (xxxSysCommand.c)
 *     xxxInitializeMoveSizeData @ 0x1C021184C (xxxInitializeMoveSizeData.c)
 *     xxxHandleNCMouseGuys @ 0x1C0223744 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     ?WindowArrangementApplicable@@YAHPEAUtagWND@@@Z @ 0x1C022360C (-WindowArrangementApplicable@@YAHPEAUtagWND@@@Z.c)
 */

bool __fastcall MoveWithArrangementAllowed(struct tagWND *a1)
{
  bool result; // al

  if ( !(unsigned int)WindowArrangementApplicable(a1) )
    return 0;
  result = 1;
  if ( (dword_1C032FBFC & 1) == 0 || (dword_1C032FBFC & 8) == 0 )
    return 0;
  return result;
}
