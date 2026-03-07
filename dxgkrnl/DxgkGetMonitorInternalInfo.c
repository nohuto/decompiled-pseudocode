__int64 __fastcall DxgkGetMonitorInternalInfo(__int64 a1, unsigned int a2, __int64 a3, unsigned int *a4, __int64 a5)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdi
  int v9; // eax
  int v10; // r15d
  DXGGLOBAL *Global; // rax
  DWORD LowPart; // ebx
  struct DXGADAPTER *v13; // rax
  unsigned __int64 v14; // r14
  struct DXGADAPTER *const v15; // rdx
  DXGADAPTER *v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  MONITOR_MGR *v23; // r12
  int MonitorInstance; // eax
  DXGMONITOR *v25; // rbx
  struct HDXGMONITOR__ *MonitorHandle; // rax
  __int64 v27; // r9
  unsigned int v28; // ebx
  DXGMONITOR **v29; // r12
  unsigned int *v30; // rsi
  _DWORD *v31; // rbx
  char v32; // cl
  unsigned int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // r8
  int CCDMonitorID; // eax
  __int64 v38; // r14
  int AdvancedColorParams; // eax
  bool v40; // zf
  int *v41; // r14
  int v42; // edx
  unsigned int v43; // edx
  int v44; // eax
  int v45; // edx
  struct DXGMONITOR *v46; // rdi
  int LinkInfo; // eax
  int v48; // eax
  int DisplayIDFromMonitor; // eax
  __int64 v50; // rdx
  bool v51; // cf
  int v52; // eax
  unsigned __int64 v53; // rcx
  UINT cy; // eax
  int v55; // eax
  __int64 v56; // r14
  __int64 HighPart; // rbx
  const wchar_t *v58; // r9
  __int64 v59; // r14
  __int64 v60; // r14
  __int64 v61; // rbx
  __int64 v62; // rdi
  __int64 v63; // rsi
  __int64 v64; // rbx
  int v65; // eax
  __int64 v66; // rdi
  __int64 v67; // rsi
  __int64 v68; // rbx
  struct DXGMONITOR *v69; // rbx
  int v70; // eax
  int PreferredMonitorSourceMode; // edi
  char v72; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v73[3]; // [rsp+51h] [rbp-AFh] BYREF
  unsigned int v74; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v75; // [rsp+58h] [rbp-A8h] BYREF
  int v76; // [rsp+5Ch] [rbp-A4h] BYREF
  __int16 v77; // [rsp+60h] [rbp-A0h]
  struct DXGMONITOR *v78; // [rsp+68h] [rbp-98h] BYREF
  struct _LUID v79; // [rsp+70h] [rbp-90h] BYREF
  __int64 v80; // [rsp+78h] [rbp-88h] BYREF
  __int64 v81; // [rsp+80h] [rbp-80h]
  __int64 v82; // [rsp+88h] [rbp-78h]
  unsigned __int64 v83; // [rsp+90h] [rbp-70h] BYREF
  unsigned int *v84; // [rsp+98h] [rbp-68h]
  int v85; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v86; // [rsp+A8h] [rbp-58h]
  char v87; // [rsp+B0h] [rbp-50h]
  struct _DXGK_MONITORLINKINFO v88; // [rsp+B8h] [rbp-48h] BYREF
  _D3DKMDT_MONITOR_SOURCE_MODE v89; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v90; // [rsp+130h] [rbp+30h] BYREF
  int v91; // [rsp+138h] [rbp+38h]
  _BYTE v92[8]; // [rsp+140h] [rbp+40h] BYREF
  char v93[64]; // [rsp+148h] [rbp+48h] BYREF
  char v94[72]; // [rsp+188h] [rbp+88h] BYREF

  v85 = -1;
  LODWORD(v6) = a1;
  v7 = a2;
  v8 = 1LL;
  v84 = a4;
  v74 = a2;
  v80 = a1;
  v82 = a5;
  v86 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v87 = 1;
    v85 = 2186;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2186);
  }
  else
  {
    v87 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v85, 2186);
  v79 = 0LL;
  v75 = 0;
  v9 = DxgkConvertLegacyQDCAdapterAndIdToActual((struct _LUID *)&v80, v7, &v79, &v75);
  v10 = v9;
  if ( v9 < 0 )
  {
    v56 = v7;
    v6 = (unsigned int)v6;
    HighPart = SHIDWORD(v80);
    v8 = v9;
    WdLogSingleEntry4(2LL, SHIDWORD(v80), (unsigned int)v6, v56, v9);
    v58 = L"Failed to get adapter LUID from LUID (0x%I64x%08I64x), target ID 0x%I64x (Status = 0x%I64x).";
LABEL_60:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v58, HighPart, v6, v56, v8, 0LL);
    goto LABEL_29;
  }
  Global = DXGGLOBAL::GetGlobal();
  LowPart = v79.LowPart;
  v13 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v79, &v83);
  v83 = (unsigned __int64)v13;
  v14 = (unsigned __int64)v13;
  if ( !v13 )
  {
    v6 = LowPart;
    v10 = -1073741811;
    HighPart = v79.HighPart;
    WdLogSingleEntry4(2LL, v79.HighPart, (unsigned int)v6, -1073741811LL, 0LL);
    v58 = L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkGetMonitorInternalInfo function, returning 0x%I64x.";
    v8 = 0LL;
LABEL_59:
    v56 = -1073741811LL;
    goto LABEL_60;
  }
  if ( !*((_QWORD *)v13 + 365) )
  {
    DXGADAPTER::ReleaseReference(v13);
    v6 = LowPart;
    v10 = -1073741811;
    HighPart = v79.HighPart;
    WdLogSingleEntry4(2LL, v79.HighPart, (unsigned int)v6, -1073741811LL, 1LL);
    v58 = L"Caller specified adapter 0x%I64x%08I64x is not a display adapter, returning 0x%I64x";
    goto LABEL_59;
  }
  v92[1] = 0;
  COREACCESS::COREACCESS((COREACCESS *)v93, v13);
  COREACCESS::COREACCESS((COREACCESS *)v94, v15);
  DXGADAPTER::ReleaseReference(v16);
  v17 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v92, 0LL);
  v10 = v17;
  if ( v17 >= 0 )
  {
    v22 = WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
    *(_QWORD *)(v22 + 24) = v75;
    *(_QWORD *)(v22 + 32) = v14;
    if ( v75 != -1 )
    {
      if ( !*(_QWORD *)(v14 + 2920) )
        WdLogSingleEntry0(1LL);
      v23 = *(MONITOR_MGR **)(*(_QWORD *)(v14 + 2920) + 112LL);
      if ( v23 )
      {
        v78 = 0LL;
        MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v23, v75, 0, &v78);
        v76 = MonitorInstance;
        if ( MonitorInstance == -1073741275 )
        {
          WdLogSingleEntry2(7LL, v75, v23);
          v10 = -1073741275;
        }
        else
        {
          if ( MonitorInstance >= 0 )
          {
            v25 = v78;
            if ( !v78 )
              WdLogSingleEntry0(1LL);
            DXGMONITOR::_AddReference(v25, DxgkGetMonitorInternalInfo);
            MonitorHandle = MONITOR_MGR::_GetMonitorHandle(v25);
            v28 = 0;
            v29 = (DXGMONITOR **)MonitorHandle;
            if ( !MonitorHandle )
            {
              WdLogSingleEntry1(1LL, 7485LL);
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"MonitorHandle != NULL", 7485LL, 0LL, 0LL, 0LL, 0LL);
              v28 = 0;
            }
            if ( !a3 )
            {
              v30 = v84;
              if ( !v84 )
              {
                v31 = (_DWORD *)v82;
                if ( !v82 )
                {
LABEL_25:
                  if ( (int)MonitorReleaseMonitorHandle(v14, (__int64)v29, DxgkGetMonitorInternalInfo, v27) < 0 )
                  {
                    WdLogSingleEntry1(1LL, 7650LL);
                    DxgkLogInternalTriageEvent(
                      0LL,
                      262146,
                      -1,
                      (__int64)L"NT_SUCCESS(Status2)",
                      7650LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL);
                  }
                  v10 = 0;
                  goto LABEL_28;
                }
LABEL_20:
                v75 = 0;
                v74 = 0;
                MonitorGetMonitorOrientationsFromMonitor((__int64)v29, &v75, &v74);
                v32 = v75;
                v33 = v74;
                if ( v30 && v31 )
                {
                  *v30 = v75;
                  *v31 = v33;
                }
                if ( a3 )
                  *(_DWORD *)(a3 + 932) = (((_BYTE)v33 - v32) & 3) + 1;
                goto LABEL_25;
              }
LABEL_19:
              v31 = (_DWORD *)v82;
              goto LABEL_20;
            }
            CCDMonitorID = MonitorGetCCDMonitorID(v29, 0x104u, (unsigned __int16 *)(a3 + 20));
            v38 = v74;
            v81 = v74;
            if ( CCDMonitorID < 0 )
            {
              v60 = SHIDWORD(v80);
              v61 = CCDMonitorID;
              WdLogSingleEntry4(2LL, SHIDWORD(v80), (unsigned int)v6, v81, CCDMonitorID);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to get monitor CCD name from adapter 0x%I64x%08I64x target 0x%I64x (Status = 0x%I64x).",
                v60,
                (unsigned int)v6,
                v81,
                v61,
                0LL);
              v38 = v81;
              v28 = 0;
            }
            LOWORD(v74) = 0;
            v76 = 0;
            v77 = 0;
            memset(&v89, 0, 48);
            AdvancedColorParams = MonitorGetAdvancedColorParams((__int64)v29, &v74, (__int64)&v89, (__int64)&v76);
            if ( AdvancedColorParams < 0 )
            {
              v62 = (unsigned int)v6;
              v63 = SHIDWORD(v80);
              v64 = AdvancedColorParams;
              WdLogSingleEntry4(2LL, SHIDWORD(v80), (unsigned int)v62, v38, AdvancedColorParams);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to get monitor HDR caps for adapter 0x%I64x%08I64x target 0x%I64x (Status = 0x%I64x).",
                v63,
                v62,
                v38,
                v64,
                0LL);
              v41 = (int *)(a3 + 588);
            }
            else
            {
              v40 = (_BYTE)v76 == 0;
              v41 = (int *)(a3 + 588);
              v42 = *(_DWORD *)(a3 + 588);
              *(_DWORD *)(a3 + 540) = v89.Id;
              *(_DWORD *)(a3 + 544) = *(&v89.Id + 1);
              *(_DWORD *)(a3 + 548) = v89.VideoSignalInfo.VideoStandard;
              *(D3DKMDT_2DREGION *)(a3 + 552) = v89.VideoSignalInfo.TotalSize;
              *(D3DKMDT_2DREGION *)(a3 + 560) = v89.VideoSignalInfo.ActiveSize;
              *(D3DDDI_RATIONAL *)(a3 + 568) = v89.VideoSignalInfo.VSyncFreq;
              *(D3DDDI_RATIONAL *)(a3 + 576) = v89.VideoSignalInfo.HSyncFreq;
              v43 = ((_BYTE)v77 != 0 ? 2 : 0) | !v40 | v42 & 0xFFFFFFFC;
              v44 = v43 ^ ((unsigned __int16)v43 ^ (unsigned __int16)(HIBYTE(v77) << 9)) & 0x200;
              v45 = *(_DWORD *)(a3 + 584);
              *(_DWORD *)(a3 + 588) = v44;
              *(_DWORD *)(a3 + 584) = (HIBYTE(v76) != 0 ? 4 : 0) | (BYTE2(v76) != 0 ? 2 : 0) | v45 & 0xFFFFFFF9;
              if ( v29 )
              {
                v74 = 0;
                MONITOR_MGR::AcquireMonitorShared(&v78, (__int64)v29);
                v46 = v78;
                if ( v78 )
                {
                  *(_QWORD *)&v88.UsageHints.0 = 0LL;
                  v88.DitheringSupport.Value = 0;
                  LinkInfo = DXGMONITOR::_GetLinkInfo(v78, &v88);
                  v76 = LinkInfo;
                  if ( LinkInfo == -1073741275 )
                  {
                    RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)&v78);
                    goto LABEL_39;
                  }
                  if ( LinkInfo >= 0 )
                  {
                    DxgMonitor::MonitorColorState::GetMonitorAndLinkHdrCapable(
                      *((DxgMonitor::MonitorColorState **)v46 + 28),
                      &v88,
                      (union MONITOR_AND_LINK_HDR_CAPS *)&v74);
                    ExReleaseResourceLite((PERESOURCE)((char *)v46 + 24));
                    KeLeaveCriticalRegion();
                    v28 = v74;
LABEL_39:
                    v48 = *v41 ^ (*v41 ^ (2 * v28)) & 4;
                    *v41 = v48 ^ ((unsigned __int8)v48 ^ (unsigned __int8)(16 * v28)) & 0x40;
                    goto LABEL_40;
                  }
                  RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)&v78);
                  v65 = v76;
                }
                else
                {
                  WdLogSingleEntry1(2LL, -1073741275LL);
                  RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)&v78);
                  v65 = -1073741275;
                }
              }
              else
              {
                v65 = -1073741811;
              }
              v66 = (unsigned int)v6;
              v67 = SHIDWORD(v80);
              v68 = v65;
              WdLogSingleEntry4(2LL, SHIDWORD(v80), (unsigned int)v66, v81, v65);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to get monitor HDR caps for adapter 0x%I64x%08I64x target 0x%I64x (Status = 0x%I64x).",
                v67,
                v66,
                v81,
                v68,
                0LL);
            }
