__int64 __fastcall CVisual::ProcessSetBlurredWallpaperSurface(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACE *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  struct CResource *Resource; // rsi
  __int64 v8; // rcx
  struct CResource *BlurredWallpaperSurface; // rbp
  int v10; // eax
  __int64 v11; // rcx
  unsigned __int64 CurrentFrameId; // rax
  __int64 v13; // rdx

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( v5 && (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0xCAu)) == 0LL )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0xE08u, 0LL);
  }
  else
  {
    BlurredWallpaperSurface = CVisual::GetBlurredWallpaperSurface(this);
    if ( Resource != BlurredWallpaperSurface )
    {
      v10 = CResource::RegisterNotifier(this, Resource);
      v4 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xE10u, 0LL);
        return v4;
      }
      CResource::UnRegisterNotifierInternal(this, BlurredWallpaperSurface);
      CVisual::SetBlurredWallpaperSurface(this, Resource);
      if ( Resource )
        *((_QWORD *)g_pComposition + 38) = this;
      else
        *((_QWORD *)g_pComposition + 38) = 0LL;
      CurrentFrameId = GetCurrentFrameId();
      *(_QWORD *)(v13 + 312) = CurrentFrameId;
    }
    CVisual::PropagateFlags((__int64)this, 4u);
  }
  return v4;
}
