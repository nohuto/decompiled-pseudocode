/*
 * XREFs of GetPathsModality @ 0x1C0027994
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0025C00 (DrvSetDisplayConfig.c)
 *     ?SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C002766C (-SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C018DE48 (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C019183C (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0191DDC (-SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C0193490 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00271E8 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C0027A4C (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetPathsModality(
        __int64 a1,
        struct D3DKMT_GETPATHSMODALITY **a2,
        unsigned int a3,
        unsigned __int16 a4)
{
  int v4; // esi
  unsigned __int16 i; // ax
  bool v8; // zf
  struct D3DKMT_GETPATHSMODALITY *v9; // rax
  __int64 DxgkWin32kInterface; // rax
  __int64 v11; // rdx
  int v12; // edi
  struct D3DKMT_GETPATHSMODALITY *v13; // rax
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // [rsp+48h] [rbp+20h] BYREF

  v4 = a4;
  if ( a3 == 32 )
    WdLogSingleEntry0(1LL);
  for ( i = v4 + 8; ; i = v4 + v15 )
  {
    v8 = *a2 == 0LL;
    v16 = i;
    if ( v8 )
    {
      v9 = AllocPathsModality(i);
      *a2 = v9;
      if ( !v9 )
        break;
    }
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
    v12 = (*(__int64 (__fastcall **)(_QWORD, struct D3DKMT_GETPATHSMODALITY *, unsigned __int16 *))(DxgkWin32kInterface
                                                                                                  + 144))(
            a3,
            *a2,
            &v16);
    if ( v12 != -1073741789 )
    {
      v13 = *a2;
      if ( v12 < 0 )
      {
        FreePathsModality(*a2, v11);
        *a2 = 0LL;
        return (unsigned int)v12;
      }
      v11 = v4 + (unsigned int)*((unsigned __int16 *)v13 + 10);
      if ( (unsigned int)v11 <= *((unsigned __int16 *)v13 + 11) )
        return (unsigned int)v12;
    }
    FreePathsModality(*a2, v11);
    v15 = v16;
    *a2 = 0LL;
  }
  WdLogSingleEntry1(2LL, v16);
  return 3221225495LL;
}
