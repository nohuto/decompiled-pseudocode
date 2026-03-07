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
