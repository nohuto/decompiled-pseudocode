/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C015D5DC
 * Callers:
 *     GreSelectRedirectionBitmap @ 0x1C0027F30 (GreSelectRedirectionBitmap.c)
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C0038B90 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00907C4 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     GreHintDCWnd @ 0x1C00DC470 (GreHintDCWnd.c)
 *     ??0DCOBJA@@QEAA@XZ @ 0x1C015F268 (--0DCOBJA@@QEAA@XZ.c)
 * Callees:
 *     ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C015D3B4 (-Feature_3101493560__private_IsEnabled@@YAHXZ.c)
 */

_OWORD *__fastcall UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(_OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( (unsigned int)Feature_3101493560__private_IsEnabled() )
    PushThreadGuardedObject(
      a1,
      (unsigned __int64)(a1 - 1) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64),
      UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
