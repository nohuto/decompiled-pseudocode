__int64 __fastcall QDC_CACHE::AddToCache(
        QDC_CACHE *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *Src,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a7)
{
  int v7; // r12d
  int v8; // r13d
  __int64 v10; // rbx
  DXGPROCESS *Current; // rax
  __int64 v12; // rdx
  QDC_CACHE *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct QDC_CACHE::QDC_CACHE_ENTRY *CacheEntry; // rbx
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  void **v22; // rdi
  void *v23; // rax
  unsigned int v24; // ebx
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  void *v29; // rcx
  _BYTE v30[16]; // [rsp+50h] [rbp-38h] BYREF

  v7 = a4;
  v8 = a3;
  v10 = (unsigned int)a2;
  if ( *(_BYTE *)this )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = 436LL;
    return 3221225659LL;
  }
  Current = DXGPROCESS::GetCurrent((__int64)this);
  if ( DXGPROCESS::IsRemoteConnection(Current) )
    return 0LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, (QDC_CACHE *)((char *)this + 8), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
  if ( a5 )
  {
    if ( (_DWORD)v10 != *((_DWORD *)this + 158) )
    {
      v27 = WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
      v28 = *((unsigned int *)this + 158);
      *(_QWORD *)(v27 + 32) = v10;
      v24 = -1071774921;
      *(_QWORD *)(v27 + 24) = v28;
      goto LABEL_15;
    }
    CacheEntry = (QDC_CACHE *)((char *)this + 56);
    v17 = 0;
    while ( !*(_BYTE *)CacheEntry || *((_DWORD *)CacheEntry + 1) != v7 )
    {
      ++v17;
      CacheEntry = (struct QDC_CACHE::QDC_CACHE_ENTRY *)((char *)CacheEntry + 32);
      if ( v17 >= 0x12 )
        goto LABEL_8;
    }
    if ( CacheEntry )
    {
      if ( QDC_CACHE::CompareEntry(v13, CacheEntry, v14, a5, Src) )
        goto LABEL_14;
      WdLogSingleEntry1(1LL, 482LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Paths being added is different to valid cached one",
        482LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v29 = (void *)*((_QWORD *)CacheEntry + 2);
      if ( v29 )
      {
        operator delete(v29);
        *((_QWORD *)CacheEntry + 2) = 0LL;
      }
      goto LABEL_9;
    }
LABEL_8:
    CacheEntry = QDC_CACHE::FindCacheEntry(this, 0, 0);
    if ( !CacheEntry )
    {
      v24 = -1073741671;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, v18, v20, v21) + 24) = 494LL;
      goto LABEL_15;
    }
LABEL_9:
    v22 = (void **)((char *)CacheEntry + 16);
    if ( *((_DWORD *)CacheEntry + 2) != a5 && *v22 )
    {
      operator delete(*v22);
      *v22 = 0LL;
    }
    v23 = *v22;
    if ( !*v22 )
    {
      v26 = 216LL * a5;
      if ( !is_mul_ok(a5, 0xD8uLL) )
        v26 = -1LL;
      v23 = (void *)operator new[](v26, 0x43434451u, 256LL);
      *v22 = v23;
      if ( !v23 )
      {
        WdLogSingleEntry1(6LL, 517LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate path or mode arrays for cache",
          517LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v24 = -1073741801;
        goto LABEL_15;
      }
    }
    memmove(v23, Src, 216LL * a5);
    if ( a7 )
      *((_DWORD *)CacheEntry + 6) = *(_DWORD *)a7;
    *((_DWORD *)CacheEntry + 7) = v8;
    *((_DWORD *)CacheEntry + 2) = a5;
    *(_BYTE *)CacheEntry = 1;
    *((_DWORD *)CacheEntry + 1) = v7;
  }
LABEL_14:
  v24 = 0;
LABEL_15:
  if ( v30[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
  return v24;
}
