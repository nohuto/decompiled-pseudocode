__int64 __fastcall CD3DSurface::GetResourceSize(CD3DSurface *this)
{
  __int64 result; // rax
  unsigned __int8 PixelFormatSize; // al
  __int64 v3; // rdx

  result = 0LL;
  if ( *((_DWORD *)this + 38) != 2 )
  {
    PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 35));
    return *(_DWORD *)(v3 + 124) * *(_DWORD *)(v3 + 128) * (PixelFormatSize >> 3);
  }
  return result;
}
