/*
 * XREFs of ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C03A7510
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03ABFB8 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00063C4 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C00063FC (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C01831A4 (-_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKM.c)
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C03B1DB8 (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 */

__int64 __fastcall VIDPN_MGR::AddUnpinnedPathToVidPnTopology(
        struct _KTHREAD **this,
        struct DMMVIDPNTOPOLOGY *const a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *a3,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a4)
{
  __int64 VidPnSourceId; // rbp
  __int64 VidPnTargetId; // r14
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  _QWORD *v15; // rax
  struct DMMVIDPNPRESENTPATH *v16; // rdx
  int v17; // eax
  int v18; // esi
  struct DMMVIDPNPRESENTPATH *v20; // [rsp+60h] [rbp+8h] BYREF
  struct DMMVIDPNPRESENTPATH *v21; // [rsp+68h] [rbp+10h] BYREF

  if ( this[8] != KeGetCurrentThread() )
    WdLogSingleEntry0(1LL);
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  VidPnSourceId = a3->VidPnSourceId;
  VidPnTargetId = a3->VidPnTargetId;
  v20 = 0LL;
  v21 = 0LL;
  v9 = DMMVIDPNTOPOLOGY::CreateNewPath(a2, a3, &v21);
  v14 = v9;
  if ( v9 >= 0 )
  {
    v16 = v21;
    *((_WORD *)v21 + 54) = *(_WORD *)&a3[1].CopyProtection.OEMCopyProtection[52];
    auto_ptr<DMMVIDPNPRESENTPATH>::reset(
      (__int64 (__fastcall ****)(_QWORD, __int64))&v20,
      (__int64 (__fastcall ***)(_QWORD, __int64))v16);
    v17 = VIDPN_MGR::_AddPathToVidPnTopology((VIDPN_MGR *)this, a2, v20, D3DKMDT_MCC_ENFORCE, 1u);
    v18 = v17;
    LODWORD(v14) = -1071774957;
    if ( v17 == -1071774957
      || (LODWORD(v14) = -1071774920, v17 == -1071774920)
      || (LODWORD(v14) = -1071774975, v17 == -1071774975) )
    {
      WdLogSingleEntry3(7LL, VidPnSourceId, VidPnTargetId, a2);
    }
    else if ( v17 >= 0 )
    {
      v20 = 0LL;
      LODWORD(v14) = 0;
    }
    else
    {
      WdLogSingleEntry4(2LL, VidPnSourceId, VidPnTargetId, a2, v17);
      LODWORD(v14) = v18;
    }
  }
  else
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
    v15[3] = VidPnSourceId;
    v15[4] = VidPnTargetId;
    v15[5] = v14;
  }
  auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v20);
  return (unsigned int)v14;
}
