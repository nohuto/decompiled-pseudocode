/*
 * XREFs of ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0050D68
 * Callers:
 *     NtGdiFastPolyPolyline @ 0x1C000BDA0 (NtGdiFastPolyPolyline.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0055DA0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C005C120 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreRectVisible @ 0x1C0086F6C (GreRectVisible.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C008B840 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     GreGetAppClipBox @ 0x1C008C244 (GreGetAppClipBox.c)
 *     ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x1C00C28A4 (-SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x1C00CCD30 (vAccNotifyDeleteSurfaceWrap.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C010DA60 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     GreGetRandomRgn @ 0x1C0125C40 (GreGetRandomRgn.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C0128D34 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     ?GreGetRandomRgn_Unpatched@@YAHPEAUHDC__@@PEAUHRGN__@@H@Z @ 0x1C013015C (-GreGetRandomRgn_Unpatched@@YAHPEAUHDC__@@PEAUHRGN__@@H@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C0268520 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C026AB80 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1C02782F8 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0279D88 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C028848C (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     NtGdiOffsetClipRgn @ 0x1C02AC3F0 (NtGdiOffsetClipRgn.c)
 *     NtGdiPtVisible @ 0x1C02AC640 (NtGdiPtVisible.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C02ACE70 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     NtGdiExtFloodFill @ 0x1C02D6200 (NtGdiExtFloodFill.c)
 *     NtGdiSetPixel @ 0x1C02D8C50 (NtGdiSetPixel.c)
 *     GreDescribePixelFormat @ 0x1C02D9DF4 (GreDescribePixelFormat.c)
 *     NtGdiSetPixelFormat @ 0x1C02D9FD0 (NtGdiSetPixelFormat.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKOBJ::~DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  DEVLOCKOBJ::vDestructor(this);
  if ( *((_QWORD *)this + 4) )
    DLODCOBJ::vUnlock((DEVLOCKOBJ *)((char *)this + 32));
}
