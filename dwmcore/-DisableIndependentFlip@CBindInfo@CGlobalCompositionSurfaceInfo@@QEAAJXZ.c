/*
 * XREFs of ?DisableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJXZ @ 0x1802575E8
 * Callers:
 *     ?DisableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x180257520 (-DisableDirectFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 *     ?DisableIndependentFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z @ 0x180257730 (-DisableIndependentFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_K@Z.c)
 *     ?DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ @ 0x18025779C (-DisableOverlay@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x1800D6DE0 (-ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ.c)
 *     ?ResetCustomDuration@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXXZ @ 0x180258390 (-ResetCustomDuration@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXXZ.c)
 *     McTemplateU0xxqqqqq_EventWriteTransfer @ 0x180258A9C (McTemplateU0xxqqqqq_EventWriteTransfer.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::DisableIndependentFlip(
        CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  int v2; // ecx
  unsigned int v3; // edi
  int v4; // eax
  __int64 v5; // rcx
  bool v6; // zf
  int v8; // [rsp+60h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 54);
  v3 = 0;
  v8 = 0;
  v4 = NtSetCompositionSurfaceIndependentFlipInfo(
         *(_QWORD *)(*(_QWORD *)this + 32LL),
         (char *)this + 24,
         0LL,
         *((_BYTE *)this + 193) != 0,
         *((_DWORD *)this + 56),
         1 << v2,
         (char *)this + 220,
         &v8);
  if ( v4 >= 0 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      McTemplateU0xxqqqqq_EventWriteTransfer(
        *(_DWORD *)(*(_QWORD *)this + 40LL),
        *((_BYTE *)this + 192) != 0,
        *(_DWORD *)(*(_QWORD *)this + 40LL),
        *((_QWORD *)this + 3),
        *((_DWORD *)this + 55),
        *((_BYTE *)this + 192) != 0,
        *((_BYTE *)this + 193) != 0,
        *((_DWORD *)this + 56),
        v8);
  }
  else
  {
    v3 = v4 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4 | 0x10000000, 0x44Fu, 0LL);
  }
  CGlobalCompositionSurfaceInfo::CBindInfo::ResetCustomDuration(this);
  v6 = *((_BYTE *)this + 193) == 0;
  *((_BYTE *)this + 192) = 0;
  if ( v6 )
  {
    CGlobalCompositionSurfaceInfo::ForceUpdateRenderingRealization(*(CGlobalCompositionSurfaceInfo **)this);
    *((_BYTE *)this + 193) = 1;
  }
  return v3;
}
