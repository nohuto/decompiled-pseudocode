__int64 __fastcall DxgkGetScanLine(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct _KTHREAD **Current; // rbx
  unsigned int ScanLine; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  bool v9; // sf
  _OWORD *v10; // rax
  struct DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  DXGSESSIONMGR *v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  REMOTE_VSYNC *v20; // rcx
  __int64 v21; // rsi
  int PairingAdapters; // eax
  int v23; // r12d
  __int64 v24; // rcx
  __int64 v25; // r8
  struct DXGADAPTER *v27; // rbx
  __int64 v28; // r10
  __int64 v29; // rcx
  unsigned int v30; // r8d
  BOOLEAN InVerticalBlank; // al
  bool v32; // cc
  UINT v33; // ecx
  __int64 v34; // r8
  __int64 v35; // rdx
  ADAPTER_DISPLAY *v36; // rcx
  unsigned int v37; // eax
  _BYTE *v38; // rdx
  _DWORD *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // [rsp+50h] [rbp-118h] BYREF
  __int64 v43; // [rsp+58h] [rbp-110h]
  char v44; // [rsp+60h] [rbp-108h]
  struct DXGADAPTER *v45; // [rsp+68h] [rbp-100h] BYREF
  DXGADAPTER *v46; // [rsp+70h] [rbp-F8h] BYREF
  unsigned int v47[4]; // [rsp+80h] [rbp-E8h]
  unsigned __int64 v48; // [rsp+90h] [rbp-D8h] BYREF
  _DXGKARG_GETSCANLINE v49; // [rsp+98h] [rbp-D0h] BYREF
  _BYTE v50[144]; // [rsp+B0h] [rbp-B8h] BYREF

  v42 = -1;
  v43 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v44 = 1;
    v42 = 2034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2034);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v42, 2034);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    ScanLine = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
    if ( !v44 )
      return ScanLine;
    v9 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_46:
    if ( v9 )
      McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerExit, v8, v42);
    return ScanLine;
  }
  v10 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v10 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v47 = *v10;
  *(_QWORD *)&v49.VidPnTargetId = 0LL;
  v49.ScanLine = 0;
  if ( v47[0] || !(unsigned int)DxgIsRemoteSessionUsingXddmMonitors() )
  {
    v45 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v46, v47[0], Current, &v45, 1);
    v12 = v45;
    if ( !v45 )
    {
      ScanLine = -1073741811;
      WdLogSingleEntry2(3LL, v47[0], -1073741811LL);
      if ( v46 )
        DXGADAPTER::ReleaseReference(v46);
      goto LABEL_7;
    }
    if ( (unsigned int)DxgIsRemoteSessionUsingXddmMonitors() )
    {
      if ( *((_BYTE *)v12 + 209)
        && ((v15 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118)) == 0LL
          ? (SessionDataForSpecifiedSession = 0LL)
          : (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v14, v13, v16, v17),
             SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                v15,
                                                CurrentProcessSessionId)),
            *((_DWORD *)SessionDataForSpecifiedSession + 4738)) )
      {
        v20 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 1064);
      }
      else
      {
        v20 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 992);
      }
      ScanLine = REMOTE_VSYNC::GetScanLine(v20, &v49);
LABEL_67:
      if ( v46 )
        DXGADAPTER::ReleaseReference(v46);
      goto LABEL_69;
    }
    v45 = 0LL;
    v21 = v47[1];
    PairingAdapters = DxgkpGetPairingAdapters(v12, v47[1], 0LL, 0LL, &v45, &v48, 0);
    v23 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      WdLogSingleEntry3(4LL, v12, (unsigned int)v21, PairingAdapters);
