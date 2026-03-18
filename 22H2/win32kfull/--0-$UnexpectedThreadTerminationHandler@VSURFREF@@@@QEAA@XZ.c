/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C013DFC4
 * Callers:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0030084 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C0057ED0 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C007A4F0 (GreSetRedirectionSurfaceSignaling.c)
 *     GreDwmGetSurfaceData @ 0x1C007AA30 (GreDwmGetSurfaceData.c)
 *     GreSfmGetDirtyRgn @ 0x1C007E35C (GreSfmGetDirtyRgn.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00F8B40 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0103ED0 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C0134CF0 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1C0264D70 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0264DB0 (--0SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@$$QEAV0@@Z @ 0x1C02656D8 (--0SURFREF@@QEAA@$$QEAV0@@Z.c)
 *     GreDwmGetRedirectionStyle @ 0x1C0267774 (GreDwmGetRedirectionStyle.c)
 *     GreHLsurfSetPresentFlags @ 0x1C0267ADC (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C0267C44 (GreHLsurfSetUpdateId.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0299CDC (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ??0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z @ 0x1C02CE3F0 (--0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z.c)
 *     ?GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C02CE604 (-GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(_OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  PushThreadGuardedObject(
    a1,
    a1,
    UnexpectedThreadTerminationHandler<COLORTRANSFORMOBJ>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
