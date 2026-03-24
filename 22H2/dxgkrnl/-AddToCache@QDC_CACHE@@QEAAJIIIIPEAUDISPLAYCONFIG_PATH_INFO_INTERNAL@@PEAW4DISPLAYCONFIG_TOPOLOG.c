/*
 * XREFs of ?AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C01453B4
 * Callers:
 *     ?QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C0144F50 (-QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFI.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000B9F0 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FindCacheEntry@QDC_CACHE@@AEAAPEAUQDC_CACHE_ENTRY@1@_NI@Z @ 0x1C0145524 (-FindCacheEntry@QDC_CACHE@@AEAAPEAUQDC_CACHE_ENTRY@1@_NI@Z.c)
 *     ?CompareEntry@QDC_CACHE@@AEAA_NPEAUQDC_CACHE_ENTRY@1@IIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x1C0295C2C (-CompareEntry@QDC_CACHE@@AEAA_NPEAUQDC_CACHE_ENTRY@1@IIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z.c)
 */

__int64 __fastcall QDC_CACHE::AddToCache(
        struct DXGFASTMUTEX **this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *Src,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a7)
{
  unsigned int v7; // r14d
  int v8; // r15d
  __int64 v9; // rbx
  DXGPROCESS *Current; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct QDC_CACHE::QDC_CACHE_ENTRY *CacheEntry; // rax
  QDC_CACHE *v15; // rcx
  unsigned int v16; // r8d
  struct QDC_CACHE::QDC_CACHE_ENTRY *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  PVOID v20; // rax
  unsigned int v21; // ebx
  SIZE_T v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  void *v32; // rcx
  __int64 v33; // rax
  _BYTE v34[40]; // [rsp+30h] [rbp-28h] BYREF

  v7 = a4;
  v8 = a3;
  v9 = (unsigned int)a2;
  if ( *(_BYTE *)this )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = 445LL;
    return 3221225659LL;
  }
  Current = DXGPROCESS::GetCurrent((__int64)this, a2, a3, a4);
  if ( DXGPROCESS::IsRemoteConnection(Current) )
    return 0LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v34, this[1], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v34);
  if ( !a5 )
    goto LABEL_12;
  if ( (_DWORD)v9 != *((_DWORD *)this + 148) )
  {
    v28 = WdLogNewEntry5_WdTrace(v13, v12);
    v29 = *((unsigned int *)this + 148);
    *(_QWORD *)(v28 + 32) = v9;
    v21 = -1071774921;
    *(_QWORD *)(v28 + 24) = v29;
    goto LABEL_13;
  }
  CacheEntry = QDC_CACHE::FindCacheEntry((QDC_CACHE *)this, 1, v7);
  v17 = CacheEntry;
  if ( CacheEntry )
  {
    if ( QDC_CACHE::CompareEntry(v15, CacheEntry, v16, a5, Src) )
      goto LABEL_12;
    v31 = WdLogNewEntry5_WdAssertion(v30, v12);
    *(_QWORD *)(v31 + 24) = 491LL;
    WdLogEvent5_WdAssertion(v31);
    v32 = (void *)*((_QWORD *)v17 + 2);
    if ( v32 )
    {
      operator delete[](v32);
      *((_QWORD *)v17 + 2) = 0LL;
    }
  }
  else
  {
    v17 = QDC_CACHE::FindCacheEntry((QDC_CACHE *)this, 0, 0);
    if ( !v17 )
    {
      v21 = -1073741671;
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, v18) + 24) = 503LL;
      goto LABEL_13;
    }
  }
  v20 = (PVOID)*((_QWORD *)v17 + 2);
  if ( *((_DWORD *)v17 + 2) != a5 && v20 )
  {
    operator delete[](*((void **)v17 + 2));
    *((_QWORD *)v17 + 2) = 0LL;
    v20 = 0LL;
  }
  if ( !v20 )
  {
    v23 = 200LL * a5;
    if ( !is_mul_ok(a5, 0xC8uLL) )
      v23 = -1LL;
    v20 = operator new[](v23, 0x43434451u, PagedPool);
    *((_QWORD *)v17 + 2) = v20;
    if ( !v20 )
    {
      v33 = WdLogNewEntry5_WdLowResource(v25, v24, v26, v27);
      *(_QWORD *)(v33 + 24) = 526LL;
      WdLogEvent5_WdLowResource(v33);
      v21 = -1073741801;
      goto LABEL_13;
    }
  }
  memmove(v20, Src, 200LL * a5);
  if ( a7 )
    *((_DWORD *)v17 + 6) = *(_DWORD *)a7;
  *((_DWORD *)v17 + 7) = v8;
  *((_DWORD *)v17 + 2) = a5;
  *(_BYTE *)v17 = 1;
  *((_DWORD *)v17 + 1) = v7;
LABEL_12:
  v21 = 0;
LABEL_13:
  if ( v34[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v34, v12);
  return v21;
}
