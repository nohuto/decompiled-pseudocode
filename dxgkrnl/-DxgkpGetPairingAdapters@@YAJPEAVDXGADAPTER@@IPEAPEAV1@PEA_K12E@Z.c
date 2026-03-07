__int64 __fastcall DxgkpGetPairingAdapters(
        struct DXGADAPTER *this,
        unsigned int a2,
        struct DXGADAPTER **a3,
        unsigned __int64 *a4,
        struct DXGADAPTER **a5,
        unsigned __int64 *a6,
        unsigned __int8 a7)
{
  __int64 v7; // r15
  DXGADAPTER *v10; // rcx
  struct DXGADAPTER *v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // r15
  unsigned int v15; // edi
  struct DXGGLOBAL *Global; // rax
  int IndirectDisplayPairedAdapter; // eax
  __int64 v19; // r13
  DXGADAPTER *v20; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+58h] [rbp-40h]
  _BYTE v22[8]; // [rsp+60h] [rbp-38h] BYREF
  char v23; // [rsp+68h] [rbp-30h]
  unsigned __int64 v24; // [rsp+A0h] [rbp+8h]

  v7 = a2;
  v10 = 0LL;
  v20 = 0LL;
  v12 = 0LL;
  if ( !this )
  {
    WdLogSingleEntry1(1LL, 8283LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_pAdapter != NULL", 8283LL, 0LL, 0LL, 0LL, 0LL);
    v10 = v20;
  }
  v13 = *((_QWORD *)this + 365);
  if ( v13 )
  {
    if ( (unsigned int)v7 >= *(_DWORD *)(v13 + 96) )
    {
      v15 = -1073741811;
      WdLogSingleEntry2(2LL, v7, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid VidPnSourceId (0x%I64x) specified, returning 0x%I64x",
        v7,
        -1073741811LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_22;
    }
    v12 = this;
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    v10 = v20;
    v14 = -1LL;
  }
  else
  {
    if ( a5 )
    {
      WdLogSingleEntry2(4LL, this, -1073741637LL);
      v15 = -1073741637;
      goto LABEL_22;
    }
    v14 = v24;
  }
  if ( !a3 )
  {
LABEL_10:
    if ( a5 )
    {
      *a5 = v12;
      v12 = 0LL;
      *a6 = v14;
    }
    v15 = 0;
    goto LABEL_13;
  }
  if ( *((_QWORD *)this + 366) )
  {
    v20 = this;
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    v21 = -1LL;
LABEL_9:
    v10 = 0LL;
    *a3 = v20;
    *a4 = v21;
    v20 = 0LL;
    goto LABEL_10;
  }
  if ( (*((_DWORD *)this + 109) & 0x100) != 0 )
  {
    IndirectDisplayPairedAdapter = DxgkpGetIndirectDisplayPairedAdapter(this, a7, (struct DXGADAPTER_REFERENCE *)&v20);
    v19 = IndirectDisplayPairedAdapter;
    if ( IndirectDisplayPairedAdapter >= 0 )
      goto LABEL_9;
    WdLogSingleEntry2(2LL, this, IndirectDisplayPairedAdapter);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get the paired render adapter for indirect display adapter 0x%I64x, (Status = 0x%I64x).",
      (__int64)this,
      v19,
      0LL,
      0LL,
      0LL);
    v15 = v19;
LABEL_22:
    v10 = v20;
    goto LABEL_13;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v22);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  Global = DXGGLOBAL::GetGlobal();
  DXGADAPTER_REFERENCE::Assign(&v20, *((struct DXGADAPTER **)Global + 121));
  if ( v20 )
  {
    if ( v23 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
    goto LABEL_9;
  }
  WdLogSingleEntry2(2LL, this, -1073741637LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"WARP render only adapter is not ready to be used with display only adapter 0x%I64x, returning 0x%I64x.",
    (__int64)this,
    -1073741637LL,
    0LL,
    0LL,
    0LL);
  if ( v23 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
  v10 = v20;
  v15 = -1073741637;
LABEL_13:
  if ( v10 )
    DXGADAPTER::ReleaseReference(v10);
  v20 = 0LL;
  if ( v12 && _InterlockedExchangeAdd64((volatile signed __int64 *)v12 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v12 + 2), v12);
  return v15;
}
