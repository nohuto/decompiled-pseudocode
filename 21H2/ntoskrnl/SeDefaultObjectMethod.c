/*
 * XREFs of SeDefaultObjectMethod @ 0x140654A70
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     ObSetSecurityDescriptorInfo @ 0x1406540D0 (ObSetSecurityDescriptorInfo.c)
 *     ObLogSecurityDescriptor @ 0x140654CD0 (ObLogSecurityDescriptor.c)
 *     ObQuerySecurityDescriptorInfo @ 0x140657F68 (ObQuerySecurityDescriptorInfo.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeDefaultObjectMethod(
        _QWORD *a1,
        int a2,
        DWORD *a3,
        void *a4,
        __int64 a5,
        __int64 *a6,
        POOL_TYPE a7,
        GENERIC_MAPPING *a8)
{
  int v10; // edx
  int v11; // edx
  unsigned int v12; // ebx
  int v13; // ebp
  __int64 v15; // rdi
  unsigned int v16; // ebx
  volatile signed __int64 *v17; // rdi
  signed __int64 v18; // rax
  signed __int64 v19; // rcx
  signed __int64 v20; // rtt
  struct _KTHREAD *CurrentThread; // r15
  volatile signed __int64 *v22; // rbp
  volatile signed __int64 *v23; // r14
  signed __int64 v24; // rax
  volatile signed __int64 *i; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9

  if ( !a2 )
    return ObSetSecurityDescriptorInfo(a1, a3, a4, (__int64)a6, a7, a8);
  v10 = a2 - 1;
  if ( !v10 )
    return ObQuerySecurityDescriptorInfo(a1, a3, a4, a5);
  v11 = v10 - 1;
  if ( v11 )
  {
    v12 = 0;
    if ( v11 != 1 )
      KeBugCheckEx(0x29u, 0LL, 0xFFFFFFFFC000000DuLL, 0LL, 0LL);
    if ( a4 )
    {
      v13 = ObLogSecurityDescriptor(a4);
      if ( v13 >= 0 )
      {
        ExFreePoolWithTag(a4, 0);
        *(a1 - 1) = 0LL;
      }
      return (unsigned int)v13;
    }
    else
    {
      *(a1 - 1) = 0LL;
    }
    return v12;
  }
  else
  {
    v15 = *a6;
    *a6 = 0LL;
    v16 = (v15 & 0xF) + 1;
    v17 = (volatile signed __int64 *)((v15 & 0xFFFFFFFFFFFFFFF0uLL) - 32);
    _m_prefetchw((const void *)(v17 + 1));
    v18 = *((_QWORD *)v17 + 1);
    v19 = v18 - v16;
    if ( v19 <= 0 )
    {
LABEL_14:
      if ( v19 )
        __fastfail(0xEu);
      CurrentThread = KeGetCurrentThread();
      v22 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (unsigned __int8)*((_DWORD *)v17 + 4));
      --CurrentThread->KernelApcDisable;
      v23 = v22 + 1;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v22, 0LL);
      v24 = _InterlockedExchangeAdd64(v17 + 1, -v16) - v16;
      if ( v24 > 0 )
      {
        if ( (_InterlockedExchangeAdd64(v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v22);
        KeAbPostRelease((ULONG_PTR)v22);
        KeLeaveCriticalRegionThread((__int64)CurrentThread, v29, v30, v31);
      }
      else
      {
        if ( v24 )
          __fastfail(0xEu);
        for ( i = (volatile signed __int64 *)*v23; i != v17; i = (volatile signed __int64 *)*i )
          v23 = i;
        *v23 = *v17;
        if ( (_InterlockedExchangeAdd64(v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v22);
        KeAbPostRelease((ULONG_PTR)v22);
        KeLeaveCriticalRegionThread((__int64)CurrentThread, v26, v27, v28);
        ExFreePoolWithTag((PVOID)v17, 0x6353624Fu);
      }
    }
    else
    {
      while ( 1 )
      {
        v20 = v18;
        v18 = _InterlockedCompareExchange64(v17 + 1, v19, v18);
        if ( v20 == v18 )
          break;
        v19 = v18 - v16;
        if ( v19 <= 0 )
          goto LABEL_14;
      }
    }
    return 0LL;
  }
}
