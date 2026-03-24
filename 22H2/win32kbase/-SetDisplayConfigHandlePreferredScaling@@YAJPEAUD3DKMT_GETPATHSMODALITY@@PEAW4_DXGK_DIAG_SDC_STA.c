/*
 * XREFs of ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C01464AC
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C001A4C0 (DrvSetDisplayConfig.c)
 * Callees:
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C001A1A0 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C009E9F4 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     ?ConvertPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0143958 (-ConvertPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z @ 0x1C01459B4 (-ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z.c)
 */

__int64 __fastcall SetDisplayConfigHandlePreferredScaling(
        struct D3DKMT_GETPATHSMODALITY *a1,
        enum _DXGK_DIAG_SDC_STAGE *a2)
{
  __int64 v3; // rcx
  __int64 v5; // rax
  int v6; // edi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  struct D3DKMT_GETPATHSMODALITY *v12; // [rsp+30h] [rbp+8h]

  v3 = *((unsigned __int16 *)a1 + 10);
  if ( !(_WORD)v3 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3, a2);
    WdLogEvent5_WdAssertion(v5);
    LOWORD(v3) = *((_WORD *)a1 + 10);
  }
  v12 = AllocPathsModality(v3);
  if ( v12 )
  {
    if ( (int)((__int64 (__fastcall *)(struct D3DKMT_GETPATHSMODALITY *, struct D3DKMT_GETPATHSMODALITY *))qword_1C0250AE8)(
                v12,
                a1) < 0 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v9, v8);
      WdLogEvent5_WdAssertion(v10);
    }
    if ( (int)((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *))qword_1C0250920)(47LL, v12) < 0 )
    {
      ConvertPreferredScalingToAdapterDefault(a1);
    }
    else
    {
      v6 = ReplacePreferredScaling((__int64)v12, (__int64)a1);
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
  FreePathsModality(v12);
  return (unsigned int)v6;
}
