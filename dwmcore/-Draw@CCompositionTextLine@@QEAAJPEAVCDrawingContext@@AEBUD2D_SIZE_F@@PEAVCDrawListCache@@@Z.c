/*
 * XREFs of ?Draw@CCompositionTextLine@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180223AF8
 * Callers:
 *     ?Draw@CTextVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180268BE8 (-Draw@CTextVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionTextLine::Draw(
        CCompositionTextLine *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_QWORD *)this + 10) )
    return 0LL;
  v4 = *((_QWORD *)this + 13) + 64LL + *(int *)(*(_QWORD *)(*((_QWORD *)this + 13) + 64LL) + 8LL);
  v5 = (*(__int64 (__fastcall **)(__int64, struct CDrawingContext *, const struct D2D_SIZE_F *, struct CDrawListCache *))(*(_QWORD *)v4 + 16LL))(
         v4,
         a2,
         a3,
         a4);
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x47,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositiontextline.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
