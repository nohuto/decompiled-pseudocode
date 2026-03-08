/*
 * XREFs of ??_GVIDMM_PARTITION@@QEAAPEAXI@Z @ 0x1C003104C
 * Callers:
 *     ?VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z @ 0x1C0001B50 (-VidMmiClosePartition@@YAXPEAUVIDMM_PARTITION@@@Z.c)
 *     ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x1C0001BA4 (-VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z.c)
 * Callees:
 *     ??1VIDMM_PARTITION@@QEAA@XZ @ 0x1C0030FB0 (--1VIDMM_PARTITION@@QEAA@XZ.c)
 */

char **__fastcall VIDMM_PARTITION::`scalar deleting destructor'(char **P)
{
  VIDMM_PARTITION::~VIDMM_PARTITION(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
