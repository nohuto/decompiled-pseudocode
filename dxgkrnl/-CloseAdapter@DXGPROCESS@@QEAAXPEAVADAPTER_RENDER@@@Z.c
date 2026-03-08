/*
 * XREFs of ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01B3A74
 * Callers:
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C01A2B10 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01B4254 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C01B6C74 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C01B7C70 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00073CC (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0009580 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z @ 0x1C0188A74 (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z.c)
 */

void __fastcall DXGPROCESS::CloseAdapter(DXGPROCESS *this, struct DXGADAPTER *const *a2)
{
  __int64 v4; // rbx
  _BYTE v6[64]; // [rsp+50h] [rbp-68h] BYREF

  COREACCESS::COREACCESS((COREACCESS *)v6, a2[2]);
  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(a2 + 9, 0LL);
    *((_QWORD *)a2 + 10) = KeGetCurrentThread();
    v4 = *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * *(unsigned int *)(*((_QWORD *)a2 + 2) + 240LL));
    if ( !v4 )
      break;
    if ( !*(_DWORD *)(v4 + 56) )
    {
      WdLogSingleEntry1(1LL, 2700LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pAdapterInfo->AdapterInfoReferenceCount > 0",
        2700LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*(_DWORD *)(v4 + 56))-- != 1 )
      break;
    if ( a2 != *(struct DXGADAPTER *const **)(v4 + 80) )
    {
      WdLogSingleEntry1(1LL, 2703LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pRenderCore == pAdapterInfo->pRenderCore",
        2703LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !*(_BYTE *)(v4 + 109) || DXGADAPTER::IsCoreResourceSharedOwner(a2[2]) )
    {
      DXGPROCESS::DestroyAdapterInfo(this, (struct ADAPTER_RENDER **)v4);
      break;
    }
    ++*(_DWORD *)(v4 + 56);
    *((_QWORD *)a2 + 10) = 0LL;
    ExReleasePushLockExclusiveEx(a2 + 9, 0LL);
    KeLeaveCriticalRegion();
    COREACCESS::AcquireShared((COREACCESS *)v6, 0LL);
  }
  *((_QWORD *)a2 + 10) = 0LL;
  ExReleasePushLockExclusiveEx(a2 + 9, 0LL);
  KeLeaveCriticalRegion();
  COREACCESS::~COREACCESS((COREACCESS *)v6);
}
