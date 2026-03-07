__int64 __fastcall CVisualSurface::ProcessSetSourceVisual(
        CVisualSurface *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUALSURFACE_SETSOURCEVISUAL *a3)
{
  struct CResource *Resource; // rbx
  unsigned int v5; // edx
  struct CResource *v7; // rdx
  int VisualTree; // ebx
  CVisual *v9; // rbx
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0xC4u);
    *((_BYTE *)this + 201) = 0;
  }
  v7 = (struct CResource *)*((_QWORD *)this + 8);
  if ( v7 == Resource )
    goto LABEL_7;
  CResource::UnRegisterNotifierInternal(this, v7);
  *((_QWORD *)this + 8) = 0LL;
  wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset((char *)this + 72);
  *((_QWORD *)this + 8) = Resource;
  if ( !Resource )
    goto LABEL_7;
  VisualTree = CResource::RegisterNotifier(this, Resource);
  if ( VisualTree < 0 )
  {
    v11 = 133LL;
  }
  else
  {
    v9 = (CVisual *)*((_QWORD *)this + 8);
    wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset((char *)this + 72);
    VisualTree = CVisual::GetVisualTree(v9, (struct CVisualTree **)this + 9);
    if ( VisualTree >= 0 )
    {
LABEL_7:
      CResource::NotifyOnChanged(this, 0LL, 0LL);
      return 0LL;
    }
    v11 = 136LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
    (const char *)(unsigned int)VisualTree,
    v12);
  return (unsigned int)VisualTree;
}
