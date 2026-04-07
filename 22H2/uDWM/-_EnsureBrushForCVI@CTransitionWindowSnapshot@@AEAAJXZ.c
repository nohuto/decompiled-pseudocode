/*
 * XREFs of ?_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ @ 0x18000BF24
 * Callers:
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x180003190 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z.c)
 *     ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x18000B114 (-_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrushMappingMode@@2PEBVCRectResourceProxy@@3W44MilStretch@@W44MilTileMode@@W44MilHorizontalAlignment@@W44MilVerticalAlignment@@PEBVCBaseImageProxy@@@Z @ 0x18000E184 (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUMilRectF@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrus.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18003C928 (--$CreateProxy@VCImageLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCImageLegacyMilBrushProxy@@.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::_EnsureBrushForCVI(CTransitionWindowSnapshot *this)
{
  unsigned int v1; // edi
  int v3; // eax
  __int64 v4; // rdx
  volatile signed __int32 *v5; // rbx
  int v6; // eax
  CBaseObject *v7; // rcx
  CBaseObject *v9; // [rsp+70h] [rbp-38h] BYREF
  __int128 v10; // [rsp+78h] [rbp-30h] BYREF
  __int128 v11; // [rsp+88h] [rbp-20h] BYREF

  v1 = 0;
  v9 = 0LL;
  if ( *((_QWORD *)this + 37) )
    return v1;
  v3 = CCompositor::CreateProxy<CImageLegacyMilBrushProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
         &v9);
  v1 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0xCCu);
    goto LABEL_8;
  }
  v5 = (volatile signed __int32 *)v9;
  v11 = _xmm;
  v10 = _xmm;
  v6 = CImageLegacyMilBrushProxy::Update(v9, v4, &v11, &v10, 0LL);
  v1 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0xE7u);
LABEL_9:
    if ( v5 )
      CBaseObject::Release((CBaseObject *)v5);
    return v1;
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 37);
  if ( v7 )
    CBaseObject::Release(v7);
  *((_QWORD *)this + 37) = v5;
  if ( v5 )
  {
    _InterlockedIncrement(v5 + 2);
LABEL_8:
    v5 = (volatile signed __int32 *)v9;
    goto LABEL_9;
  }
  return v1;
}
