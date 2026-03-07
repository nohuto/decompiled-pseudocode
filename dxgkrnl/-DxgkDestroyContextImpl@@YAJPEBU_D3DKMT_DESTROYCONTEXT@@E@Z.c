__int64 __fastcall DxgkDestroyContextImpl(const struct _D3DKMT_DESTROYCONTEXT *a1, char a2, __int64 a3)
{
  const struct _D3DKMT_DESTROYCONTEXT *v4; // rbx
  struct DXGPROCESS *Current; // r14
  D3DKMT_HANDLE hContext; // edi
  unsigned int v7; // esi
  __int64 v8; // r8
  int v9; // edx
  __int64 v10; // rbx
  __int64 v11; // r8
  int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rcx
  __int64 v17; // r8
  bool v18; // sf
  _QWORD v19[2]; // [rsp+50h] [rbp-78h] BYREF
  int v20; // [rsp+60h] [rbp-68h] BYREF
  __int64 v21; // [rsp+68h] [rbp-60h]
  char v22; // [rsp+70h] [rbp-58h]
  _BYTE v23[24]; // [rsp+78h] [rbp-50h] BYREF
  _BYTE v24[32]; // [rsp+90h] [rbp-38h] BYREF

  v4 = a1;
  v20 = -1;
  v21 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2040;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2040);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 2040);
  Current = DXGPROCESS::GetCurrent();
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 )
    {
      v18 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_32;
    }
    return 3221225485LL;
  }
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_DESTROYCONTEXT *)MmUserProbeAddress;
    hContext = v4->hContext;
  }
  else
  {
    hContext = v4->hContext;
  }
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v23, Current);
  v7 = (hContext >> 6) & 0xFFFFFF;
  if ( v7 < *((_DWORD *)Current + 74) )
  {
    v8 = *((_QWORD *)Current + 35);
    if ( ((hContext >> 25) & 0x60) == (*(_BYTE *)(v8 + 16LL * v7 + 8) & 0x60)
      && (*(_DWORD *)(v8 + 16LL * v7 + 8) & 0x2000) == 0 )
    {
      v9 = *(_DWORD *)(v8 + 16LL * v7 + 8) & 0x1F;
      if ( v9 )
      {
        if ( v9 == 7 )
        {
          v10 = *(_QWORD *)(v8 + 16LL * v7);
          goto LABEL_17;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v10 = 0LL;
LABEL_17:
  if ( !v10 )
  {
    WdLogSingleEntry2(3LL, hContext, -1073741811LL);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 )
    {
      LOBYTE(v16) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v18 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_32:
      if ( v18 )
        McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v20);
      return 3221225485LL;
    }
    return 3221225485LL;
  }
  if ( v7 < *((_DWORD *)Current + 74) )
  {
    v11 = *((_QWORD *)Current + 35);
    v12 = *(_DWORD *)(v11 + 16LL * v7 + 8);
    if ( ((hContext >> 25) & 0x60) == (*(_BYTE *)(v11 + 16LL * v7 + 8) & 0x60)
      && (v12 & 0x2000) == 0
      && (v12 & 0x1F) != 0 )
    {
      *(_DWORD *)(v11 + 16LL * ((hContext >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23);
  if ( (*(_DWORD *)(v10 + 404) & 0x10) != 0 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
      (DXGDEVICEACCESSLOCKEXCLUSIVE *)v19,
      *(struct DXGDEVICE **)(v10 + 16));
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v24,
      (struct _KTHREAD **)(*(_QWORD *)(v10 + 16) + 144LL));
    DXGCONTEXT::DestroyAllHwQueues((DXGCONTEXT *)v10, (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)v19);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v24);
    if ( v19[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v19);
  }
  DXGCONTEXT::ReleaseReference((DXGCONTEXT *)v10);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v20);
  }
  return 0LL;
}
