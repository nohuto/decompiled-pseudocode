/*
 * XREFs of ?HasActiveInk@CSuperWetInkManager@@QEBA_NXZ @ 0x180052758
 * Callers:
 *     ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x18004FEF0 (-CheckOcclusionState@CRenderTargetManager@@QEAAJXZ.c)
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x180052E70 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 *     ?PostPresent@CRenderTargetManager@@QEAA_N_N@Z @ 0x180053430 (-PostPresent@CRenderTargetManager@@QEAA_N_N@Z.c)
 *     ?GetCompositorClockBoost@CComposition@@QEBA_NXZ @ 0x1800C81D8 (-GetCompositorClockBoost@CComposition@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CSuperWetInkManager::HasActiveInk(CSuperWetInkManager *this)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v4; // rcx

  if ( !*((_QWORD *)this + 1) )
  {
    v1 = *((_QWORD *)this + 5);
    v2 = *((_QWORD *)this + 6);
    if ( v1 == v2 )
      return 0;
    v4 = *(_QWORD *)(*(_QWORD *)this + 496LL);
    while ( (unsigned __int64)(v4 - *(_QWORD *)(v1 + 88)) >= 0xA )
    {
      v1 += 104LL;
      if ( v1 == v2 )
        return 0;
    }
  }
  return 1;
}
