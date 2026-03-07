__int64 __fastcall CVisualSurface::ProcessFreeze(
        CVisualSurface *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUALSURFACE_FREEZE *a3)
{
  int v4; // r10d
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_BYTE *)this + 200) || *((_BYTE *)this + 201) )
    return 0LL;
  v4 = *((_DWORD *)this + 26);
  v5 = *((_QWORD *)this + 9);
  *((_BYTE *)this + 201) = 1;
  v6 = CCachedVisualImage::UpdateFromVisualSurface(
         **((__int64 ***)this + 14),
         v5,
         (float *)this + 20,
         (float *)this + 22,
         (float *)this + 24,
         v4);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x129,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  v9 = **((_QWORD **)this + 14);
  *(_BYTE *)(v9 + 1776) = 1;
  v10 = CComposition::RegisterRenderSnapshotToPerform(*(CComposition **)(v9 + 16), (struct CCachedVisualImage *)v9);
  v12 = v10;
  if ( v10 >= 0 )
    return 0LL;
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x151u, 0LL);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12B,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
    (const char *)v12);
  return v12;
}
