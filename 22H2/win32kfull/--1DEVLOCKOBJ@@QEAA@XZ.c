/*
 * XREFs of ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C011C124
 * Callers:
 *     NtGdiFastPolyPolyline @ 0x1C000C9F0 (NtGdiFastPolyPolyline.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C001DAA8 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C002C4E0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x1C007B2F8 (-SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x1C0096FB0 (vAccNotifyDeleteSurfaceWrap.c)
 *     GreGetAppClipBox @ 0x1C00D9B30 (GreGetAppClipBox.c)
 *     GreRectVisible @ 0x1C00DB850 (GreRectVisible.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0101D80 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C0106B60 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     GreGetRandomRgn @ 0x1C0131360 (GreGetRandomRgn.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C0134CF0 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C0265A70 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C0268210 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1C0275904 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C02773F8 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0285B9C (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     NtGdiOffsetClipRgn @ 0x1C02A9E80 (NtGdiOffsetClipRgn.c)
 *     NtGdiPtVisible @ 0x1C02AA0E0 (NtGdiPtVisible.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C02AA938 (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     NtGdiExtFloodFill @ 0x1C02D4500 (NtGdiExtFloodFill.c)
 *     NtGdiSetPixel @ 0x1C02D6E10 (NtGdiSetPixel.c)
 *     GreDescribePixelFormat @ 0x1C02D8008 (GreDescribePixelFormat.c)
 *     NtGdiSetPixelFormat @ 0x1C02D8200 (NtGdiSetPixelFormat.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00DCB64 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

void __fastcall DEVLOCKOBJ::~DEVLOCKOBJ(DEVLOCKOBJ *this)
{
  DEVLOCKOBJ::vDestructor(this);
  if ( *((_QWORD *)this + 4) )
    DLODCOBJ::vUnlock((DEVLOCKOBJ *)((char *)this + 32));
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((char *)this + 48);
}
