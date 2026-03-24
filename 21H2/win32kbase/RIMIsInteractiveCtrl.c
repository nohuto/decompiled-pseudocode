/*
 * XREFs of RIMIsInteractiveCtrl @ 0x1C00B675C
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C0056F3C (RIMAllocateHidDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0162908 (RIMVirtAllocateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C01674DC (RIMIDECreateHIDDesc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMIsInteractiveCtrl(_WORD *a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1[1] != 1 || *a1 != 14 )
    return 0LL;
  return result;
}
