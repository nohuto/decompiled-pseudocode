__int64 __fastcall DxgkOpenAdapterFromLuidImpl(struct _D3DKMT_OPENADAPTERFROMLUID *a1, char a2, __int64 a3)
{
  ULONG64 v5; // rcx
  struct _D3DKMT_OPENADAPTERFROMLUID *v6; // rax
  DXGPROCESS *Current; // rax
  struct DXGPROCESS *v8; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v10; // rax
  struct DXGADAPTER *v11; // rbx
  ADAPTER_RENDER *v12; // rcx
  unsigned int v13; // esi
  _DWORD *p_hAdapter; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // r8
  bool v22; // sf
  __int64 v23; // rcx
  __int64 v24; // r8
  LUID AdapterLuid; // [rsp+50h] [rbp-58h]
  unsigned int hAdapter; // [rsp+58h] [rbp-50h] BYREF
  int v27; // [rsp+60h] [rbp-48h] BYREF
  __int64 v28; // [rsp+68h] [rbp-40h]
  char v29; // [rsp+70h] [rbp-38h]
  _BYTE v30[8]; // [rsp+78h] [rbp-30h] BYREF
  struct DXGADAPTER *v31; // [rsp+80h] [rbp-28h]
  char v32; // [rsp+88h] [rbp-20h]
  unsigned __int64 v33; // [rsp+C0h] [rbp+18h] BYREF

  v27 = -1;
  v28 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v29 = 1;
    v27 = 2082;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2082);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 2082);
  if ( a2 )
  {
    v5 = MmUserProbeAddress;
    v6 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v6 = (struct _D3DKMT_OPENADAPTERFROMLUID *)MmUserProbeAddress;
    AdapterLuid = v6->AdapterLuid;
    hAdapter = v6->hAdapter;
  }
  else
  {
    AdapterLuid = a1->AdapterLuid;
    hAdapter = a1->hAdapter;
  }
  hAdapter = 0;
  Current = DXGPROCESS::GetCurrent(v5);
  v8 = Current;
  if ( !Current )
  {
    v19 = -1073741811;
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
LABEL_31:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 )
    {
      v22 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_33;
    }
    return v19;
  }
  if ( a2 )
  {
    if ( DXGPROCESS::IsRemoteConnection(Current) )
    {
      v18 = (*(__int64 (__fastcall **)(LUID))(*((_QWORD *)v8 + 11) + 448LL))(AdapterLuid);
      v19 = v18;
      if ( v18 < 0 )
      {
        WdLogSingleEntry1(3LL, v18);
        goto LABEL_31;
      }
    }
  }
  Global = DXGGLOBAL::GetGlobal();
  v10 = DXGGLOBAL::ReferenceAdapterByLuid(Global, AdapterLuid, &v33);
  v11 = v10;
  if ( !v10 )
  {
    v19 = -1073741811;
    WdLogSingleEntry3(3LL, AdapterLuid.LowPart, AdapterLuid.HighPart, -1073741811LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 )
    {
      LOBYTE(v20) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v22 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_33:
      if ( v22 )
        McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v27);
    }
    return v19;
  }
  if ( (*((_DWORD *)v10 + 698) & 4) != 0 )
  {
    WdLogSingleEntry1(3LL, v10);
    DXGADAPTER::ReleaseReference(v11);
  }
  else
  {
    v31 = v10;
    v32 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
    if ( *((_DWORD *)v11 + 50) != 1
      || *((_BYTE *)v11 + 2833)
      || (v12 = (ADAPTER_RENDER *)*((_QWORD *)v11 + 366)) == 0LL
      || !ADAPTER_RENDER::IsProcessGpuAccessBlocked(v12, v8) )
    {
      v13 = DXGADAPTER::CreateHandle(v11, v8, &hAdapter);
      DXGADAPTER::ReleaseReference(v11);
      if ( a2 )
      {
        p_hAdapter = &a1->hAdapter;
        if ( (unsigned __int64)&a1->hAdapter >= MmUserProbeAddress )
          p_hAdapter = (_DWORD *)MmUserProbeAddress;
        *p_hAdapter = hAdapter;
      }
      else
      {
        a1->hAdapter = hAdapter;
      }
      if ( v32 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
      if ( v29 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v27);
      }
      return v13;
    }
    WdLogSingleEntry2(4LL, v11, v8);
    DXGADAPTER::ReleaseReference(v11);
    if ( v32 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v30);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v27);
  return 3221225506LL;
}
