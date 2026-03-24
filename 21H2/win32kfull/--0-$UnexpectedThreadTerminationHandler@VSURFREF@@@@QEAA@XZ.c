/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C016A05C
 * Callers:
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C0012D88 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     GreDwmGetSurfaceData @ 0x1C00170D8 (GreDwmGetSurfaceData.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C0017708 (GreSetRedirectionSurfaceSignaling.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C008393C (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C00AB5AC (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     GreSfmGetDirtyRgn @ 0x1C00BCB28 (GreSfmGetDirtyRgn.c)
 *     ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x1C0137BF0 (--0SURFREF@@QEAA@PEAVSURFACE@@@Z.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1C026CF50 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C026CF90 (--0SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@$$QEAV0@@Z @ 0x1C026D768 (--0SURFREF@@QEAA@$$QEAV0@@Z.c)
 *     GreDwmGetRedirectionStyle @ 0x1C026F574 (GreDwmGetRedirectionStyle.c)
 *     GreHLsurfSetPresentFlags @ 0x1C026FA5C (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C026FBD0 (GreHLsurfSetUpdateId.c)
 *     ??0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z @ 0x1C02B60EC (--0COLORSPACEREF@@QEAA@PEAUHCOLORSPACE__@@@Z.c)
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
