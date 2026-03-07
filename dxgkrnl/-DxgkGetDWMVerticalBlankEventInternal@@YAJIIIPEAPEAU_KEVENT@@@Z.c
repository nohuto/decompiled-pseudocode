__int64 __fastcall DxgkGetDWMVerticalBlankEventInternal(__int64 a1, unsigned int a2, __int64 a3, struct _KEVENT **a4)
{
  __int64 v4; // r12
  __int64 v5; // rsi
  __int64 v6; // r14
  struct DXGDEVICE *v7; // rbx
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v10; // rdi
  struct DXGADAPTER *v11; // r15
  struct DXGDEVICE *v12; // r14
  int PairingAdapters; // eax
  __int64 v14; // rsi
  struct DXGADAPTER *v15; // r13
  ADAPTER_DISPLAY **v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v21; // [rsp+54h] [rbp-ACh]
  struct DXGDEVICE *v22; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGADAPTER *v23; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGDEVICE *v24; // [rsp+68h] [rbp-98h] BYREF
  struct DXGADAPTER *v25; // [rsp+70h] [rbp-90h] BYREF
  struct DXGADAPTER *v26; // [rsp+78h] [rbp-88h] BYREF
  struct _KEVENT **v27; // [rsp+80h] [rbp-80h]
  int v28; // [rsp+88h] [rbp-78h] BYREF
  __int64 v29; // [rsp+90h] [rbp-70h]
  char v30; // [rsp+98h] [rbp-68h]
  unsigned __int64 v31; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v32; // [rsp+A8h] [rbp-58h] BYREF
  DXGADAPTER *v33; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v34[144]; // [rsp+C0h] [rbp-40h] BYREF

  v28 = -1;
  v4 = (unsigned int)a3;
  v5 = a2;
  v27 = a4;
  v21 = a3;
  v6 = (unsigned int)a1;
  v29 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v30 = 1;
    v28 = 2192;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2192);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v28, 2192);
  v7 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  Current = DXGPROCESS::GetCurrent(v8);
  v10 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    LODWORD(v14) = -1073741811;
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
    goto LABEL_23;
  }
  if ( (*((_DWORD *)Current + 106) & 4) == 0 )
  {
    LODWORD(v14) = -1073741790;
    WdLogSingleEntry1(3LL, -1073741790LL);
    goto LABEL_23;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v33, v6, (struct _KTHREAD **)Current, &v23, 1);
  v11 = v23;
  if ( v23 )
  {
    v12 = 0LL;
    if ( (_DWORD)v5 )
    {
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v24, v5, v10, &v22);
      if ( !v22 )
      {
        WdLogSingleEntry2(3LL, v11, v5);
        if ( v24 && _InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v24 + 2), v24);
        LODWORD(v14) = -1073741811;
        goto LABEL_21;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v22 + 8);
      v7 = v22;
      v12 = v22;
      if ( v24 )
      {
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v24 + 2), v24);
        v7 = v22;
      }
      v11 = v23;
    }
    v26 = 0LL;
    v25 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(v11, v4, &v26, &v31, &v25, &v32, 0);
    v14 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      WdLogSingleEntry3(2LL, v11, v4, PairingAdapters);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x (Status 0x%I64x)!",
        (__int64)v11,
        v4,
        v14,
        0LL,
        0LL);
      goto LABEL_20;
    }
    v15 = v26;
    v16 = (ADAPTER_DISPLAY **)v25;
    if ( !v26 || !v25 )
    {
      WdLogSingleEntry1(1LL, 6848LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pRenderAdapter != NULL) && (pDisplayAdapter != NULL)",
        6848LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( v21 >= *((_DWORD *)v16[365] + 24) )
    {
      LODWORD(v14) = -1073741811;
      WdLogSingleEntry2(2LL, v21, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
        v21,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_20;
    }
    if ( v12 && (v15 != *(struct DXGADAPTER **)(*((_QWORD *)v7 + 2) + 16LL) || v16 != *((ADAPTER_DISPLAY ***)v7 + 235)) )
    {
      WdLogSingleEntry2(3LL, v11, a2);
      LODWORD(v14) = -1073741811;
      goto LABEL_20;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v34, v15, (struct DXGADAPTER *const)v16);
    DXGADAPTER::ReleaseReference(v15);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v16);
    LODWORD(v14) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v34, 0LL);
    if ( (int)v14 >= 0 )
    {
      if ( !*((_QWORD *)v15 + 366) )
      {
        WdLogSingleEntry1(1LL, 6883LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pRenderAdapter->IsRenderAdapter()",
          6883LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( !v16[365] )
      {
        WdLogSingleEntry1(1LL, 6884LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
          6884LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( a2 )
      {
        if ( *((_DWORD *)v7 + 152) != 1 )
        {
          LODWORD(v14) = -1073741130;
          goto LABEL_19;
        }
        v16 = (ADAPTER_DISPLAY **)v25;
      }
      ADAPTER_DISPLAY::GetVBlankEvent(v16[365], v21, v27);
      COREADAPTERACCESS::Release((COREADAPTERACCESS *)v34);
    }
LABEL_19:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
LABEL_20:
    if ( v12 && _InterlockedExchangeAdd64((volatile signed __int64 *)v12 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v12 + 2), v12);
    goto LABEL_21;
  }
  LODWORD(v14) = -1073741811;
  WdLogSingleEntry2(3LL, v6, -1073741811LL);
LABEL_21:
  if ( v33 )
    DXGADAPTER::ReleaseReference(v33);
LABEL_23:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( v30 )
  {
    LOBYTE(v17) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v28);
  }
  return (unsigned int)v14;
}
