/*
 * XREFs of ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C017318C
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0065F30 (DrvSetDisplayConfig.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0065C40 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C0083844 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?ConvertPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01705B4 (-ConvertPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z @ 0x1C0172724 (-ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z.c)
 */

__int64 __fastcall SetDisplayConfigHandlePreferredScaling(
        struct D3DKMT_GETPATHSMODALITY *a1,
        enum _DXGK_DIAG_SDC_STAGE *a2)
{
  unsigned __int16 v3; // cx
  int v5; // edi
  int v6; // eax
  struct D3DKMT_GETPATHSMODALITY *v8; // [rsp+30h] [rbp+8h]

  v3 = *((_WORD *)a1 + 10);
  if ( !v3 )
  {
    WdLogSingleEntry0(1LL);
    v3 = *((_WORD *)a1 + 10);
  }
  v8 = AllocPathsModality(v3);
  if ( v8 )
  {
    if ( (int)((__int64 (__fastcall *)(struct D3DKMT_GETPATHSMODALITY *, struct D3DKMT_GETPATHSMODALITY *))qword_1C02968B0)(
                v8,
                a1) < 0 )
      WdLogSingleEntry0(1LL);
    if ( (int)((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *))qword_1C02966F0)(47LL, v8) < 0 )
    {
      ConvertPreferredScalingToAdapterDefault(a1);
    }
    else
    {
      v5 = ReplacePreferredScaling(v8, a1);
      if ( v5 < 0 )
      {
        v6 = 20;
        goto LABEL_10;
      }
    }
    v5 = 0;
    goto LABEL_13;
  }
  v5 = -1073741801;
  v6 = 19;
LABEL_10:
  *(_DWORD *)a2 = v6;
LABEL_13:
  FreePathsModality(v8);
  return (unsigned int)v5;
}
