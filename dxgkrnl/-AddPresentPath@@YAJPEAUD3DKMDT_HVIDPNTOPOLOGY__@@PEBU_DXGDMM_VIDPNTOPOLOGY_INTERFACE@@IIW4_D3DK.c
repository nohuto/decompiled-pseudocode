/*
 * XREFs of ?AddPresentPath@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C02FB070
 * Callers:
 *     ?AddPathToFirstAvailableTarget@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@@Z @ 0x1C02FAEB0 (-AddPathToFirstAvailableTarget@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTER.c)
 *     ?AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEQEA_KQEAI@Z @ 0x1C02FB5E8 (-AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AddPresentPath(
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a1,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  int v7; // eax
  __int64 v8; // rdi
  unsigned int v9; // ebx

  v5 = a4;
  v6 = a3;
  v7 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64, __int16, int))a2 + 5))(
         a1,
         a3,
         a4,
         255LL,
         -1,
         2);
  v8 = v7;
  v9 = -1071774975;
  if ( v7 == -1071774975 || (v9 = -1071774920, v7 == -1071774920) || (v9 = -1071774976, v7 == -1071774976) )
  {
    WdLogSingleEntry3(7LL, v6, v5, a1);
    return v9;
  }
  else if ( v7 >= 0 )
  {
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, v7);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"failed call to DXGDMM_VIDPNTOPOLOGY_INTERFACE::pfnAddPath (status = 0x%I64x).",
      v8,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v8;
  }
}
