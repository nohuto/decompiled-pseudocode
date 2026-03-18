/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C013E508
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C00597AC (GreTransferSpriteStateToDwmState.c)
 *     GreSfmCloseCompositorRef @ 0x1C0079C9C (GreSfmCloseCompositorRef.c)
 *     GreSfmOpenCompositorRef @ 0x1C007B044 (GreSfmOpenCompositorRef.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C007CA2C (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     GreSfmRegisterLogicalSurfaceForSignaling @ 0x1C00B2A18 (GreSfmRegisterLogicalSurfaceForSignaling.c)
 *     GreAddLogicalSurfaceToDirtyQueue @ 0x1C00BB50C (GreAddLogicalSurfaceToDirtyQueue.c)
 *     GrepSfmRemoveSurfaces @ 0x1C00BD0D0 (GrepSfmRemoveSurfaces.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00C899C (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00C89F8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C00CD42C (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     GreDwmNotifySpriteMonitorChange @ 0x1C00D3F9C (GreDwmNotifySpriteMonitorChange.c)
 *     GreHintSpriteShape @ 0x1C00D41D4 (GreHintSpriteShape.c)
 *     ?vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z @ 0x1C00D4F20 (-vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1C00D8400 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0133A6C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C01340D4 (--0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C0134710 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C02656B0 (--0SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C02670B0 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 *     CheckAndProcessSurfaceComplete @ 0x1C02672A0 (CheckAndProcessSurfaceComplete.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(
        _OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  PushThreadGuardedObject(a1, a1, UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
