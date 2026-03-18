/*
 * XREFs of IsDrvRealizeHalftonePaletteSupported @ 0x1C023DA44
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00760D4 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     DrvEnableMDEV @ 0x1C00783A4 (DrvEnableMDEV.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsDrvRealizeHalftonePaletteSupported()
{
  if ( qword_1C029B100 )
    return qword_1C029B100();
  else
    return 3221225659LL;
}
