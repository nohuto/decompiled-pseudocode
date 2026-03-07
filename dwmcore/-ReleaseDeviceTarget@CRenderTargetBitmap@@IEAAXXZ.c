void __fastcall CRenderTargetBitmap::ReleaseDeviceTarget(CRenderTargetBitmap *this)
{
  char *v1; // rdi
  __int64 v3; // r8
  char *v4; // rcx
  __int64 v5; // r9

  v1 = (char *)this + 136;
  v3 = *((_QWORD *)this + 17);
  v4 = 0LL;
  if ( v3 )
  {
    if ( this )
      v4 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16;
    v5 = v3 + *(int *)(*(_QWORD *)(v3 + 8) + 8LL);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)(v5 + 8) + 48LL))(v5 + 8, v4);
    wil::com_ptr_t<IDDASwapChain,wil::err_returncode_policy>::reset(v1);
  }
  CD2DBitmapCache::InitializeCache(this, 0LL);
}
