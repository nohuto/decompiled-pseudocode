/*
 * XREFs of ?BmlGetPathModeListForAdapterWithCoreAccessHeld@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAX_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C03B8C9C
 * Callers:
 *     ?BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C03B8BB8 (-BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORI.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A280 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     _BmlGetPathModeListForAdapter @ 0x1C03B9730 (_BmlGetPathModeListForAdapter.c)
 */

__int64 __fastcall BmlGetPathModeListForAdapterWithCoreAccessHeld(
        int a1,
        __int64 a2,
        char a3,
        int a4,
        int a5,
        __int64 a6)
{
  unsigned __int16 *v6; // rsi
  unsigned int v11; // edi
  int v12; // edx
  int v13; // ecx
  int PathModeListForAdapter; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // rax
  char v22[16]; // [rsp+50h] [rbp-38h] BYREF

  v6 = (unsigned __int16 *)&unk_1C013B300;
  v11 = 0;
  do
  {
    v12 = v6[1];
    v13 = *v6;
    v22[0] = 1;
    PathModeListForAdapter = BmlGetPathModeListForAdapter(
                               v13,
                               v12,
                               a1,
                               a2,
                               a3,
                               a4,
                               a5,
                               (struct BML_VIDPN_PATH_ORDER *)v22,
                               a6);
    v19 = PathModeListForAdapter;
    if ( PathModeListForAdapter != -1071774970 )
      break;
    if ( !v22[0] )
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
