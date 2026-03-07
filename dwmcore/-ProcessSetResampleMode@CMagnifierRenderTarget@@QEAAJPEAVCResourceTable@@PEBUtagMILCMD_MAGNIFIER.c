__int64 __fastcall CMagnifierRenderTarget::ProcessSetResampleMode(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MAGNIFIERRENDERTARGET_SETRESAMPLEMODE *a3)
{
  int v3; // eax

  v3 = *((_DWORD *)a3 + 2);
  if ( *((_DWORD *)this + 40) != v3 )
  {
    *((_DWORD *)this + 40) = v3;
    CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  }
  return 0LL;
}
