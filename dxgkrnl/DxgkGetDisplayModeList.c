__int64 __fastcall DxgkGetDisplayModeList(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rdi
  D3DKMT_DISPLAYMODE *pModeList; // r13
  UINT ModeCount; // r12d
  char v9; // r15
  ULONG64 v10; // rcx
  __int64 v11; // rsi
  struct DXGADAPTER *v12; // rbx
  __int64 v13; // r14
  int PairingAdapters; // eax
  __int64 v15; // rsi
  volatile signed __int64 *v16; // rbx
  __int64 v17; // rcx
  signed __int64 v18; // rax
  struct DXGADAPTER *v19; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  struct DXGSESSIONDATA *v25; // r14
  __int64 v26; // rcx
  struct _KPROCESS *v27; // rsi
  int v28; // eax
  int DisplayModeList; // r14d
  ADAPTER_DISPLAY *v30; // rcx
  UINT v31; // esi
  char v32; // di
  __int64 v33; // rcx
  unsigned int v34; // eax
  unsigned int v35; // esi
  ULONG64 v36; // r10
  __int64 v37; // rbx
  _DWORD *v38; // rcx
  UINT i; // eax
  ULONG64 v40; // r8
  __int64 v41; // rdx
  _DWORD *v42; // r11
  __int32 v43; // r9d
  struct DXGSESSIONDATA *v44; // rdi
  struct DXGGLOBAL *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 CurrentProcess; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r8
  DXGADAPTER *v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // r8
  int v57; // eax
  UINT v58; // edx
  __int64 v59; // rax
  int v60; // ecx
  UINT v61; // eax
  unsigned __int8 v62[4]; // [rsp+50h] [rbp-1E8h] BYREF
  int v63; // [rsp+54h] [rbp-1E4h]
  int v64; // [rsp+58h] [rbp-1E0h]
  int v65; // [rsp+60h] [rbp-1D8h] BYREF
  __int64 v66; // [rsp+68h] [rbp-1D0h]
  char v67; // [rsp+70h] [rbp-1C8h]
  char v68; // [rsp+78h] [rbp-1C0h]
  struct DXGADAPTER *v69; // [rsp+80h] [rbp-1B8h] BYREF
  UINT v70; // [rsp+88h] [rbp-1B0h]
  int v71; // [rsp+8Ch] [rbp-1ACh]
  struct _D3DKMT_DISPLAYMODE *v72; // [rsp+90h] [rbp-1A8h] BYREF
  struct DXGSESSIONDATA *v73; // [rsp+98h] [rbp-1A0h]
  unsigned int v74[4]; // [rsp+A0h] [rbp-198h]
  __int64 v75; // [rsp+B0h] [rbp-188h]
  struct DXGADAPTER *v76; // [rsp+B8h] [rbp-180h] BYREF
  struct DXGADAPTER *v77; // [rsp+C8h] [rbp-170h] BYREF
  ULONG64 v78; // [rsp+D0h] [rbp-168h]
  D3DKMT_DISPLAYMODE *v79; // [rsp+D8h] [rbp-160h]
  struct _KTHREAD **v80; // [rsp+E0h] [rbp-158h]
  struct _D3DKMT_GETDISPLAYMODELIST v81; // [rsp+E8h] [rbp-150h] BYREF
  unsigned __int64 v82; // [rsp+100h] [rbp-138h] BYREF
  ULONG64 v83; // [rsp+108h] [rbp-130h]
  ULONG64 v84; // [rsp+110h] [rbp-128h]
  struct _KAPC_STATE ApcState; // [rsp+118h] [rbp-120h] BYREF
  char v86; // [rsp+148h] [rbp-F0h]
  _BYTE v87[144]; // [rsp+150h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+1E0h] [rbp-58h]
  int v89; // [rsp+1F0h] [rbp-48h]
  int v90; // [rsp+1F4h] [rbp-44h]
  int v91; // [rsp+1F8h] [rbp-40h]

  v83 = a1;
  v65 = -1;
  v66 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v67 = 1;
    v65 = 2017;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2017);
  }
  else
  {
    v67 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v65, 2017);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v4);
  v80 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v5);
    WdLogSingleEntry2(2LL, -1073741811LL, CurrentProcess);
    v51 = PsGetCurrentProcess(v50);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x 0x%I64x encountered exception",
      -1073741811LL,
      v51,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
    if ( !v67 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_91;
  }
  pModeList = 0LL;
  v79 = 0LL;
  ModeCount = 0;
  v62[0] = 0;
  v9 = 0;
  v10 = a1;
  if ( a1 >= MmUserProbeAddress )
    v10 = MmUserProbeAddress;
  *(_OWORD *)v74 = *(_OWORD *)v10;
  v75 = *(_QWORD *)(v10 + 16);
  v77 = 0LL;
  v11 = v74[0];
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v76, v74[0], Current, &v77, 1);
  v12 = v77;
  if ( !v77 )
  {
    WdLogSingleEntry3(3LL, -1073741811LL, Current, v11);
    if ( v76 )
      DXGADAPTER::ReleaseReference(v76);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
    if ( !v67 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_91;
  }
  v69 = 0LL;
  v82 = 0LL;
  v13 = v74[1];
  PairingAdapters = DxgkpGetPairingAdapters(v77, v74[1], 0LL, 0LL, &v69, &v82, 0);
  LODWORD(v15) = PairingAdapters;
  v63 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry3(4LL, v12, v13, PairingAdapters);
    v54 = v76;
    if ( !v76 )
      goto LABEL_80;
    goto LABEL_79;
  }
  v16 = (volatile signed __int64 *)v69;
  if ( !v69 )
  {
    WdLogSingleEntry1(1LL, 5848LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 5848LL, 0LL, 0LL, 0LL, 0LL);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v87, (struct DXGADAPTER *const)v16, 0LL);
  v18 = _InterlockedExchangeAdd64(v16 + 3, 0xFFFFFFFFFFFFFFFFuLL);
  v19 = v69;
  if ( v18 == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v69 + 2), v69);
  if ( !(unsigned int)DxgIsRemoteSessionUsingWddmMonitors(v17) )
  {
    Global = DXGGLOBAL::GetGlobal();
    v25 = DXGSESSIONMGR::AcquireConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)Global + 118));
    v73 = v25;
    if ( v25 )
      goto LABEL_14;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire console session mode change shared lock, returning 0x%I64x.",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v87);
    if ( v76 )
      DXGADAPTER::ReleaseReference(v76);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
    if ( !v67 )
      return 3221225485LL;
    v52 = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
