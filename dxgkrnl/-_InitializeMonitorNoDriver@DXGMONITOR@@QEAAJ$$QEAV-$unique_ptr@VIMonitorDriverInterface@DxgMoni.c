__int64 __fastcall DXGMONITOR::_InitializeMonitorNoDriver(
        struct DxgMonitor::IMonitorComponentParent *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a5,
        char a6,
        unsigned int a7,
        __int64 a8)
{
  int v9; // ebp
  __int64 v12; // rax
  unsigned int v13; // edi
  __int64 v14; // rax
  void (__fastcall ***v15)(_QWORD, __int64); // rcx
  bool v16; // cf
  __int64 v17; // rax
  unsigned int v18; // r12d
  unsigned int v19; // r14d
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rbp
  VIDPN_MGR *v23; // rbp
  __int64 v24; // r14
  __int64 v25; // rax
  DxgMonitor::MonitorPnpState *v26; // rdi
  _QWORD *v28; // rax
  DxgMonitor::MonitorDataStore *v29; // rcx
  DxgMonitor::MonitorDescriptorState *v30; // rax
  __int64 v31; // rax
  struct _ERESOURCE *v32; // rdi
  DxgMonitor::MonitorColorState *v33; // rax
  __int64 v34; // rax
  void *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  void *v38; // rcx
  DxgMonitor::MonitorModes *v39; // rax
  __int64 v40; // rax
  DxgMonitor::MonitorModes *v41; // rdi
  _QWORD *v42; // rax
  _QWORD *v43; // rdi
  DxgMonitor::MonitorGammaState *v44; // rbp
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rdx
  DxgMonitor::MonitorUsb4State *v48; // rdi
  DxgMonitor::MonitorDisplayPortState *v49; // rax
  DxgMonitor::MonitorDisplayPortState *v50; // rax
  void *v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v55; // edi
  __int64 v56; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v57; // [rsp+90h] [rbp+18h]

  v57 = a3;
  v9 = a3;
  v12 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v13 = a7;
  *(_QWORD *)(v12 + 24) = a1;
  if ( v13 )
  {
    if ( v13 == 1 )
    {
      if ( a4 )
        goto LABEL_8;
      goto LABEL_7;
    }
  }
  else
  {
    WdLogSingleEntry0(1LL);
  }
  if ( a4 )
LABEL_7:
    WdLogSingleEntry0(1LL);
LABEL_8:
  *((_DWORD *)a1 + 45) = v9;
  *((_DWORD *)a1 + 78) = v13;
  *((_DWORD *)a1 + 79) = v13;
  v14 = *a2;
  *a2 = 0LL;
  v15 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)a1 + 24);
  *((_QWORD *)a1 + 24) = v14;
  if ( v15 )
    (**v15)(v15, 1LL);
  if ( (_BYTE)a5 )
  {
    v16 = a6 != 0;
    a6 = -a6;
    *((_BYTE *)a1 + 176) = *((_BYTE *)a1 + 176) & 0xFB | (v16 ? 0 : 4) | 2;
  }
  *((_BYTE *)a1 + 177) &= ~0x40u;
  if ( (unsigned int)Feature_EnableIddCx110__private_IsEnabledDeviceUsage() )
    *((_BYTE *)a1 + 177) = ((*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 21) + 88LL))(*((_QWORD *)a1 + 21)) != 0
                          ? 0x40
                          : 0) | *((_BYTE *)a1 + 177) & 0xBF;
  v17 = *((_QWORD *)a1 + 21);
  v18 = -1;
  v19 = *((_DWORD *)a1 + 45);
  a7 = -1;
  v20 = *(_QWORD *)(v17 + 24);
  v21 = *(_QWORD *)(v20 + 16);
  if ( v21 )
  {
    v22 = *(_QWORD *)(v21 + 2920);
    if ( v22 )
    {
      v23 = *(VIDPN_MGR **)(v22 + 104);
      if ( v23 )
      {
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v56, (__int64)v23);
        VIDPN_MGR::GetTargetPowerComponentIndex(v23, v19, &a7);
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v56 + 40));
        v18 = a7;
      }
      else
      {
        WdLogSingleEntry1(2LL, *(_QWORD *)(v20 + 16));
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, *(_QWORD *)(v20 + 16));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
        v21,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
  }
  v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 21) + 24LL) + 16LL) + 3032LL);
  v25 = operator new[](0x50uLL, 0x4D677844u, 64LL);
  if ( v25 )
  {
    *(_QWORD *)(v25 + 24) = 0LL;
    *(_QWORD *)(v25 + 32) = 0LL;
    *(_QWORD *)(v25 + 40) = 0LL;
    *(_QWORD *)v25 = a1;
    *(_BYTE *)(v25 + 16) = 0;
    *(_OWORD *)(v25 + 48) = 0LL;
    *(_OWORD *)(v25 + 64) = 0LL;
    *(_QWORD *)(v25 + 8) = a4;
  }
  else
  {
    v25 = 0LL;
  }
  v26 = (DxgMonitor::MonitorPnpState *)*((_QWORD *)a1 + 25);
  *((_QWORD *)a1 + 25) = v25;
  if ( v26 )
  {
    DxgMonitor::MonitorPnpState::~MonitorPnpState(v26);
    operator delete(v26);
  }
  if ( !*((_QWORD *)a1 + 25) )
    goto LABEL_27;
  v28 = (_QWORD *)operator new[](0x18uLL, 0x4D677844u, 256LL);
  if ( v28 )
  {
    v28[1] = a1;
    *v28 = &DxgMonitor::MonitorDataStore::`vftable';
    v28[2] = (char *)a1 + 8;
  }
  else
  {
    v28 = 0LL;
  }
  v29 = (DxgMonitor::MonitorDataStore *)*((_QWORD *)a1 + 26);
  *((_QWORD *)a1 + 26) = v28;
  if ( v29 )
    DxgMonitor::MonitorDataStore::`scalar deleting destructor'(v29, 1);
  if ( !*((_QWORD *)a1 + 26) )
    goto LABEL_27;
  v30 = (DxgMonitor::MonitorDescriptorState *)operator new[](0xB8uLL, 0x4D677844u, 64LL);
  if ( v30 )
    v31 = DxgMonitor::MonitorDescriptorState::MonitorDescriptorState(
            v30,
            a1,
            *((const struct DxgMonitor::IMonitorRegistry **)a1 + 26));
  else
    v31 = 0LL;
  v32 = (struct _ERESOURCE *)*((_QWORD *)a1 + 27);
  *((_QWORD *)a1 + 27) = v31;
  if ( v32 )
  {
    DxgMonitor::MonitorDescriptorState::~MonitorDescriptorState(v32);
    operator delete(v32);
  }
  if ( !*((_QWORD *)a1 + 27) )
    goto LABEL_27;
  v33 = (DxgMonitor::MonitorColorState *)operator new[](0x1B0uLL, 0x4D677844u, 256LL);
  if ( v33 )
    v34 = DxgMonitor::MonitorColorState::MonitorColorState(v33, a1, *((struct DxgMonitor::IMonitorRegistry **)a1 + 26));
  else
    v34 = 0LL;
  v35 = (void *)*((_QWORD *)a1 + 28);
  *((_QWORD *)a1 + 28) = v34;
  if ( v35 )
    operator delete(v35);
  if ( !*((_QWORD *)a1 + 28) )
    goto LABEL_27;
  v36 = operator new[](0x18uLL, 0x4D677844u, 256LL);
  if ( v36 )
  {
    v37 = *((_QWORD *)a1 + 26);
    *(_WORD *)(v36 + 20) = 0;
    *(_QWORD *)(v36 + 8) = v37;
    *(_QWORD *)v36 = a1;
    *(_DWORD *)(v36 + 16) = 0;
  }
  else
  {
    v36 = 0LL;
  }
  v38 = (void *)*((_QWORD *)a1 + 30);
  *((_QWORD *)a1 + 30) = v36;
  if ( v38 )
    operator delete(v38);
  if ( !*((_QWORD *)a1 + 30) )
    goto LABEL_27;
  v39 = (DxgMonitor::MonitorModes *)operator new[](0xF8uLL, 0x4D677844u, 64LL);
  if ( v39 )
    v40 = DxgMonitor::MonitorModes::MonitorModes(v39, a1, *((const struct DxgMonitor::IMonitorRegistry **)a1 + 26));
  else
    v40 = 0LL;
  v41 = (DxgMonitor::MonitorModes *)*((_QWORD *)a1 + 29);
  *((_QWORD *)a1 + 29) = v40;
  if ( v41 )
  {
    DxgMonitor::MonitorModes::~MonitorModes(v41);
    operator delete(v41);
  }
  if ( !*((_QWORD *)a1 + 29) )
    goto LABEL_27;
  v42 = (_QWORD *)operator new[](0x90uLL, 0x4D677844u, 64LL);
  v43 = v42;
  if ( v42 )
  {
    *v42 = a1;
    v42[1] = (char *)a1 + 16;
    memset(v42 + 2, 0, 0x40uLL);
    *((_DWORD *)v43 + 29) = -1;
    v43[11] = 0LL;
    v43[12] = 0LL;
    v43[13] = 0LL;
    *((_DWORD *)v43 + 28) = 0;
    *((_DWORD *)v43 + 30) = 1;
    v43[16] = 0LL;
    *((_BYTE *)v43 + 136) = 0;
  }
  else
  {
    v43 = 0LL;
  }
  v44 = (DxgMonitor::MonitorGammaState *)*((_QWORD *)a1 + 31);
  *((_QWORD *)a1 + 31) = v43;
  if ( v44 )
  {
    DxgMonitor::MonitorGammaState::~MonitorGammaState(v44);
    operator delete(v44);
  }
  if ( !*((_QWORD *)a1 + 31) )
    goto LABEL_27;
  v45 = operator new[](0x68uLL, 0x4D677844u, 64LL);
  v46 = v45;
  if ( v45 )
  {
    v47 = a8;
    *(_QWORD *)v45 = a1;
    *(_BYTE *)(v45 + 8) = 0;
    *(_OWORD *)(v45 + 12) = 0LL;
    *(_QWORD *)(v45 + 32) = 0LL;
    *(_OWORD *)(v45 + 40) = 0LL;
    *(_WORD *)(v45 + 56) = 0;
    *(_QWORD *)(v45 + 64) = 0LL;
    *(_DWORD *)(v45 + 72) = v18;
    *(_QWORD *)(v45 + 80) = v24;
    *(_BYTE *)(v45 + 88) = 0;
    *(_QWORD *)(v45 + 96) = 0LL;
    if ( v47 )
    {
      *(_BYTE *)(v45 + 8) = 1;
      *(_OWORD *)(v45 + 12) = *(_OWORD *)v47;
      *(_QWORD *)(v45 + 48) = *(_QWORD *)(v47 + 24);
      *(_WORD *)(v45 + 40) = *(_WORD *)(v47 + 16);
      *(_WORD *)(v45 + 42) = *(_WORD *)(v47 + 18);
    }
  }
  else
  {
    v46 = 0LL;
  }
  v48 = (DxgMonitor::MonitorUsb4State *)*((_QWORD *)a1 + 33);
  *((_QWORD *)a1 + 33) = v46;
  if ( v48 )
  {
    DxgMonitor::MonitorUsb4State::~MonitorUsb4State(v48);
    operator delete(v48);
  }
  if ( !*((_QWORD *)a1 + 33) )
    goto LABEL_27;
  v49 = (DxgMonitor::MonitorDisplayPortState *)operator new[](0x28uLL, 0x4D677844u, 256LL);
  if ( v49 )
    v50 = DxgMonitor::MonitorDisplayPortState::MonitorDisplayPortState(v49, a1);
  else
    v50 = 0LL;
  v51 = (void *)*((_QWORD *)a1 + 34);
  *((_QWORD *)a1 + 34) = v50;
  if ( v51 )
    operator delete(v51);
  if ( !*((_QWORD *)a1 + 34) )
    goto LABEL_27;
  if ( !(_BYTE)a5 )
    goto LABEL_84;
  v52 = operator new[](0x50uLL, 0x4D677844u, 64LL);
  if ( v52 )
  {
    *(_QWORD *)v52 = a1;
    *(_OWORD *)(v52 + 8) = 0LL;
    *(_DWORD *)(v52 + 24) = 0;
    *(_DWORD *)(v52 + 68) = -1;
    *(_QWORD *)(v52 + 40) = 0LL;
    *(_QWORD *)(v52 + 48) = 0LL;
    *(_QWORD *)(v52 + 56) = 0LL;
    *(_DWORD *)(v52 + 64) = 0;
    *(_DWORD *)(v52 + 72) = 9;
  }
  else
  {
    v52 = 0LL;
  }
  v53 = *((_QWORD *)a1 + 32);
  *((_QWORD *)a1 + 32) = v52;
  if ( v53 )
  {
    DXGFASTMUTEX::~DXGFASTMUTEX((DXGFASTMUTEX *)(v53 + 32));
    operator delete((void *)v53);
  }
  if ( *((_QWORD *)a1 + 32) )
  {
LABEL_84:
    v54 = *((_QWORD *)a1 + 21);
    a5 = D3DKMDT_VOT_UNINITIALIZED;
    if ( (int)DmmGetVideoOutputTechnology(*(_QWORD **)(*(_QWORD *)(v54 + 24) + 16LL), v57, &a5, 0LL) < 0 )
      WdLogSingleEntry0(1LL);
    v55 = a5;
    if ( a5 == D3DKMDT_VOT_UNINITIALIZED )
      WdLogSingleEntry0(1LL);
    *((_DWORD *)a1 + 46) = v55;
    return 0LL;
  }
  else
  {
LABEL_27:
    WdLogSingleEntry1(2LL, -1073741801LL);
    return 3221225495LL;
  }
}
