void __fastcall ADAPTER_DISPLAY::DestroyProtectedSession(DXGADAPTER **this, struct DXGPROTECTEDSESSION *a2)
{
  struct _EX_RUNDOWN_REF v4; // rcx
  struct DXGPROTECTEDSESSION **v5; // rax
  int v6; // r8d
  _BYTE v7[16]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v8[144]; // [rsp+60h] [rbp-A8h] BYREF

  if ( DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 926LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!GetAdapter()->IsCoreResourceSharedOwner()",
      926LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this[2]) )
  {
    WdLogSingleEntry1(1LL, 927LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!GetAdapter()->IsCoreResourceExclusiveOwner()",
      927LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)a2 + 17);
  DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX((DXGPROTECTEDSESSIONMUTEX *)v7, (struct ADAPTER_DISPLAY *)this);
  v4.Count = *(_QWORD *)a2;
  if ( *(struct DXGPROTECTEDSESSION **)(*(_QWORD *)a2 + 8LL) != a2
    || (v5 = (struct DXGPROTECTEDSESSION **)*((_QWORD *)a2 + 1), *v5 != a2) )
  {
    __fastfail(3u);
  }
  *v5 = (struct DXGPROTECTEDSESSION *)v4.Count;
  *(_QWORD *)(v4.Count + 8) = v5;
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v8, this[2], 0LL);
  if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v8, (unsigned int)(v6 + 1)) < 0 )
  {
    WdLogSingleEntry1(4LL, 962LL);
  }
  else
  {
    DXGPROTECTEDSESSION::Stop(a2);
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v8);
    if ( *((_BYTE *)a2 + 144) )
    {
      DXGPROTECTEDSESSION::SignalFence(a2);
      *((_BYTE *)a2 + 144) = 0;
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v8);
  DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
  DXGPROTECTEDSESSION::`scalar deleting destructor'(a2);
}
