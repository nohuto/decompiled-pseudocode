__int64 __fastcall SmPartitionInitialize(__int64 a1)
{
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  memset((void *)a1, 0, 0xBC0uLL);
  ExInitializePushLock((PEX_RUNDOWN_REF)(a1 + 1952));
  *((_QWORD *)&v3 + 1) = SmpStoreMgrCallback;
  *(_QWORD *)&v3 = 123LL;
  SMKM_STORE_MGR<SM_TRAITS>::SmInitialize(a1, &v3);
  *(_QWORD *)(a1 + 1992) = 0LL;
  KeInitializeEvent((PRKEVENT)(a1 + 2016), NotificationEvent, 0);
  *(_QWORD *)(a1 + 2080) = 0LL;
  *(_QWORD *)(a1 + 2088) = 0LL;
  *(_QWORD *)(a1 + 2096) = 0LL;
  *(_QWORD *)(a1 + 2104) = 0LL;
  *(_QWORD *)(a1 + 2072) = 0LL;
  *(_DWORD *)(a1 + 2080) = 0;
  *(_QWORD *)(a1 + 2088) = 0LL;
  *(_DWORD *)(a1 + 2084) = 0;
  *(_DWORD *)(a1 + 2112) = -1;
  *(_QWORD *)(a1 + 2120) = 0LL;
  *(_BYTE *)(a1 + 2040) = 5;
  SmcCacheManagerInitialize(a1 + 2128);
  *(_QWORD *)(a1 + 2688) = 0LL;
  SmKmVirtualLockCtxInitialize((_QWORD *)(a1 + 2696));
  SmFpInitialize(a1 + 2720, a1);
  return SmFpInitialize(a1 + 2840, a1);
}
