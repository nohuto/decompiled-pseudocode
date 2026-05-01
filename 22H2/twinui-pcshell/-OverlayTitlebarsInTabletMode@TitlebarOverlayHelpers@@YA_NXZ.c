/*
 * XREFs of ?OverlayTitlebarsInTabletMode@TitlebarOverlayHelpers@@YA_NXZ @ 0x180469764
 * Callers:
 *     ?CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180465BA8 (-CreateTitlebarConfiguration@TabletModePositioner@@CAJPEAUIApplicationView@@PEAPEAUIApplicationV.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18000E758 (-IsPPIEdition@@YA_NXZ.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x180010CEC (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     SHRegGetUSDWORDW @ 0x1804DC330 (SHRegGetUSDWORDW.c)
 */

char __fastcall TitlebarOverlayHelpers::OverlayTitlebarsInTabletMode(
        TitlebarOverlayHelpers *this,
        enum _TABLETMODESTATE *a2)
{
  int v2; // eax
  char v3; // bl
  int USDWORDW; // eax

  v2 = `TitlebarOverlayHelpers::OverlayTitlebarsInTabletMode'::`2'::allowOverlay;
  v3 = 0;
  if ( !`TitlebarOverlayHelpers::OverlayTitlebarsInTabletMode'::`2'::allowOverlay )
  {
    USDWORDW = SHRegGetUSDWORDW(this);
    if ( USDWORDW == -1 )
    {
      if ( IsPPIEdition() )
      {
        `TitlebarOverlayHelpers::OverlayTitlebarsInTabletMode'::`2'::allowOverlay = 2;
        return v3;
      }
      v2 = 1;
    }
    else
    {
      v2 = 2 - (USDWORDW != 0);
    }
    `TitlebarOverlayHelpers::OverlayTitlebarsInTabletMode'::`2'::allowOverlay = v2;
  }
  if ( v2 == 1 )
    return TabletModeHelpers::IsTabletMode(this, a2);
  return v3;
}
