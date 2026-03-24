/*
 * XREFs of ?BmlPickColorSpaceAndWireFormat@@YAJPEBUBML_VIDPN_PATH_ORDER@@W4DXGK_DIAG_CCD_BML_ORIGIN@@PEAVDMMVIDPN@@@Z @ 0x1C014273C
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C0142488 (_BmlGetPathModalityForAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00074F0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0009724 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000A974 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     BmlDoesTargetModeSupportWireFormat @ 0x1C00E5B8C (BmlDoesTargetModeSupportWireFormat.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C01355E8 (MonitorIsMonitorAndLinkHDRCapable.c)
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C01391D0 (MonitorIsMonitorAndDriverWCGCapable.c)
 *     MonitorGetDitheringCaps @ 0x1C0142974 (MonitorGetDitheringCaps.c)
 *     MonitorIsAdvancedColorEnabled @ 0x1C0142BD8 (MonitorIsAdvancedColorEnabled.c)
 *     ?PickWireFormatWithPreference@@YAJW4BML_WIREFORMAT_PREFERENCE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@11@Z @ 0x1C01620A8 (-PickWireFormatWithPreference@@YAJW4BML_WIREFORMAT_PREFERENCE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREF.c)
 *     ?IsHDRSourceModeAvailableForPinnedSourceMode@@YA_NPEBVDXGADAPTER@@PEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C02ECAD8 (-IsHDRSourceModeAvailableForPinnedSourceMode@@YA_NPEBVDXGADAPTER@@PEBVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?ModeSupportsHighDepthColorFormat@@YA_NPEAVDMMVIDPNTARGETMODE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C02ECBB8 (-ModeSupportsHighDepthColorFormat@@YA_NPEAVDMMVIDPNTARGETMODE@@PEAT_D3DKMDT_WIRE_FORMAT_AND_PREF.c)
 */

