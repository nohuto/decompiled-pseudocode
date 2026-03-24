/*
 * XREFs of GetWin8StyleDpiSettingFromRegistry @ 0x1C0005AD4
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0011478 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 GetWin8StyleDpiSettingFromRegistry()
{
  if ( qword_1C02563D8 )
    return qword_1C02563D8(&gDrvDpiWin8Style);
  else
    return 3221225659LL;
}
