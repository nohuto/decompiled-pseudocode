__int64 __fastcall DxgkSetDisplayMode(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  struct _KTHREAD **Current; // r15
  __int64 v5; // rdi
  ULONG64 v6; // rax
  struct DXGDEVICE *v7; // rsi
  __int64 v8; // r9
  int v9; // r15d
  __int64 v10; // r13
  struct DXGALLOCATION *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // r15d
  struct DXGADAPTERALLOCATION *CddPrimaryAllocation; // rax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 CurrentProcess; // rax
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  bool v28; // zf
  __int64 v29; // rdi
  __int64 v30; // r9
  __int64 v31; // rdi
  __int64 v32; // r9
  __int64 v33; // r9
  __int64 v34; // rdi
  __int64 v35; // r9
  __int64 v36; // rdi
  __int64 v37; // r9
  unsigned int v38; // edi
  __int64 v39; // r9
  _OWORD *v40; // r8
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rdi
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // r9
  __int64 v47; // r9
  __int64 v48; // rcx
  __int64 v49; // r8
  _DWORD *v50; // rdx
  __int64 v51; // rdi
  void *v52; // rsi
  unsigned int *v53; // [rsp+28h] [rbp-420h]
  struct DXGALLOCATION *v54; // [rsp+50h] [rbp-3F8h] BYREF
  struct DXGDEVICE *v55; // [rsp+58h] [rbp-3F0h] BYREF
  int v56; // [rsp+60h] [rbp-3E8h] BYREF
  __int64 v57; // [rsp+68h] [rbp-3E0h]
  char v58; // [rsp+70h] [rbp-3D8h]
  _QWORD v59[2]; // [rsp+78h] [rbp-3D0h] BYREF
  ULONG64 v60; // [rsp+88h] [rbp-3C0h]
  _BYTE v61[16]; // [rsp+90h] [rbp-3B8h] BYREF
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v62[4]; // [rsp+A0h] [rbp-3A8h]
  _BYTE v63[12]; // [rsp+B0h] [rbp-398h]
  unsigned int v64; // [rsp+C0h] [rbp-388h] BYREF
  unsigned int v65; // [rsp+C4h] [rbp-384h]
  _BYTE v66[24]; // [rsp+C8h] [rbp-380h] BYREF
  struct _KTHREAD **v67; // [rsp+E0h] [rbp-368h]
  __int64 v68; // [rsp+E8h] [rbp-360h]
  unsigned int v69; // [rsp+F0h] [rbp-358h]
  struct DXGDEVICE *v70[2]; // [rsp+F8h] [rbp-350h] BYREF
  _QWORD v71[2]; // [rsp+108h] [rbp-340h] BYREF
  _OWORD v72[2]; // [rsp+118h] [rbp-330h] BYREF
  __int64 v73; // [rsp+138h] [rbp-310h]
  int v74; // [rsp+140h] [rbp-308h]
  _OWORD v75[2]; // [rsp+148h] [rbp-300h] BYREF
  __int64 v76; // [rsp+168h] [rbp-2E0h]
  int v77; // [rsp+170h] [rbp-2D8h]
  _OWORD v78[2]; // [rsp+178h] [rbp-2D0h] BYREF
  __int64 v79; // [rsp+198h] [rbp-2B0h]
  int v80; // [rsp+1A0h] [rbp-2A8h]
  _OWORD v81[2]; // [rsp+1A8h] [rbp-2A0h] BYREF
  __int64 v82; // [rsp+1C8h] [rbp-280h]
  int v83; // [rsp+1D0h] [rbp-278h]
  _OWORD v84[2]; // [rsp+1D8h] [rbp-270h] BYREF
  __int64 v85; // [rsp+1F8h] [rbp-250h]
  int v86; // [rsp+200h] [rbp-248h]
  _OWORD v87[2]; // [rsp+208h] [rbp-240h] BYREF
  __int64 v88; // [rsp+228h] [rbp-220h]
  int v89; // [rsp+230h] [rbp-218h]
  _OWORD v90[2]; // [rsp+238h] [rbp-210h] BYREF
  __int64 v91; // [rsp+258h] [rbp-1F0h]
  int v92; // [rsp+260h] [rbp-1E8h]
  _OWORD v93[2]; // [rsp+268h] [rbp-1E0h] BYREF
  __int64 v94; // [rsp+288h] [rbp-1C0h]
  int v95; // [rsp+290h] [rbp-1B8h]
  _OWORD v96[2]; // [rsp+298h] [rbp-1B0h] BYREF
  __int64 v97; // [rsp+2B8h] [rbp-190h]
  int v98; // [rsp+2C0h] [rbp-188h]
  _OWORD v99[2]; // [rsp+2C8h] [rbp-180h] BYREF
  __int64 v100; // [rsp+2E8h] [rbp-160h]
  int v101; // [rsp+2F0h] [rbp-158h]
  _OWORD v102[2]; // [rsp+2F8h] [rbp-150h] BYREF
  __int64 v103; // [rsp+318h] [rbp-130h]
  int v104; // [rsp+320h] [rbp-128h]
  _BYTE v105[160]; // [rsp+330h] [rbp-118h] BYREF
  _QWORD v106[10]; // [rsp+3D0h] [rbp-78h] BYREF

  v60 = a1;
  memset(v106, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v106[1]);
  v106[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v106[3]) = 49;
  LOBYTE(v106[6]) = -1;
  v56 = -1;
  v57 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v58 = 1;
    v56 = 2018;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2018);
  }
  else
  {
    v58 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v56, 2018);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  v67 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess();
    v9 = -1073741811;
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v53 = (unsigned int *)PsGetCurrentProcess();
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x 0x%I64x encountered exception",
      -1073741811LL,
      (__int64)v53,
      0LL,
      0LL,
      0LL);
    goto LABEL_47;
  }
  v5 = 0LL;
  v65 = 0;
  v6 = a1;
  if ( a1 >= MmUserProbeAddress )
    v6 = MmUserProbeAddress;
  *(_OWORD *)v62 = *(_OWORD *)v6;
  *(_QWORD *)v63 = *(_QWORD *)(v6 + 16);
  *(_DWORD *)&v63[8] = *(_DWORD *)(v6 + 24);
  v70[0] = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v55, v62[0], Current, v70);
  v7 = v70[0];
  if ( !v70[0] )
  {
    v25 = (unsigned int)v62[0];
    v26 = PsGetCurrentProcess();
    v9 = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v26, (unsigned int)v25);
    v27 = PsGetCurrentProcess();
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x returned due to an invalid device handle 0x%I64x 0x%I64x 0x%I64x",
      -1073741811LL,
      v27,
      v25,
      0LL,
      0LL);
    goto LABEL_55;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v59, v70[0]);
  DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v66, (struct DXGPROCESS *)Current);
  DXGUSERCRIT::Acquire((DXGUSERCRIT *)v66, 1u);
  DXGPROCESSCOPYPROTECTIONMUTEX::DXGPROCESSCOPYPROTECTIONMUTEX(
    (DXGPROCESSCOPYPROTECTIONMUTEX *)v61,
    (struct DXGPROCESS *)Current);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v61);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v105, (__int64)v7, 1, v8, 0);
  v9 = COREDEVICEACCESS::AcquireExclusive((__int64)v105, 2LL);
  if ( v9 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v105);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v61);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v66);
    if ( v59[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v59);
LABEL_55:
    if ( v55 )
    {
      v28 = _InterlockedExchangeAdd64((volatile signed __int64 *)v55 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
LABEL_57:
      if ( v28 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v55 + 2), v55);
    }
LABEL_47:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
    if ( v58 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v56);
    }
    return (unsigned int)v9;
  }
  v10 = *((_QWORD *)v7 + 235);
  if ( !v10 )
  {
    v9 = -1073741811;
    WdLogSingleEntry2(2LL, v7, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Set display mode on render only device 0x%I64x, returning 0x%I64x.",
      (__int64)v7,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_83:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v105);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v61);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v66);
    if ( v59[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v59);
    if ( !v55 )
      goto LABEL_47;
    v28 = _InterlockedExchangeAdd64((volatile signed __int64 *)v55 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1;
    goto LABEL_57;
  }
  ++*(_DWORD *)(*(_QWORD *)(v10 + 2920) + 416LL);
  DXGPROCESS::GetAllocationSafe((__int64)v67, (DXGALLOCATIONREFERENCE *)&v54, v62[1]);
  v11 = v54;
  if ( !v54 )
  {
    v29 = (unsigned int)v62[1];
    v9 = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v7, (unsigned int)v62[1]);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x Device 0x%I64x: Invalid primary specified: 0x%I64x",
      -1073741811LL,
      (__int64)v7,
      v29,
      0LL,
      0LL);
    memset(v72, 0, sizeof(v72));
    v73 = 0LL;
    v74 = 0;
    DmmCacheDisplayModeChangeRequest((DXGADAPTER *)v10, 0xFFFFFFFF, (__int64)v72, v30, -1071775468);
