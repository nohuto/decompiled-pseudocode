unsigned __int64 __fastcall ObpReferenceSecurityDescriptorSlow(__int64 a1, int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v9; // rdi

  v3 = a3;
  if ( a2 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 - 24), 0xFuLL) <= 0 )
      __fastfail(0xEu);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v9 = (signed __int64 *)(a1 + 16);
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx(a1 + 16, 0LL);
    v3 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 24), 0x10uLL) <= 0 )
      __fastfail(0xEu);
    if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v9);
    KeAbPostRelease((ULONG_PTR)v9);
    KeLeaveCriticalRegion();
  }
  _m_prefetchw((const void *)(a1 + 40));
  v5 = *(_QWORD *)(a1 + 40);
  while ( (v5 & 0xF) == 0 && v3 == (v5 & 0xFFFFFFFFFFFFFFF0uLL) )
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v5 + 15, v5);
    if ( v6 == v5 )
      return v3;
  }
  ObDereferenceSecurityDescriptor(v3, 0xFu);
  return v3;
}
