/*
 * XREFs of ?UpdateSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAXW4SwapChainStat@CCompositionSurfaceInfo@@_N@Z @ 0x1801303F0
 * Callers:
 *     ??1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ @ 0x1800BA034 (--1CBindInfo@CGlobalCompositionSurfaceInfo@@QEAA@XZ.c)
 *     ?EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEBG@Z @ 0x1800F217C (-EnsureSwapChainTelemetryInitialized@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXPEBG@Z.c)
 *     ?UpdateSwapChainTelemetry@CGlobalCompositionSurfaceInfo@@UEAAXW4SwapChainStat@CCompositionSurfaceInfo@@_N@Z @ 0x180258A20 (-UpdateSwapChainTelemetry@CGlobalCompositionSurfaceInfo@@UEAAXW4SwapChainStat@CCompositionSurfac.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::UpdateSwapChainTelemetry(
        __int64 a1,
        int a2,
        char a3)
{
  __int64 v3; // r11
  unsigned __int64 result; // rax

  if ( *(_QWORD *)(a1 + 296) )
  {
    v3 = *((_QWORD *)g_pComposition + 76);
    result = 2LL * a2;
    if ( a3 )
    {
      *(_QWORD *)(a1 + 16LL * a2 + 232) = v3;
    }
    else
    {
      result = (v3 - *(_QWORD *)(a1 + 16LL * a2 + 232)) / (unsigned __int64)(g_qpcFrequency.QuadPart / 1000);
      *(_QWORD *)(a1 + 16 * (a2 + 15LL)) += result;
    }
  }
  return result;
}
