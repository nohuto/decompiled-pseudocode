void __fastcall CRenderTargetBitmap::ResetBitmapCache(CRenderTargetBitmap *this)
{
  __int64 v1; // r8
  struct ID2DBitmapCacheSource *v2; // rdx
  void (__fastcall ***v4)(_QWORD, GUID *, struct ID2DBitmapCacheSource **); // rcx
  struct ID2DBitmapCacheSource *v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 17);
  v2 = 0LL;
  v5 = 0LL;
  if ( v1 && !*((_BYTE *)this + 144) )
  {
    v4 = (void (__fastcall ***)(_QWORD, GUID *, struct ID2DBitmapCacheSource **))(v1
                                                                                + 8
                                                                                + *(int *)(*(_QWORD *)(v1 + 8) + 4LL));
    (**v4)(v4, &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3, &v5);
    v2 = v5;
  }
  CD2DBitmapCache::InitializeCache(this, v2);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v5);
}
