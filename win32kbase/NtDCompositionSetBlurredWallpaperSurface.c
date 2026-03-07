__int64 __fastcall NtDCompositionSetBlurredWallpaperSurface(void *a1, struct tagRECT *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  DirectComposition::CConnection *DefaultConnection; // rax
  DirectComposition::CConnection *v6; // rdi
  unsigned int v7; // edx
  struct tagRECT v9; // [rsp+40h] [rbp-28h] BYREF

  v3 = 0;
  v9 = 0LL;
  if ( a2 )
  {
    if ( &a2[1] < a2 || (unsigned __int64)&a2[1] > MmUserProbeAddress )
      a2 = (struct tagRECT *)MmUserProbeAddress;
    v9 = *a2;
  }
  else if ( a1 )
  {
    v3 = -1073741811;
  }
  if ( v3 >= 0 )
  {
    KeEnterCriticalRegion();
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection(v4);
    v6 = DefaultConnection;
    if ( DefaultConnection )
    {
      v3 = DirectComposition::CConnection::SetBlurredWallpaperSurface(DefaultConnection, a1, &v9);
      DirectComposition::CConnection::Release(v6, v7);
    }
    else
    {
      v3 = -1073741790;
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v3;
}
