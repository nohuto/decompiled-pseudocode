__int64 __fastcall CCachedVisualImage::ProcessSnapshot(
        CComposition **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CACHEDVISUALIMAGE_SNAPSHOT *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = CComposition::RegisterRenderSnapshotToPerform(this[2], (struct CCachedVisualImage *)this);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x92,
    (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\resources\\CachedVisualImage.h",
    (const char *)(unsigned int)v3,
    v6);
  return v4;
}
