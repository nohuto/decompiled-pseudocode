/*
 * XREFs of ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1AEAUQDC_CONTEXT@@@Z @ 0x1C01B9FC8
 * Callers:
 *     ?GetRequestedPathsModality@@YAJI_NAEAUQDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C01BAC54 (-GetRequestedPathsModality@@YAJI_NAEAUQDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     ?DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z @ 0x1C02F4C80 (-DispConfigConvertFromVidPn@@YAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAVDXGADAPTER@@PEAVDMMVIDPN@@E@Z.c)
 *     DxgkConvertPathsModalityToDisplayConfig @ 0x1C02F7C80 (DxgkConvertPathsModalityToDisplayConfig.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A240 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C01B038C (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?ConvertDmmToDisplayConfigScaling@@YA?AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C01BA474 (-ConvertDmmToDisplayConfigScaling@@YA-AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 *     ConvertDmmToDisplayConfigRotation @ 0x1C01BA4A4 (ConvertDmmToDisplayConfigRotation.c)
 *     DMMVideoSignalInfoToDisplayConfigVideoSignalInfo @ 0x1C01D8530 (DMMVideoSignalInfoToDisplayConfigVideoSignalInfo.c)
 *     ?ConvertDmmToDisplayConfigColorEncoding@@YA?AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C01D8934 (-ConvertDmmToDisplayConfigColorEncoding@@YA-AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FOR.c)
 */

__int64 __fastcall ConvertPathModalityToDisplayConfig(
        struct D3DKMT_GETPATHSMODALITY *a1,
        char a2,
        char a3,
        struct QDC_CONTEXT *a4)
{
  __int64 v4; // rdi
  struct QDC_CONTEXT *v5; // r14
  __int64 v8; // rbp
  unsigned int v9; // ecx
  char v10; // r15
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v11; // rdx
  bool v12; // al
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  unsigned int v16; // r13d
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // r10
  int v21; // eax
  unsigned __int64 v22; // rcx
  int v24; // eax

