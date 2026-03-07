__int64 __fastcall CDxHandleBitmapRealization::GetRotation(CDxHandleBitmapRealization *this)
{
  return D3DDDIRotationToDXGIRotation(*((unsigned int *)this + 41));
}
