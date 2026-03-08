/*
 * XREFs of ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1C01832FC
 * Callers:
 *     BmlFunctionalizePath @ 0x1C016DA58 (BmlFunctionalizePath.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C016F270 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?PinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I_N@Z @ 0x1C020D350 (-PinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I_N@.c)
 *     ?PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C03AAAD8 (-PinModalityOnPathInVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C03AB064 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     _BmlGetPathModeListForPath @ 0x1C03B98CC (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0014550 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ @ 0x1C002353C (-UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C01833DC (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C01A2430 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall VIDPN_MGR::PinVidPnSourceMode(
        VIDPN_MGR *this,
        struct DMMVIDPNSOURCEMODESET *const a2,
        unsigned int a3,
        char a4)
{
  __int64 v4; // rdi
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // rbp
  __int64 v11; // rbp
  __int64 Container; // rax
  int v13; // ecx
  __int64 v14; // r13
  __int64 v15; // r9
  int v16; // eax
  unsigned int v17; // r14d
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // [rsp+68h] [rbp+10h] BYREF
  int v23; // [rsp+6Ch] [rbp+14h]

  v4 = a3;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( (_DWORD)v4 == -1 )
    WdLogSingleEntry0(1LL);
  v8 = *((_QWORD *)a2 + 18);
  v9 = DMMVIDPNSOURCEMODESET::PinMode(a2, v4);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = *((_QWORD *)a2 + 14);
    if ( !v11 )
      WdLogSingleEntry0(1LL);
    if ( !*(_QWORD *)(v11 + 40) )
      WdLogSingleEntry0(1LL);
    Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v11 + 40) + 64LL);
    v13 = *(_DWORD *)(v11 + 24);
    v14 = Container;
    v23 = -1;
    LOBYTE(v15) = a4;
    v22 = v13;
    v16 = VIDPN_MGR::FormalizeVidPnChange(this, Container & -(__int64)(Container != -88), 3LL, v15, &v22);
    v17 = v16;
    if ( v16 >= 0 )
      return 0LL;
    if ( v16 == -1071774970 )
      WdLogSingleEntry2(3LL, v4, a2);
    else
      WdLogSingleEntry3(2LL, v4, a2, v16);
    if ( !*((_QWORD *)this + 1) )
      WdLogSingleEntry0(1LL);
    WdLogSingleEntry4(7LL, v4, *(unsigned int *)(v11 + 24), v14, *(_QWORD *)(*((_QWORD *)this + 1) + 16LL));
    if ( v8 )
    {
      if ( (int)DMMVIDPNSOURCEMODESET::PinMode(a2, *(_DWORD *)(v8 + 24)) < 0 )
        goto LABEL_24;
    }
    else if ( (int)DMMVIDPNSOURCEMODESET::UnpinMode(a2, v19, v20, v21) < 0 )
    {
LABEL_24:
      WdLogSingleEntry0(1LL);
    }
    return v17;
  }
  if ( !*((_QWORD *)this + 1) )
    WdLogSingleEntry0(1LL);
  WdLogSingleEntry4(2LL, v4, a2, *(_QWORD *)(*((_QWORD *)this + 1) + 16LL), v10);
  return (unsigned int)v10;
}
