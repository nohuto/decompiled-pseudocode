/*
 * XREFs of GetPathsModality @ 0x1C009DB74
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0019050 (DrvSetDisplayConfig.c)
 *     ?SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C009D9AC (-SetDisplayConfigGetActualPathsModality@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C0143EF4 (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C01459BC (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     ?SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0145F70 (-SetDisplayConfigHandleOnlyProvidedPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_.c)
 *     DrvDisplayConfigSetDeviceInfo @ 0x1C0146990 (DrvDisplayConfigSetDeviceInfo.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0018D30 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C009DC34 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetPathsModality(
        __int64 a1,
        struct D3DKMT_GETPATHSMODALITY **a2,
        unsigned int a3,
        unsigned __int16 a4)
{
  int v4; // esi
  unsigned __int16 v7; // ax
  struct D3DKMT_GETPATHSMODALITY *v8; // rdx
  struct D3DKMT_GETPATHSMODALITY *v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  int v12; // edi
  __int64 v14; // rax
  unsigned __int16 v15; // ax
  __int64 v16; // rax
  unsigned __int16 v17; // [rsp+48h] [rbp+20h] BYREF

  v4 = a4;
  if ( a3 == 32 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v14);
  }
  v7 = v4 + 8;
  v17 = v4 + 8;
  do
  {
    v8 = *a2;
    if ( !*a2 )
    {
      v9 = AllocPathsModality(v7);
      *a2 = v9;
      v8 = v9;
      if ( !v9 )
      {
        v16 = WdLogNewEntry5_WdError(v10, 0LL);
        *(_QWORD *)(v16 + 24) = v17;
        WdLogEvent5_WdError(v16);
        return 3221225495LL;
      }
    }
    v11 = ((__int64 (__fastcall *)(_QWORD, struct D3DKMT_GETPATHSMODALITY *, unsigned __int16 *))qword_1C0251900)(
            a3,
            v8,
            &v17);
    v12 = v11;
    if ( v11 == -1073741789
      || v11 >= 0 && v4 + (unsigned int)*((unsigned __int16 *)*a2 + 10) > *((unsigned __int16 *)*a2 + 11) )
    {
      FreePathsModality(*a2);
      v15 = v17;
      v12 = -1073741789;
      *a2 = 0LL;
      v7 = v4 + v15;
      v17 = v7;
    }
    else
    {
      v7 = v17;
    }
  }
  while ( v12 == -1073741789 );
  if ( v12 < 0 )
  {
    FreePathsModality(*a2);
    *a2 = 0LL;
  }
  return (unsigned int)v12;
}
