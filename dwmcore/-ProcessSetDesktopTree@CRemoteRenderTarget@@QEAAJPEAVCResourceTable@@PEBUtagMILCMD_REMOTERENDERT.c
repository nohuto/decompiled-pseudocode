__int64 __fastcall CRemoteRenderTarget::ProcessSetDesktopTree(
        CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_REMOTERENDERTARGET_SETDESKTOPTREE *a3)
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
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0x28u, 0LL);
  }
  else
  {
    wil::com_ptr_t<CDesktopTree,wil::err_returncode_policy>::operator=(this + 24, (__int64)Resource);
    CRenderTarget::SetVisualTree((CRenderTarget *)this, Resource);
  }
  return v4;
}
