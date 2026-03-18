/*
 * XREFs of GetPathsModality @ 0x1C0083798
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0065F30 (DrvSetDisplayConfig.c)
 *     ?SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C008349C (-SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C0170EB8 (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0172A20 (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0172FBC (-SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C0173980 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0065C40 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C0083844 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetPathsModality(
        __int64 a1,
        struct D3DKMT_GETPATHSMODALITY **a2,
        unsigned int a3,
        unsigned __int16 a4)
{
  int v4; // esi
  unsigned __int16 i; // ax
  struct D3DKMT_GETPATHSMODALITY *v8; // rdx
  struct D3DKMT_GETPATHSMODALITY *v9; // rax
  int v10; // edi
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // [rsp+48h] [rbp+20h] BYREF

  v4 = a4;
  if ( a3 == 32 )
    WdLogSingleEntry0(1LL);
  for ( i = v4 + 8; ; i = v4 + v12 )
  {
    v8 = *a2;
    v13 = i;
    if ( !v8 )
    {
      v9 = AllocPathsModality(i);
      *a2 = v9;
      v8 = v9;
      if ( !v9 )
        break;
    }
    v10 = ((__int64 (__fastcall *)(_QWORD, struct D3DKMT_GETPATHSMODALITY *, unsigned __int16 *))qword_1C02966F0)(
            a3,
            v8,
            &v13);
    if ( v10 != -1073741789 )
    {
      if ( v10 < 0 )
      {
        FreePathsModality(*a2);
        *a2 = 0LL;
        return (unsigned int)v10;
      }
      if ( v4 + (unsigned int)*((unsigned __int16 *)*a2 + 10) <= *((unsigned __int16 *)*a2 + 11) )
        return (unsigned int)v10;
    }
    FreePathsModality(*a2);
    v12 = v13;
    *a2 = 0LL;
  }
  WdLogSingleEntry1(2LL, v13);
  return 3221225495LL;
}
