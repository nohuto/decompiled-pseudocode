void __stdcall ObReleaseObjectSecurity(PSECURITY_DESCRIPTOR SecurityDescriptor, BOOLEAN MemoryAllocated)
{
  volatile signed __int64 *v2; // rbx
  signed __int64 v3; // rax
  signed __int64 v4; // rcx
  signed __int64 v5; // rtt
  struct _KTHREAD *CurrentThread; // rbp
  volatile signed __int64 *v7; // rdi
  volatile signed __int64 *v8; // rsi
  signed __int64 v9; // rcx
  bool v10; // cc
  signed __int64 v11; // rcx
  volatile signed __int64 *i; // rdx

  if ( SecurityDescriptor )
  {
    if ( MemoryAllocated )
    {
      ExFreePoolWithTag(SecurityDescriptor, 0);
    }
    else
    {
      v2 = (volatile signed __int64 *)((char *)SecurityDescriptor - 32);
      _m_prefetchw((char *)SecurityDescriptor - 24);
      v3 = *((_QWORD *)SecurityDescriptor - 3);
      v4 = v3 - 1;
      if ( v3 - 1 <= 0 )
      {
LABEL_6:
        if ( v4 )
          __fastfail(0xEu);
        CurrentThread = KeGetCurrentThread();
        v7 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (unsigned __int8)*((_DWORD *)v2 + 4));
        --CurrentThread->KernelApcDisable;
        v8 = v7 + 1;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)v7, 0LL);
        v9 = _InterlockedExchangeAdd64(v2 + 1, 0xFFFFFFFFFFFFFFFFuLL);
        v10 = v9 <= 1;
        v11 = v9 - 1;
        if ( v10 )
        {
          if ( v11 )
            __fastfail(0xEu);
          for ( i = (volatile signed __int64 *)*v8; i != v2; i = (volatile signed __int64 *)*i )
            v8 = i;
          *v8 = *v2;
          if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v7);
          KeAbPostRelease((ULONG_PTR)v7);
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
          ExFreePoolWithTag((PVOID)v2, 0x6353624Fu);
        }
        else
        {
          if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v7);
          KeAbPostRelease((ULONG_PTR)v7);
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
        }
      }
      else
      {
        while ( 1 )
        {
          v5 = v3;
          v3 = _InterlockedCompareExchange64(v2 + 1, v4, v3);
          if ( v5 == v3 )
            break;
          v4 = v3 - 1;
          if ( v3 - 1 <= 0 )
            goto LABEL_6;
        }
      }
    }
  }
}
