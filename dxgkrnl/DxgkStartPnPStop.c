void __fastcall DxgkStartPnPStop(struct DXGADAPTER *a1)
{
  bool v2; // si
  DXGADAPTER *v3; // rbx
  char *v4; // rcx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  DXGADAPTER *v9; // [rsp+50h] [rbp-68h] BYREF
  char v10; // [rsp+58h] [rbp-60h]
  _BYTE v11[64]; // [rsp+60h] [rbp-58h] BYREF

  v9 = a1;
  v10 = 0;
  DXGADAPTERSTOPRESETLOCKEXCLUSIVE::Acquire((DXGADAPTERSTOPRESETLOCKEXCLUSIVE *)&v9);
  COREACCESS::COREACCESS((COREACCESS *)v11, a1);
  COREACCESS::AcquireExclusive((__int64)v11, 1u, 0);
  v2 = *((_QWORD *)a1 + 366) && *((_DWORD *)a1 + 50) == 1;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    WdLogSingleEntry1(1LL, 1323LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 1323LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_BYTE *)a1 + 2833) = 1;
  COREACCESS::~COREACCESS((COREACCESS *)v11);
  if ( v10 )
  {
    v3 = v9;
    v4 = (char *)v9 + 136;
    *((_QWORD *)v9 + 18) = 0LL;
    ExReleasePushLockExclusiveEx(v4, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReferenceNoTracking(v3);
  }
  if ( v2 )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)Global,
      (__int64 (__fastcall *)(_QWORD *, __int64))DxgkCheckPairedRenderAdapterForStopCallBack,
      (__int64)a1,
      1);
  }
  v6 = DXGGLOBAL::GetGlobal();
  QDC_CACHE::InvalidateCache(*((QDC_CACHE **)v6 + 187), 0LL, v7, v8);
}
