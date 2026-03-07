void __fastcall CCommonRenderingEffect::AddDeviceResourcesToCache(
        CCommonRenderingEffect *this,
        struct CDrawListCache *a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r8
  void (__fastcall ***v6)(_QWORD, GUID *, struct IDeviceResource **); // rcx
  struct IDeviceResource *v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = (_QWORD *)((char *)this + 16);
  v4 = 2LL;
  do
  {
    v5 = v3[1];
    if ( v5 && !*v3 )
    {
      v7 = 0LL;
      v6 = (void (__fastcall ***)(_QWORD, GUID *, struct IDeviceResource **))(v5
                                                                            + 8
                                                                            + *(int *)(*(_QWORD *)(v5 + 8) + 4LL));
      (**v6)(v6, &GUID_475af409_d8b1_4ca5_8177_4562f6260b68, &v7);
      if ( v7 )
        CDrawListCache::AddDeviceResource(a2, v7);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v7);
    }
    v3 += 3;
    --v4;
  }
  while ( v4 );
}
