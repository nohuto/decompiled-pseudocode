/*
 * XREFs of ?ProcessSetBlurredWallpaperSurface@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACE@@@Z @ 0x180101C7C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180089410 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180098FD8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EE80 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetBlurredWallpaperSurface@CVisual@@QEBAPEAVCVisualSurface@@XZ @ 0x1800B38F0 (-GetBlurredWallpaperSurface@CVisual@@QEBAPEAVCVisualSurface@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetBlurredWallpaperSurface@CVisual@@QEAAXPEAVCVisualSurface@@@Z @ 0x180101D4C (-SetBlurredWallpaperSurface@CVisual@@QEAAXPEAVCVisualSurface@@@Z.c)
 */

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
