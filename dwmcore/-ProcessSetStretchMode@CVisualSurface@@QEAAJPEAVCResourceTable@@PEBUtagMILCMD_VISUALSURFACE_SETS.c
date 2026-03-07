__int64 __fastcall CVisualSurface::ProcessSetStretchMode(
        CVisualSurface *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUALSURFACE_SETSTRETCHMODE *a3)
{
  bool v3; // zf

  v3 = *((_BYTE *)this + 200) == 0;
  *((_DWORD *)this + 26) = *((_DWORD *)a3 + 2);
  if ( !v3 )
    CResource::NotifyOnChanged((__int64)this, 6u, 0LL);
  return 0LL;
}
