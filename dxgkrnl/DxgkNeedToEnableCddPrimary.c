/*
 * XREFs of DxgkNeedToEnableCddPrimary @ 0x1C02CE440
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C000B3E4 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z @ 0x1C0176278 (-GetCddPrimaryAllocation@ADAPTER_DISPLAY@@QEBAPEAVDXGADAPTERALLOCATION@@IE@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0190FF0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 */

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
