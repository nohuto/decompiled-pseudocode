/*
 * XREFs of ObDereferenceSecurityDescriptor @ 0x140696920
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1402F0CC4 (IopCompleteUnloadOrDelete.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x140692DB8 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x140692E54 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     SeDefaultObjectMethod @ 0x1406961E0 (SeDefaultObjectMethod.c)
 *     ObpDereferenceSecurityDescriptorForObject @ 0x14069941C (ObpDereferenceSecurityDescriptorForObject.c)
 *     EtwpFreeLoggerContext @ 0x1406F29FC (EtwpFreeLoggerContext.c)
 *     ExpWnfCreateNameInstance @ 0x140718994 (ExpWnfCreateNameInstance.c)
 *     IopGetSetSecurityObject @ 0x14074EA70 (IopGetSetSecurityObject.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140750F44 (IopSetDeviceSecurityDescriptor.c)
 *     ObSetSecurityDescriptorInfo @ 0x140751100 (ObSetSecurityDescriptorInfo.c)
 *     ObDeassignSecurity @ 0x14076BE90 (ObDeassignSecurity.c)
 *     ExpWnfDeleteNameInstance @ 0x1407792F0 (ExpWnfDeleteNameInstance.c)
 *     EtwpFreeGuidEntry @ 0x14078B2C4 (EtwpFreeGuidEntry.c)
 *     ObpCreateHandle @ 0x1407C0130 (ObpCreateHandle.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x140880604 (ObpReferenceSecurityDescriptorSlow.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1409E9524 (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall ObDereferenceSecurityDescriptor(__int64 a1, unsigned int a2)
{
  volatile signed __int64 *v3; // rbx
  signed __int64 v4; // rax
  __int64 v5; // rsi
  signed __int64 v6; // rcx
  signed __int64 v7; // rtt
  struct _KTHREAD *CurrentThread; // r15
  volatile signed __int64 *v9; // rbp
  volatile signed __int64 *v10; // r14
  __int64 v11; // rax
  volatile signed __int64 *i; // rcx

  v3 = (volatile signed __int64 *)(a1 - 32);
  _m_prefetchw((const void *)(a1 - 32 + 8));
  v4 = *(_QWORD *)(a1 - 32 + 8);
  v5 = a2;
  v6 = v4 - a2;
  if ( v6 <= 0 )
  {
LABEL_4:
    if ( v6 )
      __fastfail(0xEu);
    CurrentThread = KeGetCurrentThread();
    v9 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (unsigned __int8)*((_DWORD *)v3 + 4));
    --CurrentThread->KernelApcDisable;
    v10 = v9 + 1;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v9, 0LL);
    v11 = _InterlockedExchangeAdd64(v3 + 1, -a2) - v5;
    if ( v11 > 0 )
    {
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v9);
      KeAbPostRelease((ULONG_PTR)v9);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    else
    {
      if ( v11 )
        __fastfail(0xEu);
      for ( i = (volatile signed __int64 *)*v10; i != v3; i = (volatile signed __int64 *)*i )
        v10 = i;
      *v10 = *v3;
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v9);
      KeAbPostRelease((ULONG_PTR)v9);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      ExFreePoolWithTag((PVOID)v3, 0x6353624Fu);
    }
  }
  else
  {
    while ( 1 )
    {
      v7 = v4;
      v4 = _InterlockedCompareExchange64(v3 + 1, v6, v4);
      if ( v7 == v4 )
        break;
      v6 = v4 - a2;
      if ( v6 <= 0 )
        goto LABEL_4;
    }
  }
}