LABEL_82:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v54);
    goto LABEL_83;
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v54 + 1) + 16LL) + 16LL) != *(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) )
  {
    v9 = -1073741811;
    WdLogSingleEntry3(2LL, v7, v54, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
      (__int64)v7,
      (__int64)v54,
      -1073741811LL,
      0LL,
      0LL);
    memset(v75, 0, sizeof(v75));
    v76 = 0LL;
    v77 = 0;
    DmmCacheDisplayModeChangeRequest(
      (DXGADAPTER *)v10,
      (*(_DWORD *)(*((_QWORD *)v54 + 6) + 4LL) >> 6) & 0xF,
      (__int64)v75,
      v33,
      -1071775467);
    goto LABEL_82;
  }
  v12 = *((_QWORD *)v54 + 6);
  if ( (*(_DWORD *)(v12 + 4) & 1) == 0 )
  {
    v34 = (unsigned int)v62[1];
    v9 = -1073741811;
    WdLogSingleEntry5(2LL, -1073741811LL, v7, (unsigned int)v62[1], v54, (*(_DWORD *)(v12 + 4) >> 6) & 0xF);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x Device 0x%I64x: Only primary can be used 0x%I64x 0x%I64x 0x%I64x",
      -1073741811LL,
      (__int64)v7,
      v34,
      (__int64)v54,
      (*(_DWORD *)(*((_QWORD *)v54 + 6) + 4LL) >> 6) & 0xF);
    memset(v78, 0, sizeof(v78));
    v79 = 0LL;
    v80 = 0;
    DmmCacheDisplayModeChangeRequest(
      (DXGADAPTER *)v10,
      (*(_DWORD *)(*((_QWORD *)v54 + 6) + 4LL) >> 6) & 0xF,
      (__int64)v78,
      v35,
      -1071775482);
    goto LABEL_82;
  }
  if ( v10 != *((_QWORD *)v7 + 235) )
  {
    WdLogSingleEntry1(1LL, 6447LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDisplayAdapter == pDevice->GetDisplayAdapter(PrimaryAllocationReference.m_pAllocation->m_pAllocation->m_VidPnSourceId)",
      6447LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v11 = v54;
  }
  if ( (unsigned int)(v62[2] - 1) > 2 )
  {
    v36 = v62[2];
    v9 = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v7, v62[2]);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x Device 0x%I64x: Invalid ScanLineOrdering specified 0x%I64x",
      -1073741811LL,
      (__int64)v7,
      v36,
      0LL,
      0LL);
    memset(v81, 0, sizeof(v81));
    v82 = 0LL;
    v83 = 0;
    DmmCacheDisplayModeChangeRequest(
      (DXGADAPTER *)v10,
      (*(_DWORD *)(*((_QWORD *)v54 + 6) + 4LL) >> 6) & 0xF,
      (__int64)v81,
      v37,
      -1071774894);
    goto LABEL_82;
  }
  if ( (unsigned int)(v62[3] - 1) > 3 )
  {
    v31 = v62[3];
    v9 = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v7, v62[3]);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x Device 0x%I64x: Invalid DisplayOrientation specified 0x%I64x",
      -1073741811LL,
      (__int64)v7,
      v31,
      0LL,
      0LL);
    memset(v84, 0, sizeof(v84));
    v85 = 0LL;
    v86 = 0;
    DmmCacheDisplayModeChangeRequest(
      (DXGADAPTER *)v10,
      (*(_DWORD *)(*((_QWORD *)v54 + 6) + 4LL) >> 6) & 0xF,
      (__int64)v84,
      v32,
      -1071774907);
    goto LABEL_82;
  }
  if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner(
          *(DXGADAPTER ***)(v10 + 2920),
          v7,
          (*(_DWORD *)(*((_QWORD *)v11 + 6) + 4LL) >> 6) & 0xF) )
  {
    v38 = -1071775744;
    WdLogSingleEntry5(
      7LL,
      -1071775744LL,
      v7,
      (unsigned int)v62[1],
      v54,
      (*(_DWORD *)(*((_QWORD *)v54 + 6) + 4LL) >> 6) & 0xF);
    memset(v87, 0, sizeof(v87));
    v88 = 0LL;
    v89 = 0;
    v40 = v87;
LABEL_69:
    DmmCacheDisplayModeChangeRequest(
      (DXGADAPTER *)v10,
      (*(_DWORD *)(*((_QWORD *)v54 + 6) + 4LL) >> 6) & 0xF,
      (__int64)v40,
      v39,
      v38);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v54);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v105);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v61);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v66);
    if ( v59[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v59);
    if ( v55 && _InterlockedExchangeAdd64((volatile signed __int64 *)v55 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v55 + 2), v55);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
    if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v41, &EventProfilerExit, v42, v56);
    return v38;
  }
  if ( ((unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                        *(ADAPTER_DISPLAY **)(v10 + 2920),
                        (*(_DWORD *)(*((_QWORD *)v54 + 6) + 4LL) >> 6) & 0xF) == 2
     || *((_DWORD *)v7 + 116) == 1)
    && ADAPTER_DISPLAY::GetCddPrimaryAllocation(
         *(ADAPTER_DISPLAY **)(v10 + 2920),
         (*(_DWORD *)(*((_QWORD *)v54 + 6) + 4LL) >> 6) & 0xF,
         0) )
  {
    v38 = -1071774910;
    WdLogSingleEntry5(
      7LL,
      -1071774910LL,
      v7,
      (unsigned int)v62[1],
      v54,
      (*(_DWORD *)(*((_QWORD *)v54 + 6) + 4LL) >> 6) & 0xF);
    memset(v90, 0, sizeof(v90));
    v91 = 0LL;
    v92 = 0;
    v40 = v90;
    goto LABEL_69;
  }
  if ( !ADAPTER_DISPLAY::IsPartOfDesktop(
          *(ADAPTER_DISPLAY **)(v10 + 2920),
          (*(_DWORD *)(*((_QWORD *)v54 + 6) + 4LL) >> 6) & 0xF) )
  {
    v38 = -1071774972;
    WdLogSingleEntry5(
      7LL,
      -1071774972LL,
      v7,
      (*(_DWORD *)(*((_QWORD *)v54 + 6) + 4LL) >> 6) & 0xF,
      (unsigned int)v62[1],
      v54);
    memset(v93, 0, sizeof(v93));
    v94 = 0LL;
    v95 = 0;
    v40 = v93;
    goto LABEL_69;
  }
  if ( *((struct DXGDEVICE **)v54 + 1) != v7 )
  {
    v43 = (unsigned int)v62[1];
    v9 = -1073741811;
    WdLogSingleEntry5(2LL, -1073741811LL, v7, (unsigned int)v62[1], v54, *((_QWORD *)v54 + 1));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"ret = 0x%I64x Device 0x%I64x: Primary (0x%I64x 0x%I64x) must be on allocated on the specified device (0x%I64x)",
      -1073741811LL,
      (__int64)v7,
      v43,
      (__int64)v54,
      *((_QWORD *)v54 + 1));
    memset(v96, 0, sizeof(v96));
    v97 = 0LL;
    v98 = 0;
    DmmCacheDisplayModeChangeRequest(
      (DXGADAPTER *)v10,
      (*(_DWORD *)(*((_QWORD *)v54 + 6) + 4LL) >> 6) & 0xF,
      (__int64)v96,
      v44,
      -1071775467);
    v70[1] = 0LL;
    v45 = 2055LL;
