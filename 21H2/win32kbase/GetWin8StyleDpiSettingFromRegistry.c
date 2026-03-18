/*
 * XREFs of GetWin8StyleDpiSettingFromRegistry @ 0x1C00C57EC
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0073714 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 GetWin8StyleDpiSettingFromRegistry()
{
  if ( qword_1C029B158 )
    return qword_1C029B158(&gDrvDpiWin8Style);
  else
    return 3221225659LL;
}
