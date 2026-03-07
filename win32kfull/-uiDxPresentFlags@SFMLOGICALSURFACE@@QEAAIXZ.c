__int64 __fastcall SFMLOGICALSURFACE::uiDxPresentFlags(SFMLOGICALSURFACE *this)
{
  int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  if ( (unsigned int)GreDwmUseDeviceBitmapsForMultiAdapter()
    && (unsigned int)IsDwmActive()
    && *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(v3) + 32) + 8724LL) )
  {
    v2 = 8;
  }
  return *((_DWORD *)this + 53) | (unsigned int)v2;
}
