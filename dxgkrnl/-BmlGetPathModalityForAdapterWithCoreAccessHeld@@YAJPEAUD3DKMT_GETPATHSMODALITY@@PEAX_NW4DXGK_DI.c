/*
 * XREFs of ?BmlGetPathModalityForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IPEAPEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C016D30C
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016A260 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C016C98C (-BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@AEAU_LUID@@_NW4DXGK_DIAG_CCD_BML_.c)
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_DXGK_DISPLAYMODE_INFO@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C01E5A2C (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A280 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     _BmlGetPathModalityForAdapter @ 0x1C016D3D0 (_BmlGetPathModalityForAdapter.c)
 */

__int64 __fastcall BmlGetPathModalityForAdapterWithCoreAccessHeld(
        __int64 a1,
        __int64 a2,
        char a3,
        int a4,
        int a5,
        __int64 a6)
{
  unsigned __int16 *v6; // rsi
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int PathModalityForAdapter; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rax
  int v22; // [rsp+20h] [rbp-68h]
  char v23[16]; // [rsp+50h] [rbp-38h] BYREF

  v6 = (unsigned __int16 *)&unk_1C013B138;
  v11 = 0;
  do
  {
    v12 = v6[1];
    v13 = *v6;
    LOBYTE(v22) = a3;
    v23[0] = 1;
    PathModalityForAdapter = BmlGetPathModalityForAdapter(v13, v12, a1, a2, v22, a4, a5, a6, v23);
    v19 = PathModalityForAdapter;
    if ( PathModalityForAdapter != -1071774970 )
      break;
    if ( !v23[0] )
      return (unsigned int)v19;
    DxgkLogCodePointPacket(0x17u, v11++, *v6, 0xC01E0306, *(_QWORD *)(a2 + 404));
    v6 += 2;
  }
  while ( v11 < 5 );
  if ( (int)v19 >= 0 )
  {
    v20 = WdLogNewEntry5_WdTrace(v16, v15, v17, v18);
    *(_QWORD *)(v20 + 24) = v19;
    *(_QWORD *)(v20 + 32) = v11;
  }
  return (unsigned int)v19;
}
