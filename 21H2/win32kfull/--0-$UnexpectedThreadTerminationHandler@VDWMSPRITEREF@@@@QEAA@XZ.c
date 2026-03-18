/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015D684
 * Callers:
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C00208A4 (GreAddLogicalSurfaceToDirtyQueue.c)
 *     ?vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z @ 0x1C0020A28 (-vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0020C2C (--0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00217D8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0022938 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C0037EE0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C0083498 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C0083AA4 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     GreSfmCloseCompositorRef @ 0x1C0089AE4 (GreSfmCloseCompositorRef.c)
 *     GreSfmOpenCompositorRef @ 0x1C0089F6C (GreSfmOpenCompositorRef.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00ECC20 (GreTransferSpriteStateToDwmState.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C00ED408 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x1C0109CF0 (GreSfmRegisterLogicalSurfaceForSignaling.c)
 *     GrepSfmRemoveSurfaces @ 0x1C01208C0 (GrepSfmRemoveSurfaces.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0153D4C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C01541E4 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C026B4BC (--0SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     CheckAndProcessSurfaceComplete @ 0x1C026CC10 (CheckAndProcessSurfaceComplete.c)
 * Callees:
 *     ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C015D3B4 (-Feature_3101493560__private_IsEnabled@@YAHXZ.c)
 */

_OWORD *__fastcall UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(
        _OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( (unsigned int)Feature_3101493560__private_IsEnabled() )
    PushThreadGuardedObject(
      a1,
      a1,
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