LABEL_28:
      if ( v46 )
        DXGADAPTER::ReleaseReference(v46);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
      if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v42);
      return (unsigned int)v23;
    }
    v27 = v45;
    if ( !v45 )
    {
      WdLogSingleEntry1(1LL, 7928LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 7928LL, 0LL, 0LL, 0LL, 0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v50, v27, 0LL);
    DXGADAPTER::ReleaseReference(v27);
    v23 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v50, 0LL);
    if ( v23 < 0 )
    {
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
      goto LABEL_28;
    }
    if ( !*((_QWORD *)v27 + 365) )
    {
      WdLogSingleEntry1(1LL, 7942LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
        7942LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (unsigned int)v21 >= *(_DWORD *)(*((_QWORD *)v27 + 365) + 96LL) )
    {
      ScanLine = -1073741811;
      WdLogSingleEntry2(3LL, v21, -1073741811LL);
LABEL_42:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
      if ( v46 )
        DXGADAPTER::ReleaseReference(v46);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
      if ( !v44 )
        return ScanLine;
      LOBYTE(v7) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v9 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_46;
    }
    if ( !DXGADAPTER::IsVSyncAvailable(v27, v21) )
    {
      v28 = *((_QWORD *)v27 + 365);
      v29 = *(_QWORD *)(v28 + 128);
      v30 = *(_DWORD *)(v29 + 4000 * v21 + 1096) + 20;
      InVerticalBlank = v49.InVerticalBlank;
      v32 = v30 <= *(_DWORD *)(v29 + 4000 * v21 + 1012);
      if ( v30 > *(_DWORD *)(v29 + 4000 * v21 + 1012) )
        InVerticalBlank = 1;
      v49.InVerticalBlank = InVerticalBlank;
      v33 = 0;
      if ( v32 )
        v33 = v30;
      *(_DWORD *)(4000 * v21 + *(_QWORD *)(v28 + 128) + 1096) = v33;
      v49.ScanLine = v33;
      ScanLine = 0;
      goto LABEL_66;
    }
    v34 = *(unsigned int *)(4000 * v21 + *(_QWORD *)(*((_QWORD *)v27 + 365) + 128LL) + 1088);
    v49.VidPnTargetId = v34;
    if ( (_DWORD)v34 == -1 )
    {
      ScanLine = -1071774912;
      WdLogSingleEntry3(4LL, v21, v47[0], -1071774912LL);
      goto LABEL_42;
    }
    if ( *((_QWORD *)v27 + 366) )
    {
      v36 = (ADAPTER_DISPLAY *)*((_QWORD *)v27 + 365);
    }
    else
    {
      v35 = *(_QWORD *)(*((_QWORD *)v27 + 365) + 448LL);
      if ( !v35 )
      {
        ScanLine = -1073741811;
LABEL_66:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
        goto LABEL_67;
      }
      if ( !*(_BYTE *)(v35 + 96) )
      {
        BLTQUEUE::GetScanLineEmulation(
          (BLTQUEUE *)(*(_QWORD *)(v35 + 8) + 2920 * v21),
          &v49.ScanLine,
          &v49.InVerticalBlank);
        v37 = 0;
LABEL_65:
        ScanLine = v37;
        goto LABEL_66;
      }
      v36 = *(ADAPTER_DISPLAY **)(v35 + 88);
    }
    v37 = ADAPTER_DISPLAY::DdiGetScanLine(v36, &v49, v34);
    goto LABEL_65;
  }
  Global = DXGGLOBAL::GetGlobal();
  ScanLine = REMOTE_VSYNC::GetScanLine((struct DXGGLOBAL *)((char *)Global + 992), &v49);
LABEL_69:
  if ( (ScanLine & 0x80000000) != 0 )
    goto LABEL_7;
  v38 = (_BYTE *)(a1 + 8);
  if ( a1 + 8 >= MmUserProbeAddress )
    v38 = (_BYTE *)MmUserProbeAddress;
  *v38 = v49.InVerticalBlank;
  v39 = (_DWORD *)(a1 + 12);
  if ( a1 + 12 >= MmUserProbeAddress )
    v39 = (_DWORD *)MmUserProbeAddress;
  *v39 = v49.ScanLine;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
  if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v40, &EventProfilerExit, v41, v42);
  return 0LL;
}