  v4 = *((_QWORD *)a4 + 1);
  v5 = a4;
  v8 = 1LL;
  v9 = *((_DWORD *)a4 + 1);
  if ( a3 )
  {
    if ( v9 )
      goto LABEL_3;
LABEL_59:
    WdLogSingleEntry2(3LL, v9, v8);
    return 3221225507LL;
  }
  if ( v9 < *((unsigned __int16 *)a1 + 10) )
  {
    v8 = *((unsigned __int16 *)a1 + 10);
    goto LABEL_59;
  }
LABEL_3:
  v10 = 0;
  if ( !*((_WORD *)a1 + 10) )
    goto LABEL_53;
  v11 = (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)((char *)a1 + 144);
  do
  {
    v12 = IsInternalVideoOutput(*v11);
    v11 = (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v15 + 296);
    if ( v12 )
      v10 = 1;
  }
  while ( v13 != 1 );
  v16 = v14;
  v17 = 0x100000000000LL;
  do
  {
    v18 = 296LL * v16;
    if ( a3 )
    {
      if ( v10 )
      {
        if ( !IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)((char *)a1 + v18 + 144)) )
          goto LABEL_51;
      }
    }
    *(_QWORD *)v4 = v14;
    *(_QWORD *)(v4 + 8) = v14;
    if ( (v17 & *(_QWORD *)((_BYTE *)a1 + v18 + 56)) == 0 )
    {
      WdLogSingleEntry1(1LL, 1073LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pCurrentPathModality->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_ADAPTER_VALID",
        1073LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v17 = 0x100000000000LL;
    }
    *(_QWORD *)v4 |= v17 & *(_QWORD *)((_BYTE *)a1 + v18 + 56);
    *(_QWORD *)(v4 + 16) = *(_QWORD *)((char *)a1 + v18 + 72);
    if ( (*(_QWORD *)((_BYTE *)a1 + v18 + 56) & 0x200000000000LL) == 0 )
    {
      WdLogSingleEntry1(1LL, 1077LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pCurrentPathModality->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_SOURCEID_VALID",
        1077LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *(_QWORD *)v4 |= *(_QWORD *)((_BYTE *)a1 + v18 + 56) & 0x200000000000LL;
    *(_DWORD *)(v4 + 24) = *(_DWORD *)((char *)a1 + v18 + 80);
    *(_QWORD *)v4 |= *(_QWORD *)((_BYTE *)a1 + v18 + 56) & 0x4000000000000000LL;
    if ( (*(_QWORD *)((_BYTE *)a1 + v18 + 56) & 0x400000000000LL) == 0 )
    {
      WdLogSingleEntry1(1LL, 1083LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pCurrentPathModality->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_TARGETID_VALID",
        1083LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *(_QWORD *)v4 |= *(_QWORD *)((_BYTE *)a1 + v18 + 56) & 0x400000000000LL;
    *(_DWORD *)(v4 + 28) = *(_DWORD *)((char *)a1 + v18 + 84);
    if ( !_bittest64((const signed __int64 *)((char *)a1 + v18 + 56), 0x2Fu) )
    {
      WdLogSingleEntry1(1LL, 1087LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pCurrentPathModality->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_TARGET_OUTPUT_TECH_VALID",
        1087LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v19 = *(_QWORD *)v4 | *(_QWORD *)((_BYTE *)a1 + v18 + 56) & 0x800000000000LL;
    *(_QWORD *)v4 = v19;
    *(_DWORD *)(v4 + 80) = *(_DWORD *)((char *)a1 + v18 + 144);
    *(_DWORD *)(v4 + 84) = *(_DWORD *)((char *)a1 + v18 + 148);
    *(_DWORD *)(v4 + 188) = *(_DWORD *)((char *)a1 + v18 + 268);
    if ( (*(_QWORD *)((_BYTE *)a1 + v18 + 56) & 0x4000000000000LL) != 0 )
    {
      *(_QWORD *)v4 = v19 | *(_QWORD *)((_BYTE *)a1 + v18 + 56) & 0x4000000000000LL;
      *(_DWORD *)(v4 + 156) = *(_DWORD *)((char *)a1 + v18 + 240);
      *(_QWORD *)(v4 + 168) = *(_QWORD *)((char *)a1 + v18 + 252);
    }
    if ( !_bittest64((const signed __int64 *)((char *)a1 + v18 + 56), 0x33u) )
    {
      WdLogSingleEntry1(1LL, 1100LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pCurrentPathModality->Flags & D3DKMT_PATHMODALITY_DESCRIPTOR_VIRTUAL_MODE_SUPPORT_VALID",
        1100LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v20 = *(_QWORD *)v4 | *(_QWORD *)((_BYTE *)a1 + v18 + 56) & 0x8000000000000LL;
    *(_QWORD *)v4 = v20;
    *(_BYTE *)(v4 + 101) = *((_BYTE *)a1 + v18 + 185);
    if ( (*(_QWORD *)((_BYTE *)a1 + v18 + 56) & 0x87) != 0 )
    {
      *(_QWORD *)v4 = v20 | *(_QWORD *)((_BYTE *)a1 + v18 + 56) & 0x87LL;
      DMMVideoSignalInfoToDisplayConfigVideoSignalInfo((char *)a1 + v18 + 88, v4 + 32);
      v20 = *(_QWORD *)v4;
    }
    if ( (*(_DWORD *)((_BYTE *)a1 + v18 + 56) & 0x1000000) != 0 )
    {
      v20 |= 0x1000000uLL;
      *(_QWORD *)v4 = v20;
      *(_DWORD *)(v4 + 196) = *(_DWORD *)((char *)a1 + v18 + 280);
      *(_DWORD *)(v4 + 200) = *(_DWORD *)((char *)a1 + v18 + 284);
      *(_DWORD *)(v4 + 212) = *(_DWORD *)((char *)a1 + v18 + 296);
    }
    if ( (*(_QWORD *)((_BYTE *)a1 + v18 + 56) & 0x800000000LL) != 0 )
    {
      v20 |= 0x800000000uLL;
      *(_QWORD *)v4 = v20;
      *(_DWORD *)(v4 + 204) = *(_DWORD *)((char *)a1 + v18 + 288);
      *(_DWORD *)(v4 + 208) = *(_DWORD *)((char *)a1 + v18 + 292);
    }
    if ( (*(_DWORD *)((_BYTE *)a1 + v18 + 56) & 0x200LL) != 0 )
    {
      *(_QWORD *)v4 = v20 | 0x200;
      *(_DWORD *)(v4 + 104) = ConvertDmmToDisplayConfigRotation(*(unsigned int *)((char *)a1 + v18 + 188));
    }
    if ( (*(_DWORD *)((_BYTE *)a1 + v18 + 56) & 0x10000LL) != 0 )
    {
      *(_QWORD *)v4 = v20 | 0x10000;
      v24 = ConvertDmmToDisplayConfigScaling(*(unsigned int *)((char *)a1 + v18 + 196));
      v20 = *(_QWORD *)v4;
      *(_DWORD *)(v4 + 112) = v24;
    }
    if ( (*(_QWORD *)((_BYTE *)a1 + v18 + 56) & 0x40000000000LL) != 0 )
    {
      *(_QWORD *)v4 = v20 | 0x40000000000LL;
      v21 = ConvertDmmToDisplayConfigScaling(*(unsigned int *)((char *)a1 + v18 + 192));
      v20 = *(_QWORD *)v4;
      *(_DWORD *)(v4 + 108) = v21;
    }
    if ( (*(_DWORD *)((_BYTE *)a1 + v18 + 56) & 0x800LL) != 0 )
    {
      v20 |= 0x800uLL;
      *(_QWORD *)v4 = v20;
      *(_QWORD *)(v4 + 116) = *(_QWORD *)((char *)a1 + v18 + 200);
    }
    if ( (*(_QWORD *)((_BYTE *)a1 + v18 + 56) & 0x1000000000000LL) != 0 )
    {
      v20 |= 0x1000000000000uLL;
      *(_QWORD *)v4 = v20;
      *(_DWORD *)(v4 + 192) = *(_DWORD *)((char *)a1 + v18 + 272);
    }
    v14 = 0LL;
    v22 = v20 | *(_QWORD *)((_BYTE *)a1 + v18 + 56) & 0xBF00001000000000uLL;
    *(_QWORD *)v4 = v22;
    if ( a2 || *(__int64 *)((char *)a1 + v18 + 56) < 0 )
    {
      v22 |= 0x8000000000000000uLL;
      *(_QWORD *)v4 = v22;
    }
    if ( (*(_DWORD *)((_BYTE *)a1 + v18 + 56) & 0x20000) != 0 )
    {
      v22 |= 0x20000uLL;
      *(_QWORD *)v4 = v22;
      *(_QWORD *)(v4 + 124) = *(_QWORD *)((char *)a1 + v18 + 208);
    }
    if ( (*(_DWORD *)((_BYTE *)a1 + v18 + 56) & 0x100LL) != 0 )
    {
      v22 |= 0x100uLL;
      *(_QWORD *)v4 = v22;
      *(_DWORD *)(v4 + 88) = *(_DWORD *)((char *)a1 + v18 + 152);
      *(_DWORD *)(v4 + 92) = *(_DWORD *)((char *)a1 + v18 + 156);
      *(_DWORD *)(v4 + 96) = *(_DWORD *)((char *)a1 + v18 + 172);
      *(_BYTE *)(v4 + 100) = *((_BYTE *)a1 + v18 + 184);
    }
    if ( (*(_DWORD *)((_BYTE *)a1 + v18 + 56) & 0x800000) != 0 )
    {
      v22 |= 0x800000uLL;
      *(_QWORD *)v4 = v22;
      *(_OWORD *)(v4 + 140) = *(_OWORD *)((char *)a1 + v18 + 224);
    }
    if ( (*((_BYTE *)a1 + v18 + 56) & 8) != 0 )
    {
      *(_QWORD *)v4 = v22 | 8;
      *(_DWORD *)(v4 + 180) = GetColorDepthFromPickedWireFormat(*(union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)((char *)a1 + v18 + 260));
      *(_DWORD *)(v4 + 176) = ConvertDmmToDisplayConfigColorEncoding(*(unsigned int *)((char *)a1 + v18 + 260));
      v14 = 0LL;
      *(_DWORD *)(v4 + 184) = *(_DWORD *)((char *)a1 + v18 + 264);
    }
    *(_DWORD *)(v4 + 160) = *(_DWORD *)((char *)a1 + v18 + 244);
    *(_DWORD *)(v4 + 164) = *(_DWORD *)((char *)a1 + v18 + 248);
    v4 += 216LL;
    if ( a3 )
      break;
    v17 = 0x100000000000LL;
LABEL_51:
    ++v16;
  }
  while ( v16 < *((unsigned __int16 *)a1 + 10) );
  v5 = a4;
LABEL_53:
  *((_QWORD *)v5 + 2) = v4;
  return 0LL;
}
