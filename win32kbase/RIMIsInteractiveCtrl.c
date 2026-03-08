/*
 * XREFs of RIMIsInteractiveCtrl @ 0x1C01AF3B8
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C01AC4D4 (RIMAllocateHidDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C01B0738 (RIMVirtAllocateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C01C16CC (RIMIDECreateHIDDesc.c)
 * Callees:
 *     <none>
 */

bool __fastcall RIMIsInteractiveCtrl(_WORD *a1)
{
  bool result; // al

  result = 0;
  if ( a1[1] == 1 )
    return *a1 == 14;
  return result;
}
