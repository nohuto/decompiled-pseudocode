/*
 * XREFs of ?SetIndependentFlipDuration@CGlobalCompositionSurfaceInfo@@UEAAJ_KI@Z @ 0x180258630
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetIndependentFlipDuration@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJI@Z @ 0x180258470 (-SetIndependentFlipDuration@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJI@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::SetIndependentFlipDuration(
        CGlobalCompositionSurfaceInfo *this,
        __int64 a2,
        unsigned int a3)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  if ( a2 == *((_QWORD *)this + 16) && *((_BYTE *)this + 296) )
  {
    v3 = CGlobalCompositionSurfaceInfo::CBindInfo::SetIndependentFlipDuration(
           (CGlobalCompositionSurfaceInfo *)((char *)this + 104),
           a3);
    v5 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x1F5u, 0LL);
  }
  else
  {
    v5 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003292412, 0x1F9u, 0LL);
  }
  return v5;
}
