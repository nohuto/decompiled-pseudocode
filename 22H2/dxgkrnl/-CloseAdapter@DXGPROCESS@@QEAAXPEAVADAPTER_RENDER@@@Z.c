/*
 * XREFs of ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C018C288
 * Callers:
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C018B4BC (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C018CFB8 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x1C018F32C (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C01B2620 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C00073B4 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00075BC (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C000A958 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z @ 0x1C01A97E4 (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z.c)
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
      DXGPROCESS::DestroyAdapterInfo(this, (struct DXGPROCESS_RENDER_ADAPTER_INFO *)v4);
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
