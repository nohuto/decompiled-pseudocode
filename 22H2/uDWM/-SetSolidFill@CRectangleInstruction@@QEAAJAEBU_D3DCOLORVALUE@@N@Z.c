/*
 * XREFs of ?SetSolidFill@CRectangleInstruction@@QEAAJAEBU_D3DCOLORVALUE@@N@Z @ 0x180036E1C
 * Callers:
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z @ 0x180036C1C (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x1800B88FC (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z @ 0x180036EAC (-Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z.c)
 *     ??$CreateProxy@VCSolidColorLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCSolidColorLegacyMilBrushProxy@@@Z @ 0x18003CE34 (--$CreateProxy@VCSolidColorLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCSolidColorLegacyMilBr.c)
 */

__int64 __fastcall CRectangleInstruction::SetSolidFill(
        CRectangleInstruction *this,
        const struct _D3DCOLORVALUE *a2,
        double a3)
{
  CBaseObject *v4; // rcx
  CSolidColorLegacyMilBrushProxy *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax

  v4 = (CBaseObject *)*((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = 0LL;
  if ( v4 )
    CBaseObject::Release(v4);
  v6 = (CSolidColorLegacyMilBrushProxy *)*((_QWORD *)this + 2);
  if ( !v6 )
  {
    v7 = CCompositor::CreateProxy<CSolidColorLegacyMilBrushProxy>(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
           (char *)this + 16);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x4Fu);
      return v8;
    }
    v6 = (CSolidColorLegacyMilBrushProxy *)*((_QWORD *)this + 2);
  }
  v9 = CSolidColorLegacyMilBrushProxy::Update(v6, a3, a2);
  v8 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x52u);
  return v8;
}
