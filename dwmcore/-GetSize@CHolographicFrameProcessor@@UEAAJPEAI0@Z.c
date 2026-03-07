__int64 __fastcall CHolographicFrameProcessor::GetSize(
        CHolographicFrameProcessor *this,
        unsigned int *a2,
        unsigned int *a3)
{
  *a2 = *((_DWORD *)this + 7);
  *a3 = *((_DWORD *)this + 8);
  return 0LL;
}
