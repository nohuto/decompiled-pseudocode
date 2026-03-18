/*
 * XREFs of ?AreDockTargetActiveForSnapMoveSize@WindowArrangement@@YA_NXZ @ 0x1C023CA1C
 * Callers:
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C020D6AC (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall WindowArrangement::AreDockTargetActiveForSnapMoveSize(WindowArrangement *this)
{
  bool result; // al

  result = 0;
  if ( byte_1C032CF49 )
    return byte_1C032CF4D != 0;
  return result;
}
