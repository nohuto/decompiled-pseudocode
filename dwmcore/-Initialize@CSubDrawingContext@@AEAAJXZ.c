/*
 * XREFs of ?Initialize@CSubDrawingContext@@AEAAJXZ @ 0x180021318
 * Callers:
 *     ?DrawVisualTree@CSubDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEBVCOcclusionContext@@@Z @ 0x1800211E0 (-DrawVisualTree@CSubDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UpdateContextOwner@CD2DContext@@QEAAJPEBVID2DContextOwner@@@Z @ 0x1800213C8 (-UpdateContextOwner@CD2DContext@@QEAAJPEBVID2DContextOwner@@@Z.c)
 *     ?HasGpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x1800217BC (-HasGpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?Create@CDrawingContext@@SAXPEAPEAV1@@Z @ 0x180038BA0 (-Create@CDrawingContext@@SAXPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSubDrawingContext::Initialize(CSubDrawingContext *this)
{
  struct CDrawingContext *v2; // rbx
  int updated; // eax
  unsigned int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rcx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CDrawingContext *v10; // [rsp+30h] [rbp+8h] BYREF

  if ( CScopedClipStack::HasGpuClipsInScope((CScopedClipStack *)(*(_QWORD *)this + 896LL)) )
  {
    v10 = 0LL;
    CDrawingContext::Create(&v10);
    v2 = v10;
    updated = CD2DContext::UpdateContextOwner(
                (CD2DContext *)(*(_QWORD *)(*(_QWORD *)this + 40LL) + 16LL),
                (const struct ID2DContextOwner *)(((unsigned __int64)v10 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)v10 >> 64)));
    v4 = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x46,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\subdrawingcontext.cpp",
        (const char *)(unsigned int)updated,
        v8);
    }
    else
    {
      v5 = *(_QWORD *)this;
      v10 = 0LL;
      *((_QWORD *)v2 + 26) = v5;
      v6 = *((_QWORD *)this + 1);
      *((_QWORD *)this + 1) = v2;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      v4 = 0;
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v10);
    return v4;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\subdrawingcontext.cpp",
      (const char *)0x88982F04LL,
      v8);
    return 2291674884LL;
  }
}
