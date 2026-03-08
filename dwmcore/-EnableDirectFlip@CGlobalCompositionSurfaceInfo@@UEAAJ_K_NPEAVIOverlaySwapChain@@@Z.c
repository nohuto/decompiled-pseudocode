/*
 * XREFs of ?EnableDirectFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_K_NPEAVIOverlaySwapChain@@@Z @ 0x180257940
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_NPEAVIOverlaySwapChain@@@Z @ 0x180257844 (-EnableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_NPEAVIOverlaySwapChain@@@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::EnableDirectFlip(
        CGlobalCompositionSurfaceInfo *this,
        __int64 a2,
        unsigned __int8 a3,
        struct IOverlaySwapChain *a4)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  if ( a2 != *((_QWORD *)this + 16) || *((_BYTE *)this + 302) )
  {
    v6 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003292412, 0x137u, 0LL);
  }
  else
  {
    v4 = CGlobalCompositionSurfaceInfo::CBindInfo::EnableDirectFlip(
           (CGlobalCompositionSurfaceInfo *)((char *)this + 104),
           a3,
           a4);
    v6 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x133u, 0LL);
  }
  return v6;
}
