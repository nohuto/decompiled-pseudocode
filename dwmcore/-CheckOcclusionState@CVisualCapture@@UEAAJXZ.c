__int64 __fastcall CVisualCapture::CheckOcclusionState(CVisualCapture *this)
{
  __int64 result; // rax

  CVisualCapture::CheckForCaptureCompleted((CVisualCapture *)((char *)this - 1968));
  result = 0LL;
  if ( !*((_BYTE *)this - 212) )
  {
    if ( *((_BYTE *)this - 55) )
      return 142213121LL;
  }
  return result;
}
