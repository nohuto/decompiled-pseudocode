/*
 * XREFs of ??0CHolographicInteropTexture@@IEAA@PEAVCComposition@@@Z @ 0x1802582BC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A2488 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_StereoscopicUwp@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A0884 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_StereoscopicUwp@@@details@wil@@QEAAX_NW4R.c)
 */

CHolographicInteropTexture *__fastcall CHolographicInteropTexture::CHolographicInteropTexture(
        CHolographicInteropTexture *this,
        struct CComposition *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  CHolographicInteropTexture *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 8) = &CHolographicInteropTexture::`vbtable';
  *(_QWORD *)this = &CResource::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 7) = &IVisualTreeClient::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)this = &CHolographicInteropTexture::`vftable'{for `CResource'};
  *((_QWORD *)this + 7) = &CHolographicInteropTexture::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 9) = &CHolographicInteropTexture::`vftable'{for `IHolographicInteropTexture'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CHolographicInteropTexture::`vftable'{for `IUnknown'};
  v3 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v3 + 60) = v3 - 344;
  *((_QWORD *)this + 13) = (char *)this + 128;
  *((_QWORD *)this + 14) = (char *)this + 128;
  *((_QWORD *)this + 15) = (char *)this + 192;
  *((_QWORD *)this + 40) = (char *)this + 328;
  *((_DWORD *)this + 55) = 0;
  *((_DWORD *)this + 79) = 0;
  *((_DWORD *)this + 82) = 0;
  InitializeSRWLock((PSRWLOCK)this + 49);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_StereoscopicUwp>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_StereoscopicUwp>::GetImpl'::`2'::impl,
    0,
    v4);
  result = this;
  *((_DWORD *)this + 58) = 1;
  return result;
}
