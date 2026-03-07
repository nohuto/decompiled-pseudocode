__int64 __fastcall CDDisplayRenderTarget::ProcessSetDesktopTree(
        CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DDISPLAYRENDERTARGET_SETDESKTOPTREE *a3)
{
  struct CVisualTree *Resource; // rbx
  unsigned int v5; // edx

  Resource = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  if ( v5 )
    Resource = (struct CVisualTree *)CResourceTable::GetResource((__int64)a2, v5, 0x35u);
  wil::com_ptr_t<CDesktopTree,wil::err_returncode_policy>::operator=(this + 22, (__int64)Resource);
  CRenderTarget::SetVisualTree((CRenderTarget *)this, Resource);
  return 0LL;
}
