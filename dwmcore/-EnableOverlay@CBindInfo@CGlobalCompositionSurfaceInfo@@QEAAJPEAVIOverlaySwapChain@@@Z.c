/*
 * XREFs of ?EnableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJPEAVIOverlaySwapChain@@@Z @ 0x180257B58
 * Callers:
 *     ?EnableOverlay@CGlobalCompositionSurfaceInfo@@UEAAJ_KPEAVIOverlaySwapChain@@@Z @ 0x180257C00 (-EnableOverlay@CGlobalCompositionSurfaceInfo@@UEAAJ_KPEAVIOverlaySwapChain@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureOverlaySwapChainWeakRef@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJPEAVIOverlaySwapChain@@@Z @ 0x180257C6C (-EnsureOverlaySwapChainWeakRef@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJPEAVIOverlaySwapCha.c)
 *     ?PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x18025802C (-PinResources@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::EnableOverlay(
        CGlobalCompositionSurfaceInfo::CBindInfo *this,
        struct IOverlaySwapChain *a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v8; // [rsp+20h] [rbp-18h]

  if ( !*((_BYTE *)this + 194) )
  {
    v5 = CGlobalCompositionSurfaceInfo::CBindInfo::PinResources(this);
    v4 = v5;
    if ( v5 < 0 )
    {
      v8 = 930;
    }
    else
    {
      v5 = CGlobalCompositionSurfaceInfo::CBindInfo::EnsureOverlaySwapChainWeakRef(this, a2);
      v4 = v5;
      if ( v5 >= 0 )
      {
        *((_BYTE *)this + 198) = 1;
        return v4;
      }
      v8 = 931;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, v8, 0LL);
    return v4;
  }
  v4 = -2003292412;
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003292412, 0x39Fu, 0LL);
  return v4;
}
