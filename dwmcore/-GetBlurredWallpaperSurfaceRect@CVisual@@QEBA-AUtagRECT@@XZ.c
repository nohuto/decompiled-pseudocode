struct tagRECT *__fastcall CVisual::GetBlurredWallpaperSurfaceRect(CVisual *this, struct tagRECT *__return_ptr retstr)
{
  __int64 v2; // rcx
  __int64 i; // rcx

  v2 = *((_QWORD *)this + 28);
  if ( (*(_DWORD *)(v2 + 4) & 0x10000) != 0 )
  {
    for ( i = v2 + 12; (*(_DWORD *)i & 0x7F000000) != 0x10000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    *retstr = *(struct tagRECT *)(i + 4);
  }
  else
  {
    *retstr = 0LL;
  }
  return retstr;
}
