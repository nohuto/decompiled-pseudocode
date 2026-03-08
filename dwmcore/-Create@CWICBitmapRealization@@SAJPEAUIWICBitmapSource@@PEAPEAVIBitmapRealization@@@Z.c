/*
 * XREFs of ?Create@CWICBitmapRealization@@SAJPEAUIWICBitmapSource@@PEAPEAVIBitmapRealization@@@Z @ 0x1800A635C
 * Callers:
 *     ?ProcessSource@CBitmapResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BITMAPRESOURCE_SOURCE@@@Z @ 0x1800A6298 (-ProcessSource@CBitmapResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BITMAPRESOURCE_SOURCE@@@Z.c)
 *     ?EnsureCompositionResources@CCursorState@@QEAAXXZ @ 0x1802768A4 (-EnsureCompositionResources@CCursorState@@QEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x180034308 (-InitializeCache@CD2DBitmapCache@@QEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??0CWICBitmapRealization@@QEAA@XZ @ 0x1800A644C (--0CWICBitmapRealization@@QEAA@XZ.c)
 *     ?Create@CWICBitmapWrapper@@SAJPEAUIWICBitmapSource@@PEAPEAVID2DBitmapCacheSource@@@Z @ 0x1800A64F8 (-Create@CWICBitmapWrapper@@SAJPEAUIWICBitmapSource@@PEAPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

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