LABEL_40:
            if ( (int)MonitorGetDisplayHdrSupportLevel(v29, a3 + 936) < 0 )
              *(_DWORD *)(a3 + 936) = 0;
            v72 = 0;
            v73[0] = 0;
            LOBYTE(v74) = 0;
            if ( (int)MonitorGetNativeFlags(v29, &v72, v73, &v74) >= 0 )
              *v41 = (v72 != 0 ? 8 : 0) | *v41 & 0xFFFFFFF7;
            v72 = 1;
            if ( (int)MonitorIsMonitorEdidless(v29, &v72) >= 0 )
              *v41 = (v72 == 0 ? 0x10 : 0) | *v41 & 0xFFFFFFEF;
            v79.LowPart = 0;
            DisplayIDFromMonitor = MonitorGetDisplayIDFromMonitor(v29, 0LL, &v79, 0LL);
            v50 = v75;
            *(_DWORD *)(a3 + 924) = 0;
            v51 = DisplayIDFromMonitor != -1071841279;
            v72 = 0;
            v52 = *v41;
            LOBYTE(v74) = 0;
            v90 = 0LL;
            v91 = 0;
            v53 = v83;
            *v41 = (v51 ? 0x20 : 0) | v52 & 0xFFFFFFDF;
            *(_DWORD *)(a3 + 928) = 0;
            if ( (int)MonitorGetDpiInfoFromDescriptor(
                        v53,
                        v50,
                        (struct DISPLAY_PREFERRED_MODE_INFO *)&v90,
                        (unsigned int *)(a3 + 924),
                        (unsigned int *)(a3 + 928),
                        (bool *)&v72,
                        (bool *)&v74) >= 0
              && v72 )
            {
              *(_DWORD *)(a3 + 916) = v90;
              cy = HIDWORD(v90);
            }
            else
            {
              memset(&v89, 0, sizeof(v89));
              if ( v29 )
              {
                MONITOR_MGR::AcquireMonitorShared(&v78, (__int64)v29);
                v69 = v78;
                if ( v78 )
                {
                  PreferredMonitorSourceMode = DxgMonitor::MonitorModes::_GetPreferredMonitorSourceMode(
                                                 *((DxgMonitor::MonitorModes **)v78 + 29),
                                                 &v89);
                  ExReleaseResourceLite((PERESOURCE)((char *)v69 + 24));
                  KeLeaveCriticalRegion();
                  v70 = PreferredMonitorSourceMode;
                }
                else
                {
                  WdLogSingleEntry1(2LL, -1073741275LL);
                  RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>::~RESOURCE_LOCK_ACCESSOR<DXGMONITOR const>((__int64 *)&v78);
                  v70 = -1073741275;
                }
              }
              else
              {
                v70 = -1073741811;
              }
              if ( v70 < 0 )
              {
                *(_QWORD *)(a3 + 916) = 0LL;
LABEL_50:
                LOBYTE(v74) = 0;
                v72 = 0;
                v73[0] = 0;
                MonitorGetPseudoSpecializedState(v29, &v72, v73, &v74);
                if ( !v72 || (v55 = 128, !v73[0]) )
                  v55 = 0;
                v30 = v84;
                *v41 = (v55 | *v41 & 0xFFFFFF7F) ^ ((unsigned __int16)(v55 | *(_WORD *)v41 & 0xFF7F) ^ (unsigned __int16)((unsigned __int8)v74 << 8)) & 0x100;
                v14 = v83;
                goto LABEL_19;
              }
              *(_DWORD *)(a3 + 916) = v89.VideoSignalInfo.ActiveSize.cx;
              cy = v89.VideoSignalInfo.ActiveSize.cy;
            }
            *(_DWORD *)(a3 + 920) = cy;
            goto LABEL_50;
          }
          WdLogSingleEntry2(2LL, v75, v23);
          v10 = v76;
        }
        goto LABEL_64;
      }
      WdLogSingleEntry1(2LL, v14);
    }
    v10 = -1073741811;
LABEL_64:
    v59 = SHIDWORD(v80);
    WdLogSingleEntry5(2LL, SHIDWORD(v80), (unsigned int)v6, v74, v10, 0LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get connected monitor from adapter 0x%I64x%08I64x target 0x%I64x (Status = 0x%I64x).",
      v59,
      (unsigned int)v6,
      v74,
      v10,
      0LL);
    goto LABEL_28;
  }
  WdLogSingleEntry3(3LL, v79.HighPart, LowPart, v17);
LABEL_28:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v92);
LABEL_29:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v85);
  if ( v87 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v85);
  return (unsigned int)v10;
}
