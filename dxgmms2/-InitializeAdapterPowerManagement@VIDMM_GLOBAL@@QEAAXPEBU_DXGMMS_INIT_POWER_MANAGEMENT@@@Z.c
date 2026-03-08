/*
 * XREFs of ?InitializeAdapterPowerManagement@VIDMM_GLOBAL@@QEAAXPEBU_DXGMMS_INIT_POWER_MANAGEMENT@@@Z @ 0x1C00E3DC8
 * Callers:
 *     ?VidMmInitializeAdapterPowerManagement@@YAXPEAVVIDMM_GLOBAL@@PEBU_DXGMMS_INIT_POWER_MANAGEMENT@@@Z @ 0x1C00189F0 (-VidMmInitializeAdapterPowerManagement@@YAXPEAVVIDMM_GLOBAL@@PEBU_DXGMMS_INIT_POWER_MANAGEMENT@@.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::InitializeAdapterPowerManagement(
        VIDMM_GLOBAL *this,
        const struct _DXGMMS_INIT_POWER_MANAGEMENT *a2)
{
  *(_OWORD *)((char *)this + 40088) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 40104) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 40120) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 40136) = *((_OWORD *)a2 + 3);
  *(_OWORD *)((char *)this + 40152) = *((_OWORD *)a2 + 4);
}