LABEL_81:
    DxgCreateLiveDumpWithWdLogs2(
      403LL,
      v45,
      (*(_DWORD *)(*((_QWORD *)v54 + 6) + 4LL) >> 6) & 0xF,
      *((_QWORD *)v54 + 1),
      v7,
      0LL);
    goto LABEL_82;
  }
  v13 = *((_QWORD *)v54 + 6);
  if ( *((_DWORD *)v7 + 116) == 1 )
  {
    v14 = (*(_DWORD *)(v13 + 4) >> 6) & 0xF;
    v69 = v14;
    CddPrimaryAllocation = ADAPTER_DISPLAY::GetCddPrimaryAllocation(*(ADAPTER_DISPLAY **)(v10 + 2920), v14, 0);
    if ( CddPrimaryAllocation == *((struct DXGADAPTERALLOCATION **)v54 + 6)
      || (unsigned int)DXGDEVICE::IsAllocationInPrimaryAllocationsList(v7, v14, v54) )
    {
      v16 = DXGDEVICE::PinPrimaryAllocations(v7, v14);
      v9 = v16;
      if ( v16 < 0 )
        WdLogSingleEntry5(7LL, v16, v7, (unsigned int)v62[1], v54, v69);
      goto LABEL_27;
    }
    v9 = -1073741811;
    WdLogSingleEntry5(
      7LL,
      -1073741811LL,
      v7,
      (unsigned int)v62[1],
      v54,
      (*(_DWORD *)(*((_QWORD *)v54 + 6) + 4LL) >> 6) & 0xF);
    memset(v99, 0, sizeof(v99));
    v100 = 0LL;
    v101 = 0;
    DmmCacheDisplayModeChangeRequest(
      (DXGADAPTER *)v10,
      (*(_DWORD *)(*((_QWORD *)v54 + 6) + 4LL) >> 6) & 0xF,
      (__int64)v99,
      v46,
      -1071774928);
    v68 = 0LL;
    v45 = 2056LL;
    goto LABEL_81;
  }
  if ( (*(_DWORD *)(v13 + 4) & 0x10) == 0 )
  {
LABEL_27:
    WdLogSingleEntry2(7LL, (*(_DWORD *)(*((_QWORD *)v54 + 6) + 4LL) >> 6) & 0xF, v10);
    if ( v9 >= 0 )
    {
      v64 = 0;
      if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 304480) )
        v63[4] |= 1u;
      v17 = DXGDEVICE::SetDisplayMode(
              v7,
              v54,
              v62[2],
              (enum _D3DDDI_ROTATION)v62[3],
              *(struct _D3DKMT_SETDISPLAYMODE_FLAGS *)&v63[4],
              &v64,
              (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v106);
      v9 = v17;
      if ( v17 == -1071774891 )
      {
        v50 = (_DWORD *)(v60 + 16);
        if ( v60 + 16 >= MmUserProbeAddress )
          v50 = (_DWORD *)MmUserProbeAddress;
        *v50 = v64;
      }
      else if ( v17 >= 0 )
      {
        v18 = ADAPTER_DISPLAY::SetCopyProtectionWithLock(
                *(ADAPTER_DISPLAY **)(v10 + 2920),
                (*(_DWORD *)(*((_QWORD *)v54 + 6) + 4LL) >> 6) & 0xF);
        if ( v18 < 0 )
        {
          v51 = v18;
          WdLogSingleEntry3(2LL, v10, (*(_DWORD *)(*((_QWORD *)v54 + 6) + 4LL) >> 6) & 0xF, v18);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed in restoring copy protection on VidPnSourceId 0x%I64x on DXGADAPTER 0x%I64x (status = 0x%I64x)",
            v10,
            (*(_DWORD *)(*((_QWORD *)v54 + 6) + 4LL) >> 6) & 0xF,
            v51,
            0LL,
            0LL);
        }
        v71[0] = 7LL;
        v71[1] = 0LL;
        if ( (int)DxgkStatusChangeNotify((int *)v71, v19, v20) < 0 )
        {
          WdLogSingleEntry1(1LL, 6652LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"NT_SUCCESS(NotificationStatus)",
            6652LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v5 = *(_QWORD *)(v10 + 404);
        v65 = (*(_DWORD *)(*((_QWORD *)v54 + 6) + 4LL) >> 6) & 0xF;
      }
    }
    if ( v9 == -1071774920 )
    {
      v52 = *(void **)(v10 + 216);
      ObfReferenceObject(v52);
      WdLogSingleEntry1(7LL, v52);
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)v105);
      DpiPollDisplayChildren(v52, 4LL, v106);
      ObfDereferenceObject(v52);
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v54);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v105);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v61);
    DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v66);
    if ( v59[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v59);
    if ( v55 && _InterlockedExchangeAdd64((volatile signed __int64 *)v55 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v55 + 2), v55);
    if ( v9 >= 0 && (*((int (__fastcall **)(__int64, _QWORD))v67[11] + 51))(v5, v65) < 0 )
    {
      WdLogSingleEntry1(1LL, 6685LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(_Status)", 6685LL, 0LL, 0LL, 0LL, 0LL);
    }
    goto LABEL_47;
  }
  WdLogSingleEntry5(7LL, -1071775482LL, v7, (unsigned int)v62[1], v54, (*(_DWORD *)(v13 + 4) >> 6) & 0xF);
  memset(v102, 0, sizeof(v102));
  v103 = 0LL;
  v104 = 0;
  DmmCacheDisplayModeChangeRequest(
    (DXGADAPTER *)v10,
    (*(_DWORD *)(*((_QWORD *)v54 + 6) + 4LL) >> 6) & 0xF,
    (__int64)v102,
    v47,
    -1071775482);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v54);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v105);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v61);
  DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v66);
  if ( v59[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v59);
  if ( v55 && _InterlockedExchangeAdd64((volatile signed __int64 *)v55 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v55 + 2), v55);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
  if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v48, &EventProfilerExit, v49, v56);
  return 3223191814LL;
}
