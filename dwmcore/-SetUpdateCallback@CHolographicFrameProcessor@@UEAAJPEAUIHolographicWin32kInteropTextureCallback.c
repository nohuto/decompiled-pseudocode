__int64 __fastcall CHolographicFrameProcessor::SetUpdateCallback(
        CHolographicFrameProcessor *this,
        struct IHolographicWin32kInteropTextureCallback *a2)
{
  *((_QWORD *)this + 2) = a2;
  return 0LL;
}
