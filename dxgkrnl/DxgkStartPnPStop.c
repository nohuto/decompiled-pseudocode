/*
 * XREFs of DxgkStartPnPStop @ 0x1C02BE5C0
 * Callers:
 *     DpiFdoStopAdapter @ 0x1C0398994 (DpiFdoStopAdapter.c)
 * Callees:
 *     ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0003EC8 (-AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0009580 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0009EE0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0041EDC (-Acquire@DXGADAPTERSTOPRESETLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C017586C (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01BCB60 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

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
