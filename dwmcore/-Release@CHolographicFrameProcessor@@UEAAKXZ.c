/*
 * XREFs of ?Release@CHolographicFrameProcessor@@UEAAKXZ @ 0x1802ABA20
 * Callers:
 *     ?Release@CHolographicFrameProcessor@@W7EAAKXZ @ 0x18011D7F0 (-Release@CHolographicFrameProcessor@@W7EAAKXZ.c)
 *     ?Release@CHolographicFrameProcessor@@WCA@EAAKXZ @ 0x18011D810 (-Release@CHolographicFrameProcessor@@WCA@EAAKXZ.c)
 *     ?Release@CHolographicFrameProcessor@@WCI@EAAKXZ @ 0x18011D830 (-Release@CHolographicFrameProcessor@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicFrameProcessor::Release(CHolographicFrameProcessor *this)
{
  return CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)this + 2);
}
