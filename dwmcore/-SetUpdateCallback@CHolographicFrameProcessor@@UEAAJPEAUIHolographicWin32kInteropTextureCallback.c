/*
 * XREFs of ?SetUpdateCallback@CHolographicFrameProcessor@@UEAAJPEAUIHolographicWin32kInteropTextureCallback@@@Z @ 0x180108060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicFrameProcessor::SetUpdateCallback(
        CHolographicFrameProcessor *this,
        struct IHolographicWin32kInteropTextureCallback *a2)
{
  *((_QWORD *)this + 2) = a2;
  return 0LL;
}
