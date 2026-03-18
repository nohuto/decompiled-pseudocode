/*
 * XREFs of ?CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800A664C
 * Callers:
 *     ?ProcessSetRealizationSize@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_SETREALIZATIONSIZE@@@Z @ 0x1800A52DC (-ProcessSetRealizationSize@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_.c)
 *     ?GetOrCreateCVIForRealizationSize@CVisualSurface@@AEAAJAEBUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z @ 0x1800B4E60 (-GetOrCreateCVIForRealizationSize@CVisualSurface@@AEAAJAEBUD2D_VECTOR_2F@@PEAPEAVCCachedVisualIm.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038D40 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003CF54 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x1800A9424 (-ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ.c)
 *     ??0?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedVisualImage@@@Z @ 0x1800B439C (--0-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCCachedVisualImag.c)
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@_N@Z @ 0x1800B60A8 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FC824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::CreateForVisualSurface(struct CComposition *a1, struct CCachedVisualImage **a2)
{
  CCachedVisualImage *v4; // rax
  CCachedVisualImage *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CCachedVisualImage *v13; // [rsp+40h] [rbp+18h] BYREF

  v4 = (CCachedVisualImage *)DefaultHeap::AllocClear(0x738uLL);
  if ( v4 )
    v4 = CCachedVisualImage::CCachedVisualImage(v4, a1, 1);
  wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>(
    &v13,
    v4);
  v5 = v13;
  if ( !v13 )
  {
    v7 = -2147024882;
    v9 = 129LL;
    v10 = 2147942414LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\cachedvisualimage.cpp",
      (const char *)v10,
      v11);
    goto LABEL_6;
  }
  v6 = (*(__int64 (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)v13 + 48LL))(v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    v10 = (unsigned int)v6;
    v9 = 131LL;
    goto LABEL_9;
  }
  *((_DWORD *)v5 + 38) = 0;
  *((_DWORD *)v5 + 39) = 87;
  *((_DWORD *)v5 + 41) = 1;
  CCachedVisualImage::ChoosePixelFormat(v5);
  v13 = 0LL;
  v7 = 0;
  *a2 = v5;
LABEL_6:
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v13);
  return v7;
}
