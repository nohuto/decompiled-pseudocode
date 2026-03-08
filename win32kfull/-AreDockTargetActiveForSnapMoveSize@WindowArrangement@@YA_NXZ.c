/*
 * XREFs of ?AreDockTargetActiveForSnapMoveSize@WindowArrangement@@YA_NXZ @ 0x1C0230B68
 * Callers:
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01EEA1C (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall WindowArrangement::AreDockTargetActiveForSnapMoveSize(WindowArrangement *this)
{
  bool result; // al

  result = 0;
  if ( byte_1C035C1E1 )
    return byte_1C035C1E5 != 0;
  return result;
}
