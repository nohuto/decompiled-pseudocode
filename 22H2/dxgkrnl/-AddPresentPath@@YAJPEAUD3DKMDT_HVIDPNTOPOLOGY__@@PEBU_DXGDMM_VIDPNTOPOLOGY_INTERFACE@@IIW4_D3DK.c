/*
 * XREFs of ?AddPresentPath@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C025CDCC
 * Callers:
 *     ?AddPathToFirstAvailableTarget@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@@Z @ 0x1C025CC78 (-AddPathToFirstAvailableTarget@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTER.c)
 *     ?AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEQEA_KQEAI@Z @ 0x1C025D214 (-AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFA.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AddPresentPath(
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a1,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rax

  v5 = a4;
  v6 = a3;
  v7 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64, __int16, int))a2 + 5))(
         a1,
         a3,
         a4,
         255LL,
         -1,
         2);
  v10 = v7;
  switch ( v7 )
  {
    case -1071774975:
      v11 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v9);
      v11[3] = v6;
      v11[4] = v5;
      v11[5] = a1;
      WdLogEvent5_WdDmmEvent(v11);
      return (unsigned int)v10;
    case -1071774920:
      v13 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v9);
      v13[3] = v6;
      v13[4] = v5;
      v13[5] = a1;
      WdLogEvent5_WdDmmEvent(v13);
      return 3223192376LL;
    case -1071774976:
      v14 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v9);
      v14[3] = v6;
      v14[4] = v5;
      v14[5] = a1;
      WdLogEvent5_WdDmmEvent(v14);
      return 3223192320LL;
    default:
      if ( v7 >= 0 )
      {
        return 0LL;
      }
      else
      {
        v15 = WdLogNewEntry5_WdError(v9, v8);
        *(_QWORD *)(v15 + 24) = v10;
        WdLogEvent5_WdError(v15);
        return (unsigned int)v10;
      }
  }
}