__int64 __fastcall BmlPickColorSpaceAndWireFormat(unsigned __int8 *a1, int a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r13
  DMMVIDPNTOPOLOGY *i; // rcx
  __int64 v7; // r12
  __int64 v8; // r15
  struct DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DMMVIDPNPRESENTPATH *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DMMVIDPNTARGETMODE *v15; // rax
  __int64 v16; // rax
  int IsMonitorAndLinkHDRCapable; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  char v21; // di
  __int64 v22; // rax
  int IsAdvancedColorEnabled; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  char v27; // r13
  __int64 v28; // rax
  int IsMonitorAndDriverWCGCapable; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rax
  int DitheringCaps; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rbx
  struct DMMVIDPNTARGETMODE *v38; // rbx
  __int64 v39; // rcx
  bool v40; // zf
  unsigned int v41; // ebx
  int v42; // r14d
  struct DMMVIDPNTARGETMODE *v43; // rcx
  unsigned int v44; // eax
  _BOOL8 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  unsigned int v50; // eax
  __int64 v51; // rax
  _QWORD *v52; // rax
  _QWORD *v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rdx
  _QWORD *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  unsigned int v65; // ebx
  __int64 v66; // rdx
  int v67; // ecx
  bool v68; // al
  unsigned int v69; // ebx
  __int64 v70; // rdi
  char v71; // r14
  __int64 v72; // rax
  const struct DMMVIDPNSOURCEMODESET *v73; // rdi
  __int64 v74; // r15
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // rax
  int v81; // ecx
  __int64 v82; // rax
  __int64 v83; // rax
  _QWORD *v84; // rax
  unsigned int v85; // [rsp+20h] [rbp-48h] BYREF
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v86; // [rsp+24h] [rbp-44h] BYREF
  unsigned int v87; // [rsp+28h] [rbp-40h] BYREF
  int v88; // [rsp+2Ch] [rbp-3Ch] BYREF
  unsigned int v89; // [rsp+30h] [rbp-38h]
  struct DMMVIDPNTARGETMODE *v90; // [rsp+38h] [rbp-30h]
  __int64 v91; // [rsp+40h] [rbp-28h] BYREF
  struct DMMVIDPNPRESENTPATH *v92; // [rsp+48h] [rbp-20h]
  const struct DMMVIDPNSOURCEMODESET *v93; // [rsp+50h] [rbp-18h] BYREF
  char v94; // [rsp+B0h] [rbp+48h] BYREF
  int v95; // [rsp+B8h] [rbp+50h]
  __int64 v96; // [rsp+C0h] [rbp+58h]
  char v97; // [rsp+C8h] [rbp+60h] BYREF

  v96 = a3;
  v95 = a2;
  v3 = 0;
  v4 = a3;
  v89 = 0;
  if ( !*a1 )
    return 0LL;
  for ( i = (DMMVIDPNTOPOLOGY *)(a3 + 96); ; i = (DMMVIDPNTOPOLOGY *)(v4 + 96) )
  {
    v7 = v3;
    v8 = 104LL * v3;
    Path = DMMVIDPNTOPOLOGY::FindPath(
             i,
             *(_DWORD *)(*(_QWORD *)&a1[v8 + 16] + 24LL),
             *(_DWORD *)(*(_QWORD *)&a1[v8 + 16] + 28LL));
    v92 = Path;
    v12 = Path;
    if ( !Path )
      break;
    v13 = *((_QWORD *)Path + 12);
    v14 = *(_QWORD *)(v13 + 104);
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 96));
      v14 = *(_QWORD *)(v13 + 104);
    }
    v15 = *(struct DMMVIDPNTARGETMODE **)(v14 + 144);
    v91 = v14;
    v90 = v15;
    if ( !v15 )
    {
      v83 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v83 + 24) = *(unsigned int *)(*(_QWORD *)&a1[104 * v3 + 16] + 28LL);
      *(_QWORD *)(v83 + 32) = v4;
      WdLogEvent5_WdError(v83);
      v65 = -1071774967;
      goto LABEL_74;
    }
    v16 = *((_QWORD *)v12 + 12);
    v87 = 0;
    IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(
                                   *(struct HDXGMONITOR__ **)(*(_QWORD *)(v16 + 96) + 112LL),
                                   &v87);
    v20 = IsMonitorAndLinkHDRCapable;
    if ( IsMonitorAndLinkHDRCapable < 0 )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
      v52[3] = *(unsigned int *)(*(_QWORD *)&a1[v8 + 16] + 28LL);
      v52[4] = v4;
      v52[5] = v20;
      WdLogEvent5_WdError(v52);
      v21 = 0;
      v87 = 0;
    }
    else
    {
      v21 = v87;
    }
    v22 = *((_QWORD *)v12 + 12);
    v94 = 0;
    IsAdvancedColorEnabled = MonitorIsAdvancedColorEnabled(*(_QWORD *)(*(_QWORD *)(v22 + 96) + 112LL), &v94);
    v26 = IsAdvancedColorEnabled;
    if ( IsAdvancedColorEnabled < 0 )
    {
      v53 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
      v53[3] = *(unsigned int *)(*(_QWORD *)&a1[v8 + 16] + 28LL);
      v53[4] = v4;
      v53[5] = v26;
      WdLogEvent5_WdError(v53);
      v27 = 0;
      v94 = 0;
    }
    else
    {
      v27 = v94;
    }
    v28 = *((_QWORD *)v12 + 12);
    v97 = 0;
    IsMonitorAndDriverWCGCapable = MonitorIsMonitorAndDriverWCGCapable(
                                     *(struct HDXGMONITOR__ **)(*(_QWORD *)(v28 + 96) + 112LL),
                                     &v97);
    v32 = IsMonitorAndDriverWCGCapable;
    if ( IsMonitorAndDriverWCGCapable < 0 )
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
      v55 = *(unsigned int *)(*(_QWORD *)&a1[v8 + 16] + 28LL);
      v54[4] = v96;
      v54[3] = v55;
      v54[5] = v32;
      WdLogEvent5_WdError(v54);
      v97 = 0;
    }
    v33 = *((_QWORD *)v12 + 12);
    v86.Value = 0;
    DitheringCaps = MonitorGetDitheringCaps(*(_QWORD *)(*(_QWORD *)(v33 + 96) + 112LL), &v86);
    v37 = DitheringCaps;
    if ( DitheringCaps < 0 )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdError(v36, v35);
      v57 = *(unsigned int *)(*(_QWORD *)&a1[v8 + 16] + 28LL);
      v56[4] = v96;
      v56[3] = v57;
      v56[5] = v37;
      WdLogEvent5_WdError(v56);
      v86.Value = 0;
    }
    v38 = v90;
    v39 = *(_QWORD *)&a1[v8 + 16];
    v85 = 0;
    v40 = (*(_BYTE *)v39 & 8) == 0;
    v88 = *((_DWORD *)v90 + 32);
    if ( !v40 )
    {
      v41 = *(_DWORD *)(v39 + 204);
      v42 = *(_DWORD *)(v39 + 208);
      if ( BmlDoesTargetModeSupportWireFormat((__int64)v90, v41) )
      {
        v85 = v41;
        if ( (unsigned int)(v42 - 31) <= 2 && !*((_BYTE *)DXGGLOBAL::GetGlobal(v39, v35) + 304320) )
        {
          v60 = *(_QWORD *)(v96 + 48);
          v61 = *(_QWORD *)(v60 + 8);
          if ( !v61 )
          {
            v62 = WdLogNewEntry5_WdAssertion(v59, v58);
            WdLogEvent5_WdAssertion(v62);
            v61 = *(_QWORD *)(v60 + 8);
          }
          v63 = *(unsigned int *)(*(_QWORD *)(v61 + 16) + 348LL);
          if ( (v63 & 8) == 0 )
          {
            v64 = WdLogNewEntry5_WdError(v63, v58);
            *(_QWORD *)(v64 + 24) = *(unsigned int *)(*(_QWORD *)&a1[104 * v7 + 16] + 28LL);
            WdLogEvent5_WdError(v64);
            v65 = -1073741811;
LABEL_74:
            auto_rc<DMMVIDPNTARGETMODESET>::reset(&v91, 0LL);
            return v65;
          }
        }
        if ( v42 == 32 && (v21 & 2) == 0 || v42 == 33 && (v21 & 4) == 0 )
        {
          v65 = -1073741637;
          goto LABEL_74;
        }
        goto LABEL_20;
      }
      if ( (*(_BYTE *)(*(_QWORD *)&a1[v8 + 16] + 8LL) & 8) != 0 )
      {
        v82 = WdLogNewEntry5_WdError(v39, v35);
        *(_QWORD *)(v82 + 24) = *(unsigned int *)(*(_QWORD *)&a1[104 * v7 + 16] + 28LL);
        WdLogEvent5_WdError(v82);
        v65 = -1071774902;
        goto LABEL_74;
      }
      v38 = v90;
    }
    if ( !v27 )
      goto LABEL_24;
    if ( (v21 & 1) == 0
      || !*((_BYTE *)DXGGLOBAL::GetGlobal(v39, v35) + 304564)
      || !ModeSupportsHighDepthColorFormat(v38, &v86)
      || (*(_DWORD *)&a1[v8 + 116] & 2) != 0 )
    {
      if ( v97 && ModeSupportsHighDepthColorFormat(v38, &v86) && (*(_DWORD *)&a1[v8 + 116] & 2) == 0 )
      {
        v42 = 30;
        if ( (int)PickWireFormatWithPreference(3LL, &v88, &v86, &v85) < 0 )
        {
          v50 = v85 & 0xFFFFFF03 | 8;
          v42 = 0;
LABEL_28:
          v85 = v50;
          v51 = WdLogNewEntry5_WdWarning(v48, v47, v49);
          WdLogEvent5_WdWarning(v51);
        }
      }
      else
      {
LABEL_24:
        v42 = 0;
        v46 = 1;
        if ( v95 == 2 && (*((_DWORD *)a1 + 1) & 0x8000000) == 0 )
        {
          v81 = *(_DWORD *)(*(_QWORD *)&a1[v8 + 16] + 116LL);
          if ( v81 == 31 || v81 == 35 )
            v46 = 0;
        }
        if ( (int)PickWireFormatWithPreference(v46, &v88, &v86, &v85) < 0 )
        {
          v50 = v85 & 0xFFFFFF03 | 8;
          goto LABEL_28;
        }
      }
LABEL_20:
      v4 = v96;
      goto LABEL_21;
    }
    v68 = 0;
    if ( v95 == 2 && (*((_DWORD *)a1 + 1) & 0x8000000) == 0 )
    {
      v67 = *(_DWORD *)(*(_QWORD *)&a1[v8 + 16] + 116LL);
      if ( v67 != 36 && v67 != 113 )
        v68 = 1;
    }
    v69 = 4 * !v68;
    v70 = *((_QWORD *)v92 + 11);
    v71 = -!v68;
    v72 = *(_QWORD *)(v70 + 104);
    v42 = v71 & 0xC;
    if ( v72 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v72 + 96));
      v73 = *(const struct DMMVIDPNSOURCEMODESET **)(v70 + 104);
    }
    else
    {
      v73 = 0LL;
    }
    v4 = v96;
    v93 = v73;
    v74 = *(_QWORD *)(v96 + 48);
    v75 = *(_QWORD *)(v74 + 8);
    if ( !v75 )
    {
      v76 = WdLogNewEntry5_WdAssertion(0LL, v66);
      WdLogEvent5_WdAssertion(v76);
      v75 = *(_QWORD *)(v74 + 8);
    }
    if ( !IsHDRSourceModeAvailableForPinnedSourceMode(*(const struct DXGADAPTER **)(v75 + 16), v73) )
    {
      v42 = 0;
      v69 = 0;
    }
    if ( (int)PickWireFormatWithPreference(v69, &v88, &v86, &v85) < 0 )
    {
      v85 = v85 & 0xFFFFFF03 | 8;
      v42 = 0;
      v80 = WdLogNewEntry5_WdWarning(v78, v77, v79);
      WdLogEvent5_WdWarning(v80);
    }
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v93, 0LL);
LABEL_21:
    v43 = v90;
    *((_DWORD *)v90 + 33) = v85;
    *((_DWORD *)v43 + 34) = v42;
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v91, 0LL);
    v44 = *a1;
    v3 = v89 + 1;
    v89 = v3;
    if ( v3 >= v44 )
      return 0LL;
  }
  v84 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
  v84[4] = a1;
  v84[3] = v3;
  v84[5] = *(unsigned int *)(*(_QWORD *)&a1[104 * v3 + 16] + 24LL);
  v84[6] = *(unsigned int *)(*(_QWORD *)&a1[104 * v3 + 16] + 28LL);
  v84[7] = v4;
  WdLogEvent5_WdError(v84);
  return 3223192345LL;
}
