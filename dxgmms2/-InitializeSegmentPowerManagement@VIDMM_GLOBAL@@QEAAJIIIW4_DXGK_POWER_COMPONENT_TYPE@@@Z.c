/*
 * XREFs of ?InitializeSegmentPowerManagement@VIDMM_GLOBAL@@QEAAJIIIW4_DXGK_POWER_COMPONENT_TYPE@@@Z @ 0x1C00E3E08
 * Callers:
 *     ?VidMmInitializeSegmentPowerManagement@@YAJPEAVVIDMM_GLOBAL@@IIIW4_DXGK_POWER_COMPONENT_TYPE@@@Z @ 0x1C002CC60 (-VidMmInitializeSegmentPowerManagement@@YAJPEAVVIDMM_GLOBAL@@IIIW4_DXGK_POWER_COMPONENT_TYPE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VIDMM_GLOBAL::InitializeSegmentPowerManagement(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        unsigned int a3,
        int a4,
        enum _DXGK_POWER_COMPONENT_TYPE a5)
{
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( a2 >= *((_DWORD *)this + 1754) )
  {
    WdLogSingleEntry1(1LL, a2);
LABEL_12:
    DxgkLogInternalTriageEvent(v5, 0x40000LL);
    return 3221225485LL;
  }
  if ( a3 >= *(_DWORD *)(*((_QWORD *)this + 5028) + 1616LL * a2 + 32) || a3 >= 0x20 )
  {
    WdLogSingleEntry2(1LL, a3, 7229LL);
    goto LABEL_12;
  }
  _mm_lfence();
  v6 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (a3 + *(_DWORD *)(1616LL * a2 + *((_QWORD *)this + 5028) + 28)));
  if ( a5 == DXGK_POWER_COMPONENT_MEMORY )
  {
    if ( (*(_DWORD *)(v6 + 80) & 0x1001) == 0 )
      *(_DWORD *)(v6 + 368) = a4;
  }
  else if ( a5 == DXGK_POWER_COMPONENT_MEMORY_REFRESH )
  {
    *(_DWORD *)(*(_QWORD *)(v6 + 8) + 40184LL) = a4;
  }
  return 0LL;
}
