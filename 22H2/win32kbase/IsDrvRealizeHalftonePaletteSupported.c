/*
 * XREFs of IsDrvRealizeHalftonePaletteSupported @ 0x1C01FBBE4
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0013A90 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     DrvEnableMDEV @ 0x1C0016098 (DrvEnableMDEV.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IsDrvRealizeHalftonePaletteSupported()
{
  if ( qword_1C0255380 )
    return qword_1C0255380();
  else
    return 3221225659LL;
}
