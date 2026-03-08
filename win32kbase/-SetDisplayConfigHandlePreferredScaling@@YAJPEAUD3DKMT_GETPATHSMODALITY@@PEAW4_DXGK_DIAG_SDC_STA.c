/*
 * XREFs of ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0191FA8
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0025C00 (DrvSetDisplayConfig.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00271E8 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C0027A4C (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ?ConvertPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C018D34C (-ConvertPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z @ 0x1C01913D4 (-ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z.c)
 */

__int64 __fastcall SetDisplayConfigHandlePreferredScaling(
        struct D3DKMT_GETPATHSMODALITY *a1,
        enum _DXGK_DIAG_SDC_STAGE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // edi
  int v7; // eax
  __int64 DxgkWin32kInterface; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  struct D3DKMT_GETPATHSMODALITY *v13; // [rsp+40h] [rbp+8h]

  if ( !*((_WORD *)a1 + 10) )
    WdLogSingleEntry0(1LL);
  v13 = AllocPathsModality(*((_WORD *)a1 + 10));
  if ( v13 )
  {
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v5, v4);
    if ( (*(int (__fastcall **)(struct D3DKMT_GETPATHSMODALITY *, struct D3DKMT_GETPATHSMODALITY *))(DxgkWin32kInterface + 592))(
           v13,
           a1) < 0 )
      WdLogSingleEntry0(1LL);
    v11 = DxDdGetDxgkWin32kInterface(v10, v9);
    if ( (*(int (__fastcall **)(__int64, struct D3DKMT_GETPATHSMODALITY *))(v11 + 144))(47LL, v13) < 0 )
    {
      ConvertPreferredScalingToAdapterDefault(a1);
    }
    else
    {
      v6 = ReplacePreferredScaling(v13, (__int64)a1);
      if ( v6 < 0 )
      {
        v7 = 20;
        goto LABEL_10;
      }
    }
    v6 = 0;
    goto LABEL_13;
  }
  v6 = -1073741801;
  v7 = 19;
LABEL_10:
  *(_DWORD *)a2 = v7;
LABEL_13:
  FreePathsModality(v13, v4);
  return (unsigned int)v6;
}
