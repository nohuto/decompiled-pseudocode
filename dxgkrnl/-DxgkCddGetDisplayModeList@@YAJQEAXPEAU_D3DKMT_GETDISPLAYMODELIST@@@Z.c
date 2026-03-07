__int64 __fastcall DxgkCddGetDisplayModeList(
        struct DXGADAPTER *this,
        struct _D3DKMT_GETDISPLAYMODELIST *a2,
        __int64 a3)
{
  struct DXGADAPTER *v4; // rsi
  __int64 v5; // rcx
  D3DKMT_HANDLE v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // edx
  int PairingAdapters; // eax
  int v13; // ebx
  struct DXGADAPTER *v14; // r14
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  D3DKMT_HANDLE hAdapter; // ebx
  __int64 CurrentProcess; // rax
  int DisplayModeList; // eax
  UINT v21; // ecx
  UINT ModeCount; // eax
  struct _D3DKMT_DISPLAYMODE *v23; // r8
  D3DKMT_DISPLAYMODE *pModeList; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned __int8 v29; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v30[7]; // [rsp+51h] [rbp-AFh] BYREF
  struct _D3DKMT_DISPLAYMODE *v31; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v32; // [rsp+60h] [rbp-A0h] BYREF
  struct _D3DKMT_GETDISPLAYMODELIST Src; // [rsp+68h] [rbp-98h] BYREF
  int v34; // [rsp+80h] [rbp-80h] BYREF
  __int64 v35; // [rsp+88h] [rbp-78h]
  char v36; // [rsp+90h] [rbp-70h]
  unsigned __int64 v37; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v38[144]; // [rsp+A0h] [rbp-60h] BYREF

  v34 = -1;
  v4 = this;
  v35 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v36 = 1;
    v34 = 3004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 3004);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v34, 3004);
  v29 = 0;
  memset(&Src, 0, sizeof(Src));
  if ( v4 )
  {
    VidPnSourceId = a2->VidPnSourceId;
    v32 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(v4, VidPnSourceId, 0LL, 0LL, &v32, &v37, 0);
    v13 = PairingAdapters;
    if ( PairingAdapters >= 0 )
    {
      v14 = v32;
      if ( !v32 )
      {
        WdLogSingleEntry1(1LL, 1305LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 1305LL, 0LL, 0LL, 0LL, 0LL);
      }
      DxgkWaitForMonitorEventDoneInternal(v14);
      v30[0] = 0;
      v15 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v30, 0);
      v4 = (struct DXGADAPTER *)v15;
      if ( v15 >= 0 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v38, v14, 0LL);
        DXGADAPTER::ReleaseReference(v14);
        v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v38, 0LL);
        v4 = (struct DXGADAPTER *)v16;
        if ( v16 >= 0 )
        {
          if ( !*((_QWORD *)v14 + 365) )
          {
            WdLogSingleEntry1(1LL, 1345LL);
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
              1345LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          Src.VidPnSourceId = a2->VidPnSourceId;
          v31 = 0LL;
          DisplayModeList = DxgkpGetDisplayModeList(
                              v14,
                              (struct COREADAPTERACCESS *)v38,
                              0,
                              &Src,
                              (const struct _D3DKMT_DISPLAYMODE **)&v31,
                              &v29);
          LODWORD(v4) = DisplayModeList;
          if ( DisplayModeList >= 0 )
          {
            v21 = (v31 != 0LL) + Src.ModeCount;
            if ( a2->pModeList )
            {
              ModeCount = a2->ModeCount;
              if ( ModeCount >= v21 )
              {
                memmove(a2->pModeList, Src.pModeList, 44LL * Src.ModeCount);
                v23 = v31;
                if ( v31 )
                {
                  pModeList = a2->pModeList;
                  v25 = Src.ModeCount;
                  *(_OWORD *)&pModeList[v25].Width = *(_OWORD *)&v31->Width;
                  *(_OWORD *)&pModeList[v25].RefreshRate.Numerator = *(_OWORD *)&v23->RefreshRate.Numerator;
                  *(_QWORD *)&pModeList[v25].DisplayFixedOutput = *(_QWORD *)&v23->DisplayFixedOutput;
                  *((_DWORD *)&pModeList[v25].Flags + 1) = *((_DWORD *)&v23->Flags + 1);
                }
              }
              else
              {
                WdLogSingleEntry2(3LL, ModeCount, v21);
                LODWORD(v4) = -1073741789;
              }
            }
            else
            {
              a2->ModeCount = v21;
            }
            if ( v29 )
            {
              operator delete(Src.pModeList);
              Src.pModeList = 0LL;
            }
          }
          else
          {
            WdLogSingleEntry2(7LL, a2->VidPnSourceId, DisplayModeList);
          }
        }
        else
        {
          hAdapter = a2->hAdapter;
          CurrentProcess = PsGetCurrentProcess(v17);
          WdLogSingleEntry4(4LL, v4, CurrentProcess, hAdapter, v14);
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
      }
      else
      {
        WdLogSingleEntry1(2LL, v15);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to acquire session mode change shared lock (Status = 0x%I64x)",
          (__int64)v4,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( v30[0] )
        DxgkReleaseSessionModeChangeLock();
    }
    else
    {
      WdLogSingleEntry3(4LL, v4, a2->VidPnSourceId, PairingAdapters);
      LODWORD(v4) = v13;
    }
  }
  else
  {
    v6 = a2->hAdapter;
    v7 = PsGetCurrentProcess(v5);
    LODWORD(v4) = -1073741811;
    WdLogSingleEntry3(2LL, -1073741811LL, v7, v6);
    v8 = a2->hAdapter;
    v10 = PsGetCurrentProcess(v9);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Status=0x%I64x EPROCESS=0x%I64x Invalid hAdapter (0x%I64x) specified",
      -1073741811LL,
      v10,
      v8,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
  if ( v36 )
  {
    LOBYTE(v26) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v34);
  }
  return (unsigned int)v4;
}
