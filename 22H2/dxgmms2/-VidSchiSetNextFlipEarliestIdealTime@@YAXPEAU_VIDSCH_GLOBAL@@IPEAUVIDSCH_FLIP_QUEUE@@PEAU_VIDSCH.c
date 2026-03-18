/*
 * XREFs of ?VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C004A5E4
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000FA10 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C00148F0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     ?VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C00482F0 (-VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 * Callees:
 *     ?VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x1C00174F0 (-VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z.c)
 */

void __fastcall VidSchiSetNextFlipEarliestIdealTime(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        struct VIDSCH_FLIP_QUEUE *a3,
        struct _VIDSCH_FLIP_QUEUE_ENTRY *a4)
{
  __int64 v4; // rsi
  __int64 v7; // rax
  int CurrentVSyncPeriodQpc; // eax

  v4 = *((_QWORD *)a4 + 162);
  v7 = *((_QWORD *)a1 + a2 + 400);
  if ( *(_DWORD *)(v7 + 3032) == -1 )
  {
    if ( *((_DWORD *)a4 + 285) == -1 )
      CurrentVSyncPeriodQpc = 0;
    else
      CurrentVSyncPeriodQpc = *(_DWORD *)(v7 + 82952);
  }
  else
  {
    CurrentVSyncPeriodQpc = VidSchiGetCurrentVSyncPeriodQpc(a1, a2, 1);
  }
  *((_QWORD *)a3 + 13) = v4 + (unsigned int)(*((_DWORD *)a4 + 268) * CurrentVSyncPeriodQpc);
}
