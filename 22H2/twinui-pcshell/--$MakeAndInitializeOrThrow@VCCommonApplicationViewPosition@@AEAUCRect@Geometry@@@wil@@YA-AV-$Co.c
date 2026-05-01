/*
 * XREFs of ??$MakeAndInitializeOrThrow@VCCommonApplicationViewPosition@@AEAUCRect@Geometry@@@wil@@YA?AV?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@AEAUCRect@Geometry@@@Z @ 0x1804493B4
 * Callers:
 *     ?SetUwpViewFullScreen@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x18044C910 (-SetUwpViewFullScreen@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x1801F46C0 (-InternalRelease@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@V1@AEAUCRect@Geometry@@@Details@WRL@Microsoft@@YAJPEAPEAVCCommonApplicationViewPosition@@AEAUCRect@Geometry@@@Z @ 0x1804491E8 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@V1@AEAUCRect@Geometry@@@Details@WRL@Micros.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeAndInitializeOrThrow<CCommonApplicationViewPosition,Geometry::CRect &>(
        __int64 *a1,
        _OWORD *a2)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::InternalRelease(a1);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,CCommonApplicationViewPosition,Geometry::CRect &>(
         a1,
         a2);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      36LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  return a1;
}
