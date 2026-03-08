/*
 * XREFs of ?Release@?$CMILRefCountBaseT@UIAccelerator@@@@UEAAKXZ @ 0x180230A90
 * Callers:
 *     ?Release@CExpressionForce@@WBA@EAAKXZ @ 0x18011A630 (-Release@CExpressionForce@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CMILRefCountBaseT<IAccelerator>::Release(volatile signed __int32 *a1)
{
  return CMILRefCountBaseT<IAccelerator>::InternalRelease(a1);
}
