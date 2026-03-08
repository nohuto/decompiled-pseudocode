/*
 * XREFs of ?GetBounds@CCompositionGlyphRun@@QEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18022048C
 * Callers:
 *     ?HitTest@CCompositionGlyphRun@@QEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180220508 (-HitTest@CCompositionGlyphRun@@QEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetBounds@CTextVisualContent@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180268EC4 (-GetBounds@CTextVisualContent@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionGlyphRun::GetBounds(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r9
  __int64 (__fastcall ***v4)(_QWORD); // rcx
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(_QWORD *)(a1 + 80);
  if ( v3 )
  {
    v4 = (__int64 (__fastcall ***)(_QWORD))(v3 + 64 + *(int *)(*(_QWORD *)(v3 + 64) + 8LL));
    v5 = (**v4)(v4);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6E,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionglyphrun.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
  }
  else
  {
    a3[3] = 0;
    a3[2] = 0;
    a3[1] = 0;
    *a3 = 0;
  }
  return 0LL;
}
