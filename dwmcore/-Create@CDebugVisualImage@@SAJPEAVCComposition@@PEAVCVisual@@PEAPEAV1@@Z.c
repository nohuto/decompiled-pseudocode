/*
 * XREFs of ?Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18021504C
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18004F100 (-PreRender@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCDebugVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18019A418 (--1-$com_ptr_t@VCDebugVisualImage@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0CDebugVisualImage@@AEAA@PEAVCComposition@@@Z @ 0x180214EE8 (--0CDebugVisualImage@@AEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@CDebugVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x180215110 (-Initialize@CDebugVisualImage@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CDebugVisualImage::Create(
        struct CComposition *a1,
        struct CVisual *a2,
        struct CDebugVisualImage **a3)
{
  CDebugVisualImage *v7; // rax
  CDebugVisualImage *v8; // rax
  CDebugVisualImage *v9; // rdi
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // r9
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CResource *v15; // [rsp+38h] [rbp+10h] BYREF

  *a3 = 0LL;
  if ( !a2 )
    return 2147942487LL;
  v7 = (CDebugVisualImage *)DefaultHeap::AllocClear(0x738uLL);
  if ( !v7 )
  {
    v15 = 0LL;
    goto LABEL_9;
  }
  v8 = CDebugVisualImage::CDebugVisualImage(v7, a1);
  v15 = v8;
  v9 = v8;
  if ( !v8 )
  {
LABEL_9:
    v11 = -2147024882;
    v13 = 38LL;
    v12 = 2147942414LL;
    goto LABEL_10;
  }
  CMILRefCountImpl::AddReference((CDebugVisualImage *)((char *)v8 + 8));
  v10 = CDebugVisualImage::Initialize(v9, a2);
  v11 = v10;
  if ( v10 >= 0 )
  {
    *a3 = v9;
    return 0LL;
  }
  v12 = (unsigned int)v10;
  v13 = 40LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\debugvisualimage.cpp",
    (const char *)v12);
  wil::com_ptr_t<CDebugVisualImage,wil::err_returncode_policy>::~com_ptr_t<CDebugVisualImage,wil::err_returncode_policy>(&v15);
  return v11;
}
