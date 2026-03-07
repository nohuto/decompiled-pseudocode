char __fastcall DxgkNeedToEnableCddPrimary(struct DXGADAPTER *this, unsigned int a2)
{
  char v2; // bl
  __int64 v3; // rsi
  int PairingAdapters; // eax
  ADAPTER_DISPLAY **v7; // rdi
  struct DXGADAPTER *v8; // [rsp+50h] [rbp-C8h] BYREF
  unsigned __int64 v9; // [rsp+58h] [rbp-C0h] BYREF
  _BYTE v10[144]; // [rsp+60h] [rbp-B8h] BYREF

  v2 = 0;
  v3 = a2;
  if ( !this )
  {
    WdLogSingleEntry1(1LL, 8033LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL != pAdapterIn", 8033LL, 0LL, 0LL, 0LL, 0LL);
  }
  v8 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(this, v3, 0LL, 0LL, &v8, &v9, 0);
  if ( PairingAdapters >= 0 )
  {
    v7 = (ADAPTER_DISPLAY **)v8;
    if ( !v8 )
    {
      WdLogSingleEntry1(1LL, 8063LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDisplayAdapter != NULL", 8063LL, 0LL, 0LL, 0LL, 0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v10, (struct DXGADAPTER *const)v7, 0LL);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v7);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v10, 0LL) >= 0 )
    {
      if ( !v7[365] )
      {
        WdLogSingleEntry1(1LL, 8077LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pDisplayAdapter->IsDisplayAdapter()",
          8077LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( !ADAPTER_DISPLAY::GetCddPrimaryAllocation(v7[365], v3, 0)
        && !ADAPTER_DISPLAY::GetVidPnSourceOwner(v7[365], v3) )
      {
        v2 = 1;
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v10);
    return v2;
  }
  else
  {
    WdLogSingleEntry3(4LL, this, v3, PairingAdapters);
    return 0;
  }
}