LABEL_91:
    McTemplateK0q_EtwWriteTransfer(v52, &EventProfilerExit, v53, v65);
    return 3221225485LL;
  }
  v25 = 0LL;
  v73 = 0LL;
  v57 = DxgkAcquireSessionModeChangeLock(0LL);
  v15 = v57;
  if ( v57 >= 0 )
  {
LABEL_14:
    v86 = 0;
    if ( v25 )
    {
      if ( (unsigned int)PsGetCurrentProcessSessionId(v22, v21, v23, v24) != *(_DWORD *)v25 )
      {
        v9 = 1;
        v27 = (struct _KPROCESS *)*((_QWORD *)v25 + 2331);
        if ( (struct _KPROCESS *)PsGetCurrentProcess(v26) != v27 )
        {
          KeStackAttachProcess(v27, &ApcState);
          v86 = 1;
        }
      }
    }
    v72 = 0LL;
    v28 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v87, 0LL);
    DisplayModeList = v28;
    v63 = v28;
    if ( v28 < 0 )
    {
      v64 = 7;
      WdLogSingleEntry4(7LL, v28, Current, v74[0], v19);
      LODWORD(Current) = v74[1];
    }
    else
    {
      v30 = (ADAPTER_DISPLAY *)*((_QWORD *)v19 + 365);
      Current = (struct _KTHREAD **)v74[1];
      if ( v74[1] < *((_DWORD *)v30 + 24) && ADAPTER_DISPLAY::IsPartOfDesktop(v30, v74[1]) )
      {
        *(_QWORD *)&v81.hAdapter = *(_QWORD *)v74;
        *(&v81.ModeCount + 1) = HIDWORD(v75);
        v81.ModeCount = 0;
        v81.pModeList = 0LL;
        DisplayModeList = DxgkpGetDisplayModeList(
                            v19,
                            (struct COREADAPTERACCESS *)v87,
                            0,
                            &v81,
                            (const struct _D3DKMT_DISPLAYMODE **)&v72,
                            v62);
        v63 = DisplayModeList;
        v64 = 7;
        if ( DisplayModeList >= 0 )
        {
          ModeCount = v81.ModeCount;
          pModeList = v81.pModeList;
          v79 = v81.pModeList;
        }
      }
      else
      {
        DisplayModeList = -1071774972;
        v63 = -1071774972;
        v64 = 7;
        WdLogSingleEntry3(7LL, -1071774972LL, v19, Current);
      }
    }
    if ( v9 && v86 )
    {
      KeUnstackDetachProcess(&ApcState);
      v86 = 0;
    }
    if ( DisplayModeList >= 0 )
    {
      v31 = ModeCount;
      if ( *((_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(*((ADAPTER_DISPLAY **)v19 + 365), (unsigned int)Current) + 19) )
      {
        v32 = 1;
        v58 = 0;
        while ( v58 < ModeCount )
        {
          v59 = v58++;
          v60 = *((_DWORD *)&pModeList[v59].Flags + 1);
          v61 = v31 - 1;
          if ( (v60 & 0x10) == 0 )
            v61 = v31;
          v31 = v61;
        }
      }
      else
      {
        v32 = 0;
      }
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v89 = 31;
      v90 = 119;
      v91 = 113;
      v33 = (v72 != 0LL) + v31;
      if ( *((_QWORD *)v19 + 366) )
      {
        v34 = 1;
        v64 = 1;
      }
      else
      {
        v34 = 7;
      }
      v35 = v33 * v34;
      v36 = *(_QWORD *)&v74[2];
      if ( *(_QWORD *)&v74[2] )
      {
        if ( (unsigned int)v75 < v35 )
        {
          DisplayModeList = -1073741789;
          v63 = -1073741789;
        }
        else
        {
          v68 = 0;
          v78 = *(_QWORD *)&v74[2];
          v37 = 0LL;
          while ( 1 )
          {
            v71 = v37;
            if ( (unsigned int)v37 >= v34 )
              break;
            for ( i = 0; ; ++i )
            {
              v70 = i;
              v40 = v36;
              if ( i >= ModeCount )
                break;
              v41 = i;
              if ( v32 )
              {
                v33 = *((unsigned int *)&pModeList[v41].Flags + 1);
                if ( (v33 & 0x10) != 0 )
                  continue;
              }
              v42 = (_DWORD *)v36;
              v84 = v36;
              v36 += 44LL;
              v78 = v36;
              v43 = si128.m128i_i32[v37];
              if ( v36 > MmUserProbeAddress || v36 <= (unsigned __int64)v42 )
                *(_BYTE *)MmUserProbeAddress = 0;
              *(_OWORD *)v40 = *(_OWORD *)&pModeList[v41].Width;
              *(_OWORD *)(v40 + 16) = *(_OWORD *)&pModeList[v41].RefreshRate.Numerator;
              *(_QWORD *)(v40 + 32) = *(_QWORD *)&pModeList[v41].DisplayFixedOutput;
              v33 = *((unsigned int *)&pModeList[v41].Flags + 1);
              *(_DWORD *)(v40 + 40) = v33;
              if ( pModeList[v41].RefreshRate.Numerator == -2 && pModeList[v41].RefreshRate.Denominator == -2 )
              {
                v42[4] = 64;
                v42[5] = 1;
                v42[3] = 64;
              }
              if ( v43 != 21 )
                v42[2] = v43;
            }
            if ( v72 )
            {
              v78 = v36 + 44;
              lambda_4ad224167d91228276911ab76f1e9490_::operator()(v33, v36, v72, si128.m128i_u32[v37]);
            }
            v37 = (unsigned int)(v37 + 1);
            v34 = v64;
          }
        }
      }
      v38 = (_DWORD *)(v83 + 16);
      if ( v83 + 16 >= MmUserProbeAddress )
        v38 = (_DWORD *)MmUserProbeAddress;
      *v38 = v35;
    }
    if ( v62[0] )
      operator delete(pModeList);
    v44 = v73;
    if ( v73 )
    {
      v45 = DXGGLOBAL::GetGlobal();
      DXGSESSIONMGR::ReleaseConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)v45 + 118), v44);
    }
    else
    {
      DxgkReleaseSessionModeChangeLock();
    }
    if ( v86 )
    {
      KeUnstackDetachProcess(&ApcState);
      v86 = 0;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v87);
    if ( v76 )
    {
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v76 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v76 + 2), v76);
      DisplayModeList = v63;
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
    if ( v67 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v46, &EventProfilerExit, v47, v65);
    }
    return (unsigned int)DisplayModeList;
  }
  WdLogSingleEntry1(2LL, v57);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to acquire current session mode change shared lock, returning 0x%I64x.",
    v15,
    0LL,
    0LL,
    0LL,
    0LL);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v87);
  v54 = v76;
  if ( v76 )
LABEL_79:
    DXGADAPTER::ReleaseReference(v54);
LABEL_80:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65);
  if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v55, &EventProfilerExit, v56, v65);
  return (unsigned int)v15;
}
