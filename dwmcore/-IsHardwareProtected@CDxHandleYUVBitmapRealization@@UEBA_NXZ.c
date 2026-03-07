bool __fastcall CDxHandleYUVBitmapRealization::IsHardwareProtected(CDxHandleYUVBitmapRealization *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this - 13);
  result = 0;
  if ( v1 )
    return (*(_DWORD *)(v1 + 144) & 0x80000) != 0;
  return result;
}
