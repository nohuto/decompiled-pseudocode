/*
 * XREFs of ?JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z @ 0x1804906C4
 * Callers:
 *     ?_PaintDividerForDWM@CAppTransitionManager@@AEAAJPEAUHDC__@@PEAUHBITMAP__@@PEAUtagBITMAPINFO@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180435AEC (-_PaintDividerForDWM@CAppTransitionManager@@AEAAJPEAUHDC__@@PEAUHBITMAP__@@PEAUtagBITMAPINFO@@W4.c)
 *     ?HandlePaint@JointDivider@@AEAAXPEAUHDC__@@@Z @ 0x180486568 (-HandlePaint@JointDivider@@AEAAXPEAUHDC__@@@Z.c)
 *     ??$LambdaCustomPaintProc@V_lambda_96edf2fb798d729d000c76ff579fff9f_@@PEAUHDC__@@@@YAXPEAUHDC__@@AEBUtagSIZE@@_J@Z @ 0x18048F0A0 (--$LambdaCustomPaintProc@V_lambda_96edf2fb798d729d000c76ff579fff9f_@@PEAUHDC__@@@@YAXPEAUHDC__@@.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18000E758 (-IsPPIEdition@@YA_NXZ.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x180201C64 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHBITMAP__@@@Z @ 0x1803FA018 (-reset@-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$in.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180410420 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z @ 0x18048646C (-FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z.c)
 *     ?JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180490598 (-JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?RenderCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKKAEBUCRect@Geometry@@@Z @ 0x1804907E4 (-RenderCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKKAEBUCRect@Geometry@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SurfaceHubRemoveSidebars_Shell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1804908E4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SurfaceHubRemoveSidebars_Shell@@@details@.c)
 */

void __fastcall JointDivider_Paint(HDC hdc, RECT *a2, const struct _GUID *a3, enum DEVICE_SCALE_FACTOR a4, HDC h)
{
  RECT *v5; // rbx
  bool v9; // al
  int v10; // esi
  const struct tagRECT *v11; // r8
  struct Geometry::CRect *v12; // rdi
  struct Geometry::CRect *v13; // rbx
  struct Geometry::CRect *v14; // rbp
  HFONT GlyphFont; // rax
  __int64 Color; // rax
  HFONT v17; // r8
  struct Geometry::CRect *v18; // [rsp+30h] [rbp-28h] BYREF

  v5 = a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SurfaceHubRemoveSidebars_Shell>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SurfaceHubRemoveSidebars_Shell>::GetImpl'::`2'::impl,
    a2);
  v9 = IsPPIEdition();
  v10 = CImmersiveColor::GetColor(v9 ? 1178 : 312) & 0xFFFFFF;
  if ( !Platform::Guid::Equals((Platform::Guid *)v5, a3) )
    GDIHelpers::FillRectARGB(hdc, v5, v11, v10);
  GDIHelpers::FillRectARGB(hdc, (const RECT *)a3, v11, v10);
  v12 = (struct Geometry::CRect *)h;
  v13 = 0LL;
  v14 = 0LL;
  v18 = 0LL;
  if ( !h )
  {
    GlyphFont = JointDivider_LoadGlyphFont(a4);
    wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>::reset(
      (void **)&v18,
      GlyphFont);
    v13 = v18;
    if ( !v18 )
      return;
    v12 = v18;
    v14 = v18;
  }
  Color = CImmersiveColor::GetColor(0xDBu);
  GDIHelpers::RenderCenteredGlyph(hdc, (HDC)v12, v17, v10, Color & 0xFFFFFF, (unsigned int)a3, v18);
  if ( v14 )
    DeleteObject(v13);
}
