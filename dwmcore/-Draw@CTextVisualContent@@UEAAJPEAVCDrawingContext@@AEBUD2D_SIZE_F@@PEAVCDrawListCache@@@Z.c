/*
 * XREFs of ?Draw@CTextVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180268BE8
 * Callers:
 *     ?Draw@CTextVisualContent@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18011A2F0 (-Draw@CTextVisualContent@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 * Callees:
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800889B4 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ @ 0x1800DB0E4 (-InternalRelease@-$CMILRefCountBaseT@UIMILRefCount@@@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801D4394 (--1-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Draw@CCompositionTextLine@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180223AF8 (-Draw@CCompositionTextLine@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GetDrawListCacheForTextObject@CTextVisualContent@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEAPEAVCDrawListCache@@@Z @ 0x180269034 (-GetDrawListCacheForTextObject@CTextVisualContent@@AEAAJPEAVCDrawingContext@@PEAVCTreeData@@IPEA.c)
 */

__int64 __fastcall CTextVisualContent::Draw(
        CTextVisualContent *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  CVisual *v6; // rax
  struct CDrawListCache *v7; // rcx
  int DrawListCacheForTextObject; // ebx
  __int64 v10; // rax
  unsigned int v11; // edi
  __int64 *v12; // rsi
  __int64 *v13; // r12
  __int64 v14; // r15
  __int64 v15; // rdx
  struct CDrawListCache *v16; // rbx
  __int64 v17; // rcx
  int v18; // eax
  int v19; // r15d
  __int64 v20; // rdx
  __int64 v21; // rdx
  struct CDrawListCache **p_TreeData; // rcx
  __int64 v23; // rax
  CCompositionTextLine **v24; // rsi
  CCompositionTextLine **v25; // r12
  CCompositionTextLine *v26; // r15
  __int64 v27; // rax
  CCompositionTextLine **v28; // rsi
  CCompositionTextLine **v29; // r12
  struct CDrawListCache *v30; // r13
  CCompositionTextLine *v31; // r15
  int v32; // eax
  struct CDrawListCache *v33[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  struct CDrawListCache *TreeData; // [rsp+88h] [rbp+48h] BYREF
  struct D2D_SIZE_F *v36; // [rsp+90h] [rbp+50h]

  v36 = a3;
  v6 = (CVisual *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 32LL))((char *)a2 + 24);
  TreeData = (struct CDrawListCache *)CVisual::FindTreeData(v6, *((const struct CVisualTree **)a2 + 1007));
  v7 = TreeData;
  if ( TreeData )
  {
    v10 = *((_QWORD *)this - 4);
    v11 = 0;
    v12 = *(__int64 **)(v10 + 704);
    v13 = *(__int64 **)(v10 + 712);
    while ( v12 != v13 )
    {
      v14 = *v12;
      v33[0] = 0LL;
      DrawListCacheForTextObject = CTextVisualContent::GetDrawListCacheForTextObject(v7, a2, v7, v11, v33);
      if ( DrawListCacheForTextObject < 0 )
      {
        v21 = 32LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v21,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\textvisualcontent.cpp",
          (const char *)(unsigned int)DrawListCacheForTextObject);
        p_TreeData = v33;
LABEL_18:
        wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::~com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>((volatile signed __int32 **)p_TreeData);
        return (unsigned int)DrawListCacheForTextObject;
      }
      v15 = *(_QWORD *)(v14 + 80);
      v16 = v33[0];
      if ( v15 )
      {
        v17 = v15 + 64 + *(int *)(*(_QWORD *)(v15 + 64) + 8LL);
        v18 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, struct D2D_SIZE_F *, struct CDrawListCache *))(*(_QWORD *)v17 + 16LL))(
                v17,
                a2,
                v36,
                v33[0]);
        v19 = v18;
        if ( v18 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x61,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionglyphrun.cpp",
            (const char *)(unsigned int)v18);
          v20 = 36LL;
LABEL_13:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v20,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\textvisualcontent.cpp",
            (const char *)(unsigned int)v19);
          if ( v16 )
            CMILRefCountBaseT<IMILRefCount>::InternalRelease((volatile signed __int32 *)v16);
          return (unsigned int)v19;
        }
      }
      ++v11;
      if ( v16 )
        CMILRefCountBaseT<IMILRefCount>::InternalRelease((volatile signed __int32 *)v16);
      v7 = TreeData;
      ++v12;
    }
    v23 = *((_QWORD *)this - 4);
    v24 = *(CCompositionTextLine ***)(v23 + 752);
    v25 = *(CCompositionTextLine ***)(v23 + 760);
    while ( v24 != v25 )
    {
      v26 = *v24;
      v33[0] = 0LL;
      DrawListCacheForTextObject = CTextVisualContent::GetDrawListCacheForTextObject(v7, a2, v7, v11, v33);
      if ( DrawListCacheForTextObject < 0 )
      {
        v21 = 46LL;
        goto LABEL_17;
      }
      v16 = v33[0];
      v19 = CCompositionTextLine::Draw(v26, a2, v36, v33[0]);
      if ( v19 < 0 )
      {
        v20 = 50LL;
        goto LABEL_13;
      }
      ++v11;
      if ( v16 )
        CMILRefCountBaseT<IMILRefCount>::InternalRelease((volatile signed __int32 *)v16);
      v7 = TreeData;
      ++v24;
    }
    v27 = *((_QWORD *)this - 4);
    v28 = *(CCompositionTextLine ***)(v27 + 728);
    v29 = *(CCompositionTextLine ***)(v27 + 736);
    if ( v28 == v29 )
      return 0LL;
    v30 = TreeData;
    while ( 1 )
    {
      v31 = *v28;
      TreeData = 0LL;
      v32 = CTextVisualContent::GetDrawListCacheForTextObject(v7, a2, v30, v11, &TreeData);
      DrawListCacheForTextObject = v32;
      if ( v32 < 0 )
        break;
      v16 = TreeData;
      v19 = CCompositionTextLine::Draw(v31, a2, v36, TreeData);
      if ( v19 < 0 )
      {
        v20 = 64LL;
        goto LABEL_13;
      }
      ++v11;
      if ( v16 )
        CMILRefCountBaseT<IMILRefCount>::InternalRelease((volatile signed __int32 *)v16);
      if ( ++v28 == v29 )
        return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\textvisualcontent.cpp",
      (const char *)(unsigned int)v32);
    p_TreeData = &TreeData;
    goto LABEL_18;
  }
  DrawListCacheForTextObject = -2003292412;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x15,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\textvisualcontent.cpp",
    (const char *)0x88982F04LL);
  return (unsigned int)DrawListCacheForTextObject;
}
