/*
 * XREFs of ?Release@CHolographicFrameProcessor@@UEAAKXZ @ 0x1802AF1A0
 * Callers:
 *     ?Release@CHolographicFrameProcessor@@W7EAAKXZ @ 0x1801219A0 (-Release@CHolographicFrameProcessor@@W7EAAKXZ.c)
 *     ?Release@CHolographicFrameProcessor@@WCA@EAAKXZ @ 0x1801219C0 (-Release@CHolographicFrameProcessor@@WCA@EAAKXZ.c)
 *     ?Release@CHolographicFrameProcessor@@WCI@EAAKXZ @ 0x1801219E0 (-Release@CHolographicFrameProcessor@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicFrameProcessor::Release(CHolographicFrameProcessor *this)
{
  return CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)this + 2);
}
