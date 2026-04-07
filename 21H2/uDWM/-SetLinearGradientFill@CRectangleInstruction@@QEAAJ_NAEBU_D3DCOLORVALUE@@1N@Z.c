/*
 * XREFs of ?SetLinearGradientFill@CRectangleInstruction@@QEAAJ_NAEBU_D3DCOLORVALUE@@1N@Z @ 0x180044D94
 * Callers:
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x180044BCC (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Update@CLinearGradientLegacyMilBrushProxy@@QEAAJNAEBUMilPoint2D@@0W4Enum@MilColorInterpolationMode@@W43MilBrushMappingMode@@W43MilGradientSpreadMethod@@PEBUMilGradientStop@@I@Z @ 0x180044E94 (-Update@CLinearGradientLegacyMilBrushProxy@@QEAAJNAEBUMilPoint2D@@0W4Enum@MilColorInterpolationM.c)
 *     ??$CreateProxy@VCLinearGradientLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCLinearGradientLegacyMilBrushProxy@@@Z @ 0x180045AA8 (--$CreateProxy@VCLinearGradientLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCLinearGradientLeg.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 */

__int64 __fastcall CRectangleInstruction::SetLinearGradientFill(
        CRectangleInstruction *this,
        __int64 a2,
        const struct _D3DCOLORVALUE *a3,
        const struct _D3DCOLORVALUE *a4)
{
  CBaseObject *v5; // rcx
  char *v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  __int128 v12; // [rsp+50h] [rbp-68h] BYREF
  __int128 v13; // [rsp+60h] [rbp-58h] BYREF
  __int64 v14; // [rsp+70h] [rbp-48h]
  __int128 v15; // [rsp+78h] [rbp-40h]
  double v16; // [rsp+88h] [rbp-30h]
  __int128 v17; // [rsp+90h] [rbp-28h]

  v5 = (CBaseObject *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (char *)this + 24;
  v7 = *((_QWORD *)this + 3);
  if ( !v7 )
  {
    v8 = CCompositor::CreateProxy<CLinearGradientLegacyMilBrushProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 5));
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x6Bu);
      return v9;
    }
    v7 = *((_QWORD *)this + 3);
  }
  v14 = 0LL;
  v15 = xmmword_1800CC1E0;
  v16 = DOUBLE_1_0;
  v12 = _xmm;
  v17 = xmmword_1800CC1D0;
  v13 = 0LL;
  v10 = CLinearGradientLegacyMilBrushProxy::Update(v7, v6, &v13, &v12);
  v9 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x89u);
  return v9;
}
