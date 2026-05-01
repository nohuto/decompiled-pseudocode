/*
 * XREFs of ??0CCommonApplicationViewOcclusionPosition@@QEAA@XZ @ 0x1802D8DF4
 * Callers:
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Z @ 0x1802D3D3C (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@AEAUta.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@AEAUtagRECT@@AEAU3@H@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@1$$QEAH@Z @ 0x180458244 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPos_ea_180458244.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAUIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Z @ 0x18045841C (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPo.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCCommonApplicationViewOcclusionPositionImpl@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18004CFEC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCCommonApplicationViewOcclusionPositi.c)
 */

CCommonApplicationViewOcclusionPosition *__fastcall CCommonApplicationViewOcclusionPosition::CCommonApplicationViewOcclusionPosition(
        CCommonApplicationViewOcclusionPosition *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>((__int64)this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::Selector<CCommonApplicationViewOcclusionPositionImpl,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CCommonApplicationViewOcclusionPositionImpl>,Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 13) = &CCommonApplicationViewOcclusionPosition::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CCommonApplicationViewOcclusionPositionImpl>,Microsoft::WRL::FtmBase>>'};
  return this;
}
