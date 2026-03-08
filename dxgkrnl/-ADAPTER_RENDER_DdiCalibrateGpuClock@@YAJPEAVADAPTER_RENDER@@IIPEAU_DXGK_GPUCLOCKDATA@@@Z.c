/*
 * XREFs of ?ADAPTER_RENDER_DdiCalibrateGpuClock@@YAJPEAVADAPTER_RENDER@@IIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1C0047B10
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1C0042164 (-DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiCalibrateGpuClock(
        struct ADAPTER_RENDER *a1,
        unsigned int a2,
        __int64 a3,
        struct _DXGK_GPUCLOCKDATA *a4)
{
  return ADAPTER_RENDER::DdiCalibrateGpuClock(a1, a2, a3, a4);
}
