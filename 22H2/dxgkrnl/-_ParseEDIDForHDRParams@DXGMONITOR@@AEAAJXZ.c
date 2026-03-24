/*
 * XREFs of ?_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C0180F08
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C018156C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?EDID_V1_GetDolbyVisionCaps@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z @ 0x1C0021E20 (-EDID_V1_GetDolbyVisionCaps@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z.c)
 *     ?EDID_V1_GetHDRCaps@@YAJKPEBEPEAUDISPLAY_HDR_CAPS@@@Z @ 0x1C0021F24 (-EDID_V1_GetHDRCaps@@YAJKPEBEPEAUDISPLAY_HDR_CAPS@@@Z.c)
 *     ?EDID_V1_GetColorDataRaw@@YAJKPEBEPEAUDISPLAY_COLOR_DATA_RAW@@@Z @ 0x1C0021FEC (-EDID_V1_GetColorDataRaw@@YAJKPEBEPEAUDISPLAY_COLOR_DATA_RAW@@@Z.c)
 *     ?EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z @ 0x1C002212C (-EDID_V1_GetColorimetryData@@YAJKPEBEPEAUDISPLAY_COLORIMETRY_DATA@@@Z.c)
 *     ?EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C00221F8 (-EDID_V1_GetColorDepths@@YAJKPEBEPEAUDISPLAY_COLOR_DEPTHS@@@Z.c)
 *     Feature_DolbyVision_Default_On__private_ReportDeviceUsage @ 0x1C0028938 (Feature_DolbyVision_Default_On__private_ReportDeviceUsage.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z @ 0x1C0169BBC (-_GetContiguousEDID@DXGMONITOR@@QEAAXIPEAIPEAE@Z.c)
 *     ?_GetFinalMaxLuminanceValueFromRaw@DXGMONITOR@@AEAAKK@Z @ 0x1C02FA550 (-_GetFinalMaxLuminanceValueFromRaw@DXGMONITOR@@AEAAKK@Z.c)
 *     ?_GetFinalMinLuminanceValueFromRaw@DXGMONITOR@@AEAAKKK@Z @ 0x1C02FA5A0 (-_GetFinalMinLuminanceValueFromRaw@DXGMONITOR@@AEAAKKK@Z.c)
 *     ?_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ @ 0x1C02FB9C0 (-_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall DXGMONITOR::_ParseEDIDForHDRParams(DXGMONITOR *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  int v5; // r14d
  __int64 v6; // rax
  unsigned __int8 *v7; // rdi
  unsigned int v8; // esi
  unsigned int v9; // r14d
  unsigned __int8 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  _OWORD *v16; // r14
  __int64 v17; // rax
  int ColorDepths; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r15
  __int64 v23; // rax
  int ColorimetryData; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r15
  __int64 v28; // rax
  int ColorDataRaw; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r14
  __int64 v34; // rax
  int HDRCaps; // eax
  __int64 v36; // rdx
  DXGMONITOR *v37; // rcx
  char v38; // r15
  __int64 v39; // r14
  unsigned int FinalMaxLuminanceValueFromRaw; // eax
  unsigned int v41; // edx
  DXGMONITOR *v42; // rcx
  unsigned int FinalMinLuminanceValueFromRaw; // eax
  unsigned int v44; // edx
  DXGMONITOR *v45; // rcx
  unsigned int v46; // eax
  int v47; // r9d
  int v48; // r8d
  __int64 v49; // rax
  int v50; // ecx
  double v51; // xmm1_8
  double v52; // xmm0_8
  int v53; // eax
  double v54; // xmm0_8
  int v55; // eax
  double v56; // xmm0_8
  int v57; // eax
  double v58; // xmm1_8
  int v59; // eax
  double v60; // xmm0_8
  int v61; // eax
  double v62; // xmm0_8
  int v63; // ecx
  double v64; // xmm0_8
  double v65; // xmm0_8
  double v66; // xmm1_8
  int v67; // eax
  double v68; // xmm0_8
  int v69; // eax
  double v70; // xmm0_8
  int v71; // eax
  double v72; // xmm1_8
  int v73; // eax
  double v74; // xmm0_8
  int v75; // eax
  double v76; // xmm1_8
  int v77; // eax
  double v78; // xmm0_8
  __int128 v80; // [rsp+28h] [rbp-39h] BYREF
  __int128 v81; // [rsp+38h] [rbp-29h]
  double v82[10]; // [rsp+48h] [rbp-19h] BYREF
  __int64 v83; // [rsp+C8h] [rbp+67h] BYREF

  if ( !*((_QWORD *)this + 18) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = *((_DWORD *)this + 32);
  if ( !v5 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v6);
    v5 = *((_DWORD *)this + 32);
  }
  LODWORD(v83) = 0;
  v7 = 0LL;
  v8 = 0;
  if ( v5 )
  {
    v9 = v5 << 7;
    v10 = (unsigned __int8 *)operator new[](v9, 0x4D677844u, PagedPool);
    v7 = v10;
    if ( v10 )
    {
      DXGMONITOR::_GetContiguousEDID(this, v9, (unsigned int *)&v83, v10);
      v8 = v83;
      if ( v9 != (_DWORD)v83 )
      {
        v14 = WdLogNewEntry5_WdAssertion(this, a2);
        WdLogEvent5_WdAssertion(v14);
      }
    }
    else
    {
      v15 = WdLogNewEntry5_WdWarning(v12, v11, v13);
      WdLogEvent5_WdWarning(v15);
    }
  }
  v16 = (_OWORD *)((char *)this + 600);
  if ( v8 )
  {
    ColorDepths = EDID_V1_GetColorDepths(v8, v7, (DXGMONITOR *)((char *)this + 600));
    v22 = ColorDepths;
    if ( ColorDepths < 0 )
    {
      v23 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      *(_QWORD *)(v23 + 24) = v22;
      *(_QWORD *)(v23 + 32) = *((unsigned int *)this + 11);
      WdLogEvent5_WdWarning(v23);
      *v16 = 0LL;
      *((_DWORD *)this + 154) = 0;
    }
    ColorimetryData = EDID_V1_GetColorimetryData(v8, v7, (DXGMONITOR *)((char *)this + 620));
    v27 = ColorimetryData;
    if ( ColorimetryData < 0 )
    {
      v28 = WdLogNewEntry5_WdTrace(v26, v25);
      *(_QWORD *)(v28 + 24) = v27;
      *(_QWORD *)(v28 + 32) = *((unsigned int *)this + 11);
      *(_QWORD *)((char *)this + 620) = 0LL;
    }
    if ( *((_DWORD *)this + 165) != 2 )
    {
      v80 = 0LL;
      v81 = 0LL;
      ColorDataRaw = EDID_V1_GetColorDataRaw(v8, v7, (struct DISPLAY_COLOR_DATA_RAW *)&v80);
      v33 = ColorDataRaw;
      if ( ColorDataRaw < 0 )
      {
        v34 = WdLogNewEntry5_WdWarning(v31, v30, v32);
        *(_QWORD *)(v34 + 24) = v33;
        *(_QWORD *)(v34 + 32) = *((unsigned int *)this + 11);
        WdLogEvent5_WdWarning(v34);
        *(_OWORD *)((char *)this + 628) = 0LL;
        *(_OWORD *)((char *)this + 644) = 0LL;
      }
      else
      {
        *(_OWORD *)((char *)this + 628) = v80;
        *(_OWORD *)((char *)this + 644) = v81;
        *((_DWORD *)this + 165) = 1;
      }
    }
    v83 = 0LL;
    HDRCaps = EDID_V1_GetHDRCaps(v8, v7, (struct DISPLAY_HDR_CAPS *)&v83);
    v38 = BYTE2(v83);
    v39 = HDRCaps;
    if ( HDRCaps < 0 )
    {
      v49 = WdLogNewEntry5_WdTrace(v37, v36);
      *(_QWORD *)(v49 + 24) = v39;
      *(_QWORD *)(v49 + 32) = *((unsigned int *)this + 11);
      *((_QWORD *)this + 83) = 0LL;
      *((_QWORD *)this + 84) = 0LL;
      *((_QWORD *)this + 85) = 0LL;
      *((_BYTE *)this + 700) = 0;
    }
    else
    {
      if ( !*((_DWORD *)this + 167) )
      {
        FinalMaxLuminanceValueFromRaw = DXGMONITOR::_GetFinalMaxLuminanceValueFromRaw(v37, BYTE5(v83));
        v41 = HIBYTE(v83);
        *((_DWORD *)this + 167) = FinalMaxLuminanceValueFromRaw;
        FinalMinLuminanceValueFromRaw = DXGMONITOR::_GetFinalMinLuminanceValueFromRaw(
                                          v42,
                                          v41,
                                          FinalMaxLuminanceValueFromRaw);
        v44 = BYTE6(v83);
        *((_DWORD *)this + 166) = FinalMinLuminanceValueFromRaw;
        v46 = DXGMONITOR::_GetFinalMaxLuminanceValueFromRaw(v45, v44);
        *((_DWORD *)this + 168) = v46;
        *((_DWORD *)this + 171) = v46;
        *((_DWORD *)this + 170) = v47;
        *((_DWORD *)this + 169) = v48;
        *((_BYTE *)this + 692) = 0;
        *((_DWORD *)this + 174) = 1;
      }
      *((_BYTE *)this + 700) = v38;
    }
    memset(v82, 0, sizeof(v82));
    if ( (int)EDID_V1_GetDolbyVisionCaps(v8, v7, (struct DISPLAY_DVLL_CAPS *)v82) >= 0 )
    {
      v50 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL) + 348LL);
      if ( (v50 & 0x200) != 0 || !LOBYTE(v82[9]) )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL) + 348LL) & 0x200) != 0
          || (v50 & 8) != 0 )
        {
          v65 = v82[1] * 10000.0;
          v66 = v82[3] * 1024.0;
          *((_BYTE *)this + 702) = LOBYTE(v82[0]) != 0;
          v67 = (int)v65;
          v68 = v82[2] * 10000.0;
          *((_DWORD *)this + 184) = v67;
          v69 = (int)v68;
          v70 = v82[4];
          *((_DWORD *)this + 185) = v69;
          v71 = (int)(v66 + 0.5);
          v72 = v82[5];
          *((_DWORD *)this + 176) = v71;
          v73 = (int)(v70 * 1024.0 + 0.5);
          v74 = v82[6];
          *((_DWORD *)this + 177) = v73;
          v75 = (int)(v72 * 1024.0 + 0.5);
          v76 = v82[7];
          *((_DWORD *)this + 178) = v75;
          v77 = (int)(v74 * 1024.0 + 0.5);
          v78 = v82[8];
          *((_DWORD *)this + 179) = v77;
          *((_DWORD *)this + 180) = (int)(v76 * 1024.0 + 0.5);
          *((_DWORD *)this + 181) = (int)(v78 * 1024.0 + 0.5);
          *((_DWORD *)this + 182) = *((_DWORD *)this + 163);
          *((_DWORD *)this + 183) = *((_DWORD *)this + 164);
        }
      }
      else
      {
        Feature_DolbyVision_Default_On__private_ReportDeviceUsage();
        v51 = v82[5];
        v52 = v82[3] * 1024.0;
        *((_DWORD *)this + 165) = 1;
        *((_BYTE *)this + 692) = 0;
        *((_DWORD *)this + 174) = 1;
        *((_BYTE *)this + 703) = 1;
        *((_BYTE *)this + 700) = v38;
        *((_BYTE *)this + 796) = 1;
        *((_DWORD *)this + 192) = 964069926;
        *((_DWORD *)this + 193) = -1686232824;
        v53 = (int)(v52 + 0.5);
        *((_DWORD *)this + 194) = 138811898;
        *((_DWORD *)this + 195) = 1076903406;
        *((_QWORD *)this + 98) = 1000LL;
        *((_DWORD *)this + 198) = 61473790;
        v54 = v82[4] * 1024.0;
        *((_DWORD *)this + 157) = v53;
        v55 = (int)(v54 + 0.5);
        v56 = v82[6] * 1024.0;
        *((_DWORD *)this + 158) = v55;
        v57 = (int)(v51 * 1024.0 + 0.5);
        v58 = v82[7];
        *((_DWORD *)this + 159) = v57;
        v59 = (int)(v56 + 0.5);
        v60 = v82[8] * 1024.0;
        *((_DWORD *)this + 160) = v59;
        *((_DWORD *)this + 161) = (int)(v58 * 1024.0 + 0.5);
        v61 = (int)(v60 + 0.5);
        v62 = v82[2] * 10000.0;
        *((_DWORD *)this + 162) = v61;
        v63 = (int)v62;
        v64 = v82[1] * 10000.0;
        *((_DWORD *)this + 167) = v63;
        *((_DWORD *)this + 168) = v63;
        *((_DWORD *)this + 170) = v63;
        *((_DWORD *)this + 171) = v63;
        *((_DWORD *)this + 166) = (int)v64;
        *((_DWORD *)this + 169) = (int)v64;
      }
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v17 + 24) = *((unsigned int *)this + 11);
    WdLogEvent5_WdWarning(v17);
    *(_QWORD *)((char *)this + 620) = 0LL;
    *v16 = 0LL;
    *((_DWORD *)this + 154) = 0;
    DXGMONITOR::_SetColorPrimariesToBT709(this);
    *((_BYTE *)this + 692) = 0;
    *((_DWORD *)this + 167) = 2700000;
    *((_DWORD *)this + 166) = 5000;
    *((_DWORD *)this + 168) = 2700000;
    *((_DWORD *)this + 170) = 2700000;
    *((_DWORD *)this + 169) = 5000;
    *((_DWORD *)this + 171) = 2700000;
    *((_DWORD *)this + 174) = 3;
    *((_BYTE *)this + 700) = 0;
  }
  if ( v7 )
    operator delete[](v7);
  return 0LL;
}
