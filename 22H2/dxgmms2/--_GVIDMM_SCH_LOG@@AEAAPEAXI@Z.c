/*
 * XREFs of ??_GVIDMM_SCH_LOG@@AEAAPEAXI@Z @ 0x1C004CD38
 * Callers:
 *     ?VidSchiDestroyNodeSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C004282C (-VidSchiDestroyNodeSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiCreateNodeSchedulingLog @ 0x1C0045210 (VidSchiCreateNodeSchedulingLog.c)
 *     ?CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z @ 0x1C004CD6C (-CreateSchLog@VIDMM_SCH_LOG@@SAJPEAVVIDMM_GLOBAL@@I_KPEAPEAV1@PEAPEAXPEA_K@Z.c)
 * Callees:
 *     ??1VIDMM_SCH_LOG@@AEAA@XZ @ 0x1C004CC00 (--1VIDMM_SCH_LOG@@AEAA@XZ.c)
 */

VIDMM_SCH_LOG *__fastcall VIDMM_SCH_LOG::`scalar deleting destructor'(VIDMM_SCH_LOG *P)
{
  VIDMM_SCH_LOG::~VIDMM_SCH_LOG(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
