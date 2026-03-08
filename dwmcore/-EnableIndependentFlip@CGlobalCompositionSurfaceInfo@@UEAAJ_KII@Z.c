/*
 * XREFs of ?EnableIndependentFlip@CGlobalCompositionSurfaceInfo@@UEAAJ_KII@Z @ 0x180257AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJI@Z @ 0x1802579B4 (-EnableIndependentFlip@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJI@Z.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::EnableIndependentFlip(
        CGlobalCompositionSurfaceInfo *this,
        __int64 a2,
        int a3,
        int a4)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  if ( a2 == *((_QWORD *)this + 16) && !*((_BYTE *)this + 296) && a3 == *((_DWORD *)this + 80) )
  {
    v4 = CGlobalCompositionSurfaceInfo::CBindInfo::EnableIndependentFlip(
           (CGlobalCompositionSurfaceInfo *)((char *)this + 104),
           a4);
    v6 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x1CDu, 0LL);
  }
  else
  {
    v6 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003292412, 0x1D1u, 0LL);
  }
  return v6;
}
