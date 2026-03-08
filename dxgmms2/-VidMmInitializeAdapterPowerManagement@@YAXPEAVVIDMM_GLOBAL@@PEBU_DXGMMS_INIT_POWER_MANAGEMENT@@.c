/*
 * XREFs of ?VidMmInitializeAdapterPowerManagement@@YAXPEAVVIDMM_GLOBAL@@PEBU_DXGMMS_INIT_POWER_MANAGEMENT@@@Z @ 0x1C00189F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeAdapterPowerManagement@VIDMM_GLOBAL@@QEAAXPEBU_DXGMMS_INIT_POWER_MANAGEMENT@@@Z @ 0x1C00E3DC8 (-InitializeAdapterPowerManagement@VIDMM_GLOBAL@@QEAAXPEBU_DXGMMS_INIT_POWER_MANAGEMENT@@@Z.c)
 */

void __fastcall VidMmInitializeAdapterPowerManagement(
        struct VIDMM_GLOBAL *a1,
        const struct _DXGMMS_INIT_POWER_MANAGEMENT *a2)
{
  VIDMM_GLOBAL::InitializeAdapterPowerManagement(a1, a2);
}
