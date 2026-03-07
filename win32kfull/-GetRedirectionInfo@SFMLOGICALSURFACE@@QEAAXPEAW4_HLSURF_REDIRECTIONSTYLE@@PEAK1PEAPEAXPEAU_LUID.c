void __fastcall SFMLOGICALSURFACE::GetRedirectionInfo(
        SFMLOGICALSURFACE *this,
        enum _HLSURF_REDIRECTIONSTYLE *a2,
        unsigned int *a3,
        unsigned int *a4,
        void **a5,
        struct _LUID *a6)
{
  __int64 v6; // r10

  v6 = *((_QWORD *)this + 23);
  if ( v6 )
  {
    *a3 = *(_DWORD *)(v6 + 32);
    *a4 = *(_DWORD *)(v6 + 36);
    if ( (*(_DWORD *)(v6 + 92) & 1) != 0 )
    {
      *(_DWORD *)a2 = 2;
      if ( a5 )
        *a5 = *(void **)(v6 + 544);
      if ( a6 )
        *a6 = *(struct _LUID *)(v6 + 552);
      return;
    }
    if ( (*(_DWORD *)(v6 + 88) & 0x800) == 0 )
      return;
    *(_DWORD *)a2 = 1;
    if ( a5 )
      *a5 = *(void **)(v6 + 8);
  }
  else
  {
    *(_DWORD *)a2 = 0;
    *a3 = 0;
    *a4 = 0;
    if ( a5 )
      *a5 = 0LL;
  }
  if ( a6 )
    *a6 = 0LL;
}
