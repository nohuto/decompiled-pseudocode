__int64 __fastcall DxgkQueryModeListCacheLuid(struct _LUID *a1, unsigned int a2, struct _LUID *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rbx
  const wchar_t *v7; // r9
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v10; // rsi
  __int64 PairingAdapters; // rdi
  struct DXGADAPTER *v12; // rsi
  __int64 v13; // rcx
  struct DXGADAPTER *v14; // [rsp+50h] [rbp-D8h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp-D0h] BYREF
  _BYTE v16[144]; // [rsp+60h] [rbp-C8h] BYREF

  v3 = a2;
  if ( !a1 )
  {
    v6 = 8155LL;
    WdLogSingleEntry1(2LL, 8155LL);
    v7 = L"Caller specified a NULL pointer to DxgkAdapter LUID in DxgkQueryModeListCacheLuid function.";
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v7, v6, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( !a3 )
  {
    v6 = 8162LL;
    WdLogSingleEntry1(2LL, 8162LL);
    v7 = L"Caller specified a NULL pointer in pModeListCacheLuid in DxgkQueryModeListCacheLuid function.";
    goto LABEL_3;
  }
  Global = DXGGLOBAL::GetGlobal();
  v10 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, (unsigned __int64 *)&v14);
  if ( !v10 )
  {
    WdLogSingleEntry2(2LL, a1->HighPart, a1->LowPart);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkQueryModeListCacheLuid function.",
      a1->HighPart,
      a1->LowPart,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v14 = 0LL;
  PairingAdapters = (int)DxgkpGetPairingAdapters(v10, v3, 0LL, 0LL, &v14, &v15, 0);
  DXGADAPTER::ReleaseReference(v10);
  if ( (int)PairingAdapters >= 0 )
  {
    v12 = v14;
    if ( !v14 )
    {
      WdLogSingleEntry1(1LL, 8209LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 8209LL, 0LL, 0LL, 0LL, 0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v16, v12, 0LL);
    PairingAdapters = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v16, 0LL);
    DXGADAPTER::ReleaseReference(v12);
    if ( (int)PairingAdapters >= 0 )
    {
      if ( !*((_QWORD *)v12 + 365) )
      {
        WdLogSingleEntry1(1LL, 8231LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
          8231LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v13 = *((_QWORD *)v12 + 365);
      if ( (unsigned int)v3 < *(_DWORD *)(v13 + 96) )
      {
        LODWORD(PairingAdapters) = ADAPTER_DISPLAY::QueryModeListCacheLuid((DXGADAPTER **)v13, v3, a3);
      }
      else
      {
        WdLogSingleEntry2(2LL, v3, v12);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Caller specified an invalid VidPnSourceId 0x%I64x on DxgAdapter 0x%I64x.",
          v3,
          (__int64)v12,
          0LL,
          0LL,
          0LL);
        LODWORD(PairingAdapters) = -1073741811;
      }
    }
    else
    {
      WdLogSingleEntry2(2LL, v12, PairingAdapters);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire shared lock on DxgkAdapter 0x%I64x (Status = 0x%I64x).",
        (__int64)v12,
        PairingAdapters,
        0LL,
        0LL,
        0LL);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v16);
  }
  else
  {
    WdLogSingleEntry3(4LL, 0LL, v3, PairingAdapters);
  }
  return (unsigned int)PairingAdapters;
}
