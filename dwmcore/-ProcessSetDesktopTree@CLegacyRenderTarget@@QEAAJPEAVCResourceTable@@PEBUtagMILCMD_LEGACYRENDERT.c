__int64 __fastcall CLegacyRenderTarget::ProcessSetDesktopTree(
        CLegacyRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LEGACYRENDERTARGET_SETDESKTOPTREE *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  struct CVisualTree *Resource; // rdi
  __int64 v8; // rcx

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( v5 && (Resource = (struct CVisualTree *)CResourceTable::GetResource((__int64)a2, v5, 0x35u)) == 0LL )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0x30u, 0LL);
  }
  else
  {
    wil::com_ptr_t<CDesktopTree,wil::err_returncode_policy>::operator=((char *)this + 168, Resource);
    CRenderTarget::SetVisualTree(this, Resource);
  }
  return v4;
}
