/*
 * XREFs of ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C03B2310
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173EE4 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03ABFB8 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 *     ?DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z @ 0x1C03AD2B4 (-DmmDisableAllFailurePathsOnAdapter@@YAJPEAXKW4_DMM_CLIENT_TYPE@@PEAVDXGDEVICE@@@Z.c)
 *     ?RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I@Z @ 0x1C03B1870 (-RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY_.c)
 * Callees:
 *     ?IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C00062B4 (-IsSourceInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0182810 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C01830A8 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(DMMVIDPNTOPOLOGY *this, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  char i; // r14
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbp
  __int64 v17; // r14
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rax
  __int64 v24; // rax
  unsigned int v25; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  if ( DMMVIDPNTOPOLOGY::IsSourceInTopology(this, a2) )
  {
    v25 = -1;
    for ( i = 0; ; i = 1 )
    {
      v11 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(this, (char *)(unsigned int)v2, 0LL, &v25);
      LODWORD(v16) = v11;
      if ( v11 == -1071774919 )
        break;
      if ( v11 < 0 )
      {
        WdLogSingleEntry3(2LL, v2, this, v11);
        return (unsigned int)v16;
      }
      v17 = v25;
      if ( v25 == -1 )
        WdLogSingleEntry0(1LL);
      v18 = DMMVIDPNTOPOLOGY::RemovePath(this, v2, v17, 0LL);
      v16 = v18;
      if ( v18 < 0 )
      {
        if ( v18 != -1073741790 )
          WdLogSingleEntry0(1LL);
        v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
        v23[3] = v2;
        v23[4] = v17;
        v23[5] = v16;
        return (unsigned int)v16;
      }
    }
    v24 = WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
    *(_QWORD *)(v24 + 24) = v2;
    *(_QWORD *)(v24 + 32) = this;
    return i == 0 ? 0xC01E0339 : 0;
  }
  else
  {
    v8 = WdLogNewEntry5_WdTrace(v5, v4, v6, v7);
    *(_QWORD *)(v8 + 24) = v2;
    *(_QWORD *)(v8 + 32) = this;
    return 3223192377LL;
  }
}
