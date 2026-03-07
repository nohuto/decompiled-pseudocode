bool __fastcall CDxHandleBitmapRealization::GetPresentAllowedTearing(CDxHandleBitmapRealization *this)
{
  return (*((_DWORD *)this - 32) & 0x1000) != 0;
}
