__int64 __fastcall CVisual::ProcessSetBlurredWallpaperSurfaceRect(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETBLURREDWALLPAPERSURFACERECT *a3)
{
  CSparseStorage *v4; // rcx
  __int64 v5; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v4 = (CVisual *)((char *)this + 224);
  v7 = *(_OWORD *)((char *)a3 + 8);
  v5 = v7 - `CVisual::SetBlurredWallpaperSurfaceRect'::`2'::sc_defaultValue;
  if ( (_QWORD)v7 == `CVisual::SetBlurredWallpaperSurfaceRect'::`2'::sc_defaultValue )
    v5 = *((_QWORD *)&v7 + 1);
  if ( v5 )
    CSparseStorage::SetData(v4, 0x10u, 0x10u, &v7);
  else
    *(_DWORD *)(*(_QWORD *)v4 + 4LL) &= ~0x10000u;
  CVisual::PropagateFlags((__int64)this, 4u);
  return 0LL;
}
