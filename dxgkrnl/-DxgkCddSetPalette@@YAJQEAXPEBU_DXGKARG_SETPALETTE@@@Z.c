__int64 __fastcall DxgkCddSetPalette(struct DXGADAPTER *this, const struct _DXGKARG_SETPALETTE *a2, __int64 a3)
{
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // edx
  __int64 v8; // r12
  int PairingAdapters; // eax
  __int64 v10; // rdi
  __int64 *v11; // rbx
  ADAPTER_DISPLAY **v12; // rsi
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGADAPTER *v18; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGADAPTER *v19; // [rsp+58h] [rbp-A8h] BYREF
  int v20; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+68h] [rbp-98h]
  char v22; // [rsp+70h] [rbp-90h]
  unsigned __int64 v23; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v24; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v25[144]; // [rsp+90h] [rbp-70h] BYREF

  v20 = -1;
  v21 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v22 = 1;
    v20 = 3010;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 3010);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 3010);
  Current = DXGPROCESS::GetCurrent(v5);
  VidPnSourceId = a2->VidPnSourceId;
  v8 = (__int64)Current;
  v19 = 0LL;
  v18 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(this, VidPnSourceId, &v19, &v24, &v18, &v23, 0);
  v10 = PairingAdapters;
  if ( PairingAdapters >= 0 )
  {
    v11 = (__int64 *)v19;
    v12 = (ADAPTER_DISPLAY **)v18;
    if ( !v19 || !v18 )
    {
      WdLogSingleEntry1(1LL, 2364LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pRenderAdapter != NULL) && (pDisplayAdapter != NULL)",
        2364LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v25,
      (struct DXGADAPTER *const)v11,
      (struct DXGADAPTER *const)v12);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v11);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v12);
    v13 = COREADAPTERACCESS::AcquireExclusive((__int64)v25, 2LL);
    LODWORD(v10) = v13;
    if ( v13 >= 0 )
    {
      if ( !v11[366] )
      {
        WdLogSingleEntry1(1LL, 2381LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pRenderAdapter->IsRenderAdapter()",
          2381LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( !v12[365] )
      {
        WdLogSingleEntry1(1LL, 2382LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
          2382LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      ADAPTER_RENDER::FlushScheduler(v11[366], 6u, 0xFFFFFFFF, 0);
      v10 = (int)ADAPTER_DISPLAY::DdiSetPalette(v12[365], a2, v14);
      ADAPTER_RENDER::FlushScheduler(v11[366], 7u, 0xFFFFFFFF, 0);
      if ( (int)v10 < 0 )
      {
        WdLogSingleEntry4(2LL, v10, v12, a2->VidPnSourceId, v8);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x DdiSetPalette() failed 0x%I64x 0x%I64x 0x%I64x",
          v10,
          (__int64)v12,
          a2->VidPnSourceId,
          v8,
          0LL);
      }
    }
    else
    {
      WdLogSingleEntry4(4LL, v13, v11, v12, v8);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v25);
  }
  else
  {
    WdLogSingleEntry2(2LL, this, PairingAdapters);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get bound render adapter from Adapter 0x%I64x in DxgkCddSetPalette (ntStatus = 0x%I64x).",
      (__int64)this,
      v10,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v20);
  return (unsigned int)v10;
}
