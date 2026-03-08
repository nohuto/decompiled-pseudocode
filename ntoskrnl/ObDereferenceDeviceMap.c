/*
 * XREFs of ObDereferenceDeviceMap @ 0x14071E5A4
 * Callers:
 *     ObClearProcessDeviceMap @ 0x140704918 (ObClearProcessDeviceMap.c)
 *     ObpDereferenceCurrentDeviceMap @ 0x140720E28 (ObpDereferenceCurrentDeviceMap.c)
 *     ObpSetCurrentProcessDeviceMap @ 0x14075D6E0 (ObpSetCurrentProcessDeviceMap.c)
 *     SeGetTokenDeviceMap @ 0x14075D880 (SeGetTokenDeviceMap.c)
 *     ObpSlowReferenceDeviceMap @ 0x14075DAD8 (ObpSlowReferenceDeviceMap.c)
 *     ObpSetDeviceMap @ 0x14078990C (ObpSetDeviceMap.c)
 *     ObpDeleteDeviceMap @ 0x140789BDC (ObpDeleteDeviceMap.c)
 *     SepDeleteLogonSessionTrack @ 0x1407DAE44 (SepDeleteLogonSessionTrack.c)
 *     SepDeReferenceLogonSession @ 0x1407DBBB8 (SepDeReferenceLogonSession.c)
 *     ObCleanupSiloState @ 0x140977DD0 (ObCleanupSiloState.c)
 *     ObpDirectoryTeardownCallback @ 0x140A71300 (ObpDirectoryTeardownCallback.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     ObpDeleteDeviceMap @ 0x140789BDC (ObpDeleteDeviceMap.c)
 */

char __fastcall ObDereferenceDeviceMap(volatile signed __int64 *P, unsigned int a2)
{
  volatile signed __int64 *v3; // rdi
  struct _KTHREAD *v4; // rax
  __int64 v5; // rbp
  signed __int64 i; // r8
  struct _KTHREAD *v7; // rtt
  char *ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  volatile signed __int64 *v10; // rsi
  __int64 v11; // rax

  v3 = P;
  _m_prefetchw((const void *)(P + 30));
  v4 = (struct _KTHREAD *)*((_QWORD *)P + 30);
  v5 = a2;
  for ( i = (signed __int64)v4 - a2; i > 0; i = (signed __int64)v4 - a2 )
  {
    v7 = v4;
    v4 = (struct _KTHREAD *)_InterlockedCompareExchange64(P + 30, i, (signed __int64)v4);
    if ( v7 == v4 )
      return (char)v4;
  }
  if ( i )
    __fastfail(0xEu);
  ServerSiloGlobals = (char *)PsGetServerSiloGlobals(*((_QWORD *)P + 2));
  CurrentThread = KeGetCurrentThread();
  v10 = (volatile signed __int64 *)(ServerSiloGlobals + 120);
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(ServerSiloGlobals + 120), 0LL);
  v11 = _InterlockedExchangeAdd64(v3 + 30, -a2) - v5;
  if ( v11 > 0 )
  {
    v3 = 0LL;
  }
  else
  {
    if ( v11 )
      __fastfail(0xEu);
    *(_QWORD *)(*v3 + 304) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  v4 = KeGetCurrentThread();
  if ( v4->SpecialApcDisable++ == -1 )
  {
    v4 = (struct _KTHREAD *)((char *)v4 + 152);
    if ( *(struct _KTHREAD **)&v4->Header.Lock != v4 )
      LOBYTE(v4) = KiCheckForKernelApcDelivery();
  }
  if ( v3 )
    LOBYTE(v4) = ObpDeleteDeviceMap((PVOID)v3);
  return (char)v4;
}
