/*
 * XREFs of ?VidMmInitializeSegmentPowerManagement@@YAJPEAVVIDMM_GLOBAL@@IIIW4_DXGK_POWER_COMPONENT_TYPE@@@Z @ 0x1C002CC60
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeSegmentPowerManagement@VIDMM_GLOBAL@@QEAAJIIIW4_DXGK_POWER_COMPONENT_TYPE@@@Z @ 0x1C00E3E08 (-InitializeSegmentPowerManagement@VIDMM_GLOBAL@@QEAAJIIIW4_DXGK_POWER_COMPONENT_TYPE@@@Z.c)
 */

__int64 __fastcall VidMmInitializeSegmentPowerManagement(
        struct VIDMM_GLOBAL *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        enum _DXGK_POWER_COMPONENT_TYPE a5)
{
  return VIDMM_GLOBAL::InitializeSegmentPowerManagement(a1, a2, a3, a4, a5);
}
