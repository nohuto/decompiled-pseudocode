__int64 __fastcall ReleaseWallpaperSettings(_DWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( (*a1)-- == 1 )
  {
    Win32FreePool(a1);
    return 1LL;
  }
  return result;
}
