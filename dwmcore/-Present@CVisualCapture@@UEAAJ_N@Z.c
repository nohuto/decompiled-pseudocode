__int64 __fastcall CVisualCapture::Present(CVisualCapture *this)
{
  CVisualCapture::CheckForCaptureCompleted((CVisualCapture *)((char *)this - 1968));
  if ( !*((_BYTE *)this - 55) )
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this - 244) + 656LL) + 32LL))(
      *(_QWORD *)(*((_QWORD *)this - 244) + 656LL),
      0LL,
      1024LL);
  return 0LL;
}
