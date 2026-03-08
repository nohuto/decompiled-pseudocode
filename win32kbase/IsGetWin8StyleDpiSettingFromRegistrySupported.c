/*
 * XREFs of IsGetWin8StyleDpiSettingFromRegistrySupported @ 0x1C00D3DD4
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0022E20 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetWin8StyleDpiSettingFromRegistrySupported()
{
  if ( qword_1C02D5950 )
    return qword_1C02D5950();
  else
    return 3221225659LL;
}
