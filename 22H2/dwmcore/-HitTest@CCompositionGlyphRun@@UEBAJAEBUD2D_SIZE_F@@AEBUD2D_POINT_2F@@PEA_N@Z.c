/*
 * XREFs of ?HitTest@CCompositionGlyphRun@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1801B9B70
 * Callers:
 *     ?HitTest@CCompositionGlyphRun@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800F4930 (-HitTest@CCompositionGlyphRun@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?Contains@@YA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z @ 0x1800D3FD0 (-Contains@@YA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E3DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCompositionGlyphRun::HitTest(
        CCompositionGlyphRun *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  __int64 v5; // rax
  char *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  struct D2D_RECT_F v11; // [rsp+20h] [rbp-30h] BYREF
  struct D2D_RECT_F v12; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  *a4 = 0;
  v5 = *((_QWORD *)this - 9);
  v12 = 0LL;
  v7 = (char *)this + *(int *)(v5 + 8) - 72;
  v8 = (**(__int64 (__fastcall ***)(char *, const struct D2D_SIZE_F *, struct D2D_RECT_F *))v7)(v7, a2, &v12);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v11 = v12;
    *a4 = Contains(&v11, a3);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x79,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionglyphrun.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
}
