/*
 * XREFs of BmlFillPreferredMonitorMode @ 0x1C016EB6C
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C016F270 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     MonitorGetNextMonitorSourceMode @ 0x1C016EEF0 (MonitorGetNextMonitorSourceMode.c)
 *     BmlGetMonitorModePreference @ 0x1C016F008 (BmlGetMonitorModePreference.c)
 *     BmlIsEDIDCapableOutputTechonology @ 0x1C016F144 (BmlIsEDIDCapableOutputTechonology.c)
 *     MonitorGetNextFrequencyRange @ 0x1C016F178 (MonitorGetNextFrequencyRange.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C01710A4 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     BmlIsLowResAnalogTvOutput @ 0x1C0171D0C (BmlIsLowResAnalogTvOutput.c)
 */

__int64 __fastcall BmlFillPreferredMonitorMode(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r10
  _DWORD *v4; // rdi
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  _DWORD *v8; // rdx
  int v9; // r12d
  unsigned int v10; // ebx
  int NextFrequencyRange; // eax
  int v12; // esi
  unsigned __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v15; // rcx
  int NextMonitorSourceMode; // eax
  int MonitorModePreference; // eax
  unsigned int v18; // eax
  bool v19; // cf
  unsigned int v20; // eax
  unsigned int v21; // r11d
  unsigned int v22; // r10d
  __int64 v23; // rdx
  unsigned int v25; // eax
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned int v29; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-30h]
  _DWORD *v31; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v32; // [rsp+38h] [rbp-20h] BYREF
  __int64 v33; // [rsp+40h] [rbp-18h]
  __int64 v34; // [rsp+48h] [rbp-10h] BYREF
  char v37; // [rsp+B0h] [rbp+58h]
  int v38; // [rsp+B8h] [rbp+60h]

  v3 = *(_QWORD *)(a3 + 112);
  v4 = 0LL;
  v32 = 0LL;
  v30 = 0LL;
  v6 = 0;
  v7 = 0;
  if ( !v3 )
    return 3223192376LL;
  v8 = 0LL;
  v38 = 0;
  v31 = 0LL;
  v9 = -1;
  v37 = 0;
  while ( 1 )
  {
    v10 = v6;
    if ( !v3 )
    {
      v12 = -1071774920;
      v3 = 0LL;
LABEL_62:
      v28 = v3;
LABEL_63:
      WdLogSingleEntry3(2LL, v4, v28, v12);
      return (unsigned int)v12;
    }
    NextFrequencyRange = MonitorGetNextFrequencyRange(v3, v8, &v31);
    v3 = *(_QWORD *)(a3 + 112);
    v12 = NextFrequencyRange;
    if ( NextFrequencyRange == 1075708748 )
      break;
    if ( NextFrequencyRange < 0 )
    {
      v4 = v31;
      goto LABEL_62;
    }
    v8 = v31;
    if ( v31[9] == 1 )
    {
      v25 = v31[10];
      if ( v6 < v25 )
        v6 = v31[10];
      LODWORD(v33) = v6;
      v6 = v25;
      if ( v10 >= v25 )
        v6 = v10;
      if ( v7 < v31[11] )
        v7 = v31[11];
    }
  }
  v13 = v30;
  v14 = 0LL;
  v34 = 0LL;
  v29 = 0;
  while ( 1 )
  {
    v15 = *(_QWORD *)(a3 + 112);
    LODWORD(v31) = v7;
    LODWORD(v30) = v6;
    if ( !v15 )
    {
      v12 = -1071774920;
      goto LABEL_60;
    }
    NextMonitorSourceMode = MonitorGetNextMonitorSourceMode(v15, v14, &v34, &v29);
    v12 = NextMonitorSourceMode;
    if ( NextMonitorSourceMode == 1075708748 )
      break;
    if ( NextMonitorSourceMode < 0 )
    {
      v4 = (_DWORD *)v34;
LABEL_60:
      v28 = *(_QWORD *)(a3 + 112);
      goto LABEL_63;
    }
    v14 = v34;
    if ( *(_DWORD *)(v34 + 88) == 1 && *(_DWORD *)(v34 + 84) == 5 )
    {
      ++v38;
      v13 = *(_QWORD *)(v34 + 20);
    }
    MonitorModePreference = BmlGetMonitorModePreference(v34, v29, a3);
    if ( MonitorModePreference == 11 )
    {
      v37 = 1;
      MonitorModePreference = 0;
    }
    if ( MonitorModePreference > v9 )
    {
      v9 = MonitorModePreference;
      v32 = *(_QWORD *)(v14 + 20);
    }
    v18 = *(_DWORD *)(v14 + 20);
    if ( v6 < v18 )
      v6 = *(_DWORD *)(v14 + 20);
    v19 = (unsigned int)v30 < v18;
    LODWORD(v33) = v6;
    v6 = v18;
    v20 = *(_DWORD *)(v14 + 24);
    if ( !v19 )
      v6 = v30;
    if ( v7 < v20 )
      v7 = *(_DWORD *)(v14 + 24);
    HIDWORD(v33) = v7;
    v7 = v20;
    if ( (unsigned int)v31 >= v20 )
      v7 = (unsigned int)v31;
  }
  if ( v38 == 1 && (v37 || (unsigned __int8)BmlIsEDIDCapableOutputTechonology(a3) && v9 >= 8) )
  {
    v9 = 11;
    v32 = v13;
  }
  if ( (unsigned __int8)BmlIsLowResAnalogTvOutput(a3) )
  {
    if ( v6 < 0x400 )
      v6 = 1024;
    if ( v7 < 0x300 )
      v7 = 768;
    v26 = BmlCompareModeExtents(&qword_1C0099FB0, &v32);
    v27 = v32;
    if ( v26 == 1 )
      v27 = 0x30000000400LL;
    v32 = v27;
  }
  if ( v9 < 8 )
  {
    if ( (unsigned __int8)BmlIsLowResAnalogTvOutput(a3) )
    {
      v22 = 800;
      v21 = 600;
    }
    v32 = __PAIR64__(v21, v22);
  }
  else
  {
    v21 = HIDWORD(v32);
    v22 = v32;
  }
  if ( v6 < v22 )
    v6 = v22;
  LODWORD(v33) = v6;
  if ( v7 < v21 )
    v7 = v21;
  v23 = 120LL * a2;
  HIDWORD(v33) = v7;
  *(_QWORD *)(v23 + a1 + 52) = v32;
  *(_QWORD *)(v23 + a1 + 44) = v33;
  return 1075708748LL;
}
