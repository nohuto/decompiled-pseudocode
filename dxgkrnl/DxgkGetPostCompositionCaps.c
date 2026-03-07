__int64 __fastcall DxgkGetPostCompositionCaps(ULONG64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v4; // rax
  struct _KTHREAD **Current; // rax
  struct DXGADAPTER *v6; // r14
  int PairingAdapters; // esi
  struct DXGADAPTER *v8; // rbx
  struct DXGADAPTER *v9; // rsi
  _DWORD *v10; // rdx
  _DWORD *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  bool v17; // sf
  __int64 v18; // rbx
  int v19; // [rsp+50h] [rbp-118h] BYREF
  __int64 v20; // [rsp+58h] [rbp-110h]
  char v21; // [rsp+60h] [rbp-108h]
  struct DXGADAPTER *v22; // [rsp+68h] [rbp-100h] BYREF
  unsigned int v23[4]; // [rsp+70h] [rbp-F8h] BYREF
  struct DXGADAPTER *v24; // [rsp+80h] [rbp-E8h] BYREF
  DXGADAPTER *v25; // [rsp+88h] [rbp-E0h] BYREF
  unsigned __int64 v26; // [rsp+98h] [rbp-D0h] BYREF
  unsigned __int64 v27; // [rsp+A0h] [rbp-C8h] BYREF
  _BYTE v28[144]; // [rsp+B0h] [rbp-B8h] BYREF

  v19 = -1;
  v20 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v21 = 1;
    v19 = 2146;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2146);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 2146);
  v4 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v23 = *v4;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
    if ( !v21 )
      return 3221225485LL;
    v17 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_39:
    if ( v17 )
      McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v19);
    return 3221225485LL;
  }
  v22 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v25, v23[0], Current, &v22, 1);
  v6 = v22;
  if ( !v22 )
  {
    WdLogSingleEntry2(3LL, v23[0], -1073741811LL);
    if ( v25 )
      DXGADAPTER::ReleaseReference(v25);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
    if ( !v21 )
      return 3221225485LL;
    LOBYTE(v15) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v17 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_39;
  }
  v22 = 0LL;
  v24 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v6, v23[1], &v22, &v26, &v24, &v27, 0);
  if ( PairingAdapters < 0 )
  {
    v8 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(v6, v23[1], &v22, &v26, 0LL, 0LL, 0);
  }
  else
  {
    v8 = v24;
  }
  if ( PairingAdapters < 0 )
  {
    v18 = v23[1];
    WdLogSingleEntry2(2LL, v6, v23[1]);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x!",
      (__int64)v6,
      v18,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    if ( v8 && !*((_QWORD *)v8 + 365) )
    {
      WdLogSingleEntry1(1LL, 11638LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pDisplayAdapter == NULL) || (pDisplayAdapter->IsDisplayAdapter())",
        11638LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v9 = v22;
    if ( !v22 || !*((_QWORD *)v22 + 366) )
    {
      WdLogSingleEntry1(1LL, 11640LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pRenderAdapter != NULL) && (pRenderAdapter->IsRenderAdapter())",
        11640LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v28, v9, v8);
    DXGADAPTER::ReleaseReference(v9);
    if ( v8 )
      DXGADAPTER::ReleaseReference(v8);
    PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v28, 0LL);
    if ( PairingAdapters >= 0 )
    {
      if ( !v8 || (**((_DWORD **)v8 + 353) & 0x800000) != 0 )
      {
        v23[2] = 1065353216;
        v23[3] = 1065353216;
      }
      else
      {
        PairingAdapters = ADAPTER_DISPLAY::GetPostCompositionCaps(
                            *((ADAPTER_DISPLAY **)v8 + 365),
                            v23[1],
                            (float *)&v23[2],
                            (float *)&v23[3]);
      }
      v10 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v10 = (_DWORD *)MmUserProbeAddress;
      *v10 = v23[2];
      v11 = (_DWORD *)(a1 + 12);
      if ( a1 + 12 >= MmUserProbeAddress )
        v11 = (_DWORD *)MmUserProbeAddress;
      *v11 = v23[3];
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v28);
  }
  if ( v25 )
    DXGADAPTER::ReleaseReference(v25);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v19);
  }
  return (unsigned int)PairingAdapters;
}
