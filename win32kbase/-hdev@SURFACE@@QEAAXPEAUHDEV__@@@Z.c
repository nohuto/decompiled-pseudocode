/*
 * XREFs of ?hdev@SURFACE@@QEAAXPEAUHDEV__@@@Z @ 0x1C00A40A0
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001E2BC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0024834 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C0044400 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     bDynamicModeChange @ 0x1C006DF9C (bDynamicModeChange.c)
 *     ?vMarkSurfacesWithHDEV@@YAXPEAVPDEV@@@Z @ 0x1C006EF08 (-vMarkSurfacesWithHDEV@@YAXPEAVPDEV@@@Z.c)
 *     EngAssociateSurface @ 0x1C00A3DA0 (EngAssociateSurface.c)
 *     EngModifySurface @ 0x1C00A3E40 (EngModifySurface.c)
 *     pProcessDfbSurfacesInternal @ 0x1C01878E0 (pProcessDfbSurfacesInternal.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C018EBEC (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 * Callees:
 *     memset @ 0x1C00E1980 (memset.c)
 */

void __fastcall SURFACE::hdev(SURFACE *this, HDEV a2)
{
  *((_QWORD *)this + 89) = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 6088LL);
  memset((char *)this + 728, 0, 0x40uLL);
  RtlCaptureStackBackTrace(0, 8u, (PVOID *)this + 91, 0LL);
  *((_QWORD *)this + 6) = a2;
  *((_QWORD *)this + 87) = a2;
}
