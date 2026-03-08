/*
 * XREFs of IsDrvRealizeHalftonePaletteSupported @ 0x1C0271554
 * Callers:
 *     DrvEnableMDEV @ 0x1C001D978 (DrvEnableMDEV.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001E2BC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsDrvRealizeHalftonePaletteSupported()
{
  if ( qword_1C02D5900 )
    return qword_1C02D5900();
  else
    return 3221225659LL;
}
