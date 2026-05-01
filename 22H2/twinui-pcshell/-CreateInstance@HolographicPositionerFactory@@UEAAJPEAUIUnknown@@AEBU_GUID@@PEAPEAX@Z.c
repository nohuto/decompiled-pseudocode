/*
 * XREFs of ?CreateInstance@HolographicPositionerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1802AFDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HolographicPositioner_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802B1218 (-HolographicPositioner_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HolographicCoreShellTLAVMOnOasis@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1802B20F8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HolographicCoreShellTLAVMOnOasis@@@detail.c)
 */

int __fastcall HolographicPositionerFactory::CreateInstance(
        HolographicPositionerFactory *this,
        struct IUnknown *a2,
        const struct _GUID *a3,
        void **a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a4 = 0LL;
  if ( a2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\HolographicPositionerFactory.h",
      (const char *)0x80040110LL);
    return -2147221232;
  }
  else
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_HolographicCoreShellTLAVMOnOasis>::ReportUsage(&`wil::Feature<__WilFeatureTraits_Feature_HolographicCoreShellTLAVMOnOasis>::GetImpl'::`2'::impl);
    return HolographicPositioner_CreateInstance(a3, a4);
  }
}
