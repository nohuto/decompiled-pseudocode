/*
 * XREFs of ??_GVIDMM_SCH_LOG@@AEAAPEAXI@Z @ 0x1C004CE98
 * Callers:
 *     ?VidSchiDestroyNodeSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C004298C (-VidSchiDestroyNodeSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiCreateNodeSchedulingLog @ 0x1C0045370 (VidSchiCreateNodeSchedulingLog.c)
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z @ 0x1C004CECC (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z.c)
 * Callees:
 *     ??1VIDMM_SCH_LOG@@AEAA@XZ @ 0x1C004CD60 (--1VIDMM_SCH_LOG@@AEAA@XZ.c)
 */

VIDMM_SCH_LOG *__fastcall VIDMM_SCH_LOG::`scalar deleting destructor'(VIDMM_SCH_LOG *P)
{
  VIDMM_SCH_LOG::~VIDMM_SCH_LOG(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
