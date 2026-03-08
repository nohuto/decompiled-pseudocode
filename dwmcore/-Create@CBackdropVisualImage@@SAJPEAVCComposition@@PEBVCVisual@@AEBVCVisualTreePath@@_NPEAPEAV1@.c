/*
 * XREFs of ?Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@@Z @ 0x1800A5BA4
 * Callers:
 *     ?CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18004C79C (-CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??4?$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBackdropVisualImage@@@Z @ 0x1800A5C54 (--4-$com_ptr_t@VCBackdropVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCBackdrop.c)
 *     ??0CBackdropVisualImage@@AEAA@PEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_N@Z @ 0x1800A5C94 (--0CBackdropVisualImage@@AEAA@PEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_N@Z.c)
 *     ?Initialize@CBackdropVisualImage@@EEAAJXZ @ 0x1800A5F10 (-Initialize@CBackdropVisualImage@@EEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCDebugVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18019A418 (--1-$com_ptr_t@VCDebugVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall CBackdropVisualImage::Create(
        struct CComposition *a1,
        const struct CVisual *a2,
        const struct CVisualTreePath *a3,
        bool a4,
        struct CBackdropVisualImage **a5)
{
  CBackdropVisualImage *v9; // rax
  struct CBackdropVisualImage *v10; // rbx
  int v11; // eax
  unsigned int v12; // edi
  __int64 v14; // rdx
  __int64 v15; // r9
  int v16; // [rsp+20h] [rbp-28h]
  CBackdropVisualImage *v17[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v17[0] = 0LL;
  *a5 = 0LL;
  v9 = (CBackdropVisualImage *)DefaultHeap::AllocClear(0x808uLL);
  if ( v9 )
    v9 = CBackdropVisualImage::CBackdropVisualImage(v9, a1, a2, a3, a4);
  wil::com_ptr_t<CBackdropVisualImage,wil::err_returncode_policy>::operator=(v17, v9);
  v10 = v17[0];
  if ( v17[0] )
  {
    v11 = CBackdropVisualImage::Initialize(v17[0]);
    v12 = v11;
    if ( v11 >= 0 )
    {
      *a5 = v10;
      return 0LL;
    }
    v15 = (unsigned int)v11;
    v14 = 28LL;
  }
  else
  {
    v12 = -2147024882;
    v14 = 26LL;
    v15 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\backdropvisualimage.cpp",
    (const char *)v15,
    v16);
  wil::com_ptr_t<CDebugVisualImage,wil::err_returncode_policy>::~com_ptr_t<CDebugVisualImage,wil::err_returncode_policy>(v17);
  return v12;
}
