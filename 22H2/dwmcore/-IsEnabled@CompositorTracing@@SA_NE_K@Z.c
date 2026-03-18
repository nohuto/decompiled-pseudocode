/*
 * XREFs of ?IsEnabled@CompositorTracing@@SA_NE_K@Z @ 0x1800FB8E4
 * Callers:
 *     ?ToggleSuspension@CHolographicManager@@UEAAX_N@Z @ 0x1800FB7F0 (-ToggleSuspension@CHolographicManager@@UEAAX_N@Z.c)
 *     ?AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z @ 0x1802A49A4 (-AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z.c)
 *     ?AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z @ 0x1802A4A4C (-AddHolographicDisplay@CHolographicManager@@QEAA_NPEAVCHolographicDisplay@@@Z.c)
 *     ?AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z @ 0x1802A4B94 (-AddHolographicViewer@CHolographicManager@@QEAA_NPEAVCHolographicViewer@@@Z.c)
 *     ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x1802A4D00 (-AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z.c)
 *     ?EnsureHolographicClient@CHolographicManager@@AEAAJXZ @ 0x1802A5498 (-EnsureHolographicClient@CHolographicManager@@AEAAJXZ.c)
 *     ?EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ @ 0x1802A560C (-EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ.c)
 *     ?RemoveHolographicComposition@CHolographicManager@@QEAAXPEAVCHolographicComposition@@@Z @ 0x1802A5FFC (-RemoveHolographicComposition@CHolographicManager@@QEAAXPEAVCHolographicComposition@@@Z.c)
 *     ?RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z @ 0x1802A607C (-RemoveHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z.c)
 *     ?RemoveHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z @ 0x1802A6170 (-RemoveHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z.c)
 *     ?RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z @ 0x1802A6268 (-RemoveInteropTexture@CHolographicManager@@QEAAXPEAVCHolographicInteropTexture@@@Z.c)
 *     ?UpdateHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z @ 0x1802A6540 (-UpdateHolographicDisplay@CHolographicManager@@QEAAXPEAVCHolographicDisplay@@@Z.c)
 *     ?UpdateHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z @ 0x1802A65C4 (-UpdateHolographicViewer@CHolographicManager@@QEAAXPEAVCHolographicViewer@@@Z.c)
 *     ??$DwmHolographicInteropTextureSizeChanged@AEAIAEAIAEAI@CompositorTracing@@SAXAEAI00@Z @ 0x1802AA0C8 (--$DwmHolographicInteropTextureSizeChanged@AEAIAEAIAEAI@CompositorTracing@@SAXAEAI00@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800BB1F8 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z @ 0x1800FB924 (-get@-$static_lazy@VCompositorTracing@@@details@wil@@QEAAPEAVCompositorTracing@@P6AXXZ@Z.c)
 */

char __fastcall CompositorTracing::IsEnabled(__int64 a1)
{
  __int64 v1; // rax
  char v2; // r9
  _DWORD *v3; // rcx

  v1 = wil::details::static_lazy<CompositorTracing>::get(
         a1,
         _lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
  v2 = 0;
  v3 = *(_DWORD **)(v1 + 8);
  if ( v3 && *v3 )
    return tlgKeywordOn((__int64)v3, 0LL) != 0;
  return v2;
}
