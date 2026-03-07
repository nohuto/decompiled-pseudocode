__int64 __fastcall CWICBitmapRealization::Create(struct IWICBitmapSource *a1, struct IBitmapRealization **a2)
{
  unsigned int v2; // edi
  struct IWICBitmapSourceVtbl *lpVtbl; // rax
  struct ID2DBitmapCacheSource *v6; // rdx
  int v7; // eax
  unsigned int v8; // ecx
  CWICBitmapRealization *v9; // rax
  CWICBitmapRealization *v10; // rbx
  CWICBitmapRealization *v11; // rax
  CD2DBitmapCache *v12; // rbx
  __int64 v14; // rcx
  struct ID2DBitmapCacheSource *v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = 0LL;
  lpVtbl = a1->lpVtbl;
  v15 = 0LL;
  if ( ((int (__fastcall *)(struct IWICBitmapSource *, GUID *, struct ID2DBitmapCacheSource **))lpVtbl->QueryInterface)(
         a1,
         &GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3,
         &v15) >= 0 )
    goto LABEL_5;
  v6 = v15;
  v15 = 0LL;
  if ( v6 )
  {
    v14 = (__int64)v6 + *(int *)(*((_QWORD *)v6 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v7 = CWICBitmapWrapper::Create(a1, &v15);
  v2 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1Cu, 0LL);
  }
  else
  {
LABEL_5:
    v9 = (CWICBitmapRealization *)DefaultHeap::Alloc(0x90uLL);
    v10 = v9;
    if ( v9 )
    {
      memset_0(v9, 0, 0x90uLL);
      v11 = CWICBitmapRealization::CWICBitmapRealization(v10);
      v12 = v11;
      if ( v11 )
        CMILRefCountImpl::AddReference((CWICBitmapRealization *)((char *)v11 + 8));
    }
    else
    {
      v12 = 0LL;
    }
    CD2DBitmapCache::InitializeCache(v12, v15);
    *a2 = (struct IBitmapRealization *)(((unsigned __int64)v12 + 80) & -(__int64)(v12 != 0LL));
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v15);
  return v2;
}
