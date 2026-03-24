/*
 * XREFs of KeInitializeSecondaryInterruptServices @ 0x1408BB8C0
 * Callers:
 *     HalpAllocateGsivForSecondaryInterrupt @ 0x1404D0850 (HalpAllocateGsivForSecondaryInterrupt.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402D40A0 (KeInitializeEvent.c)
 *     KeInitializeDpc @ 0x1403446C0 (KeInitializeDpc.c)
 *     memset @ 0x140413800 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 KeInitializeSecondaryInterruptServices()
{
  _QWORD *PoolWithTag; // rax
  unsigned int v1; // ebx
  _QWORD *v2; // rdi
  struct _KEVENT *v3; // rsi
  __int64 v4; // rbp

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x3000uLL, 0x6953654Bu);
  v1 = 0;
  KiGlobalSecondaryIDT = (__int64)PoolWithTag;
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x3000uLL);
    v3 = (struct _KEVENT *)(v2 + 1);
    v4 = 256LL;
    do
    {
      *v2 = 0LL;
      KeInitializeEvent(v3, SynchronizationEvent, 1u);
      v3 += 2;
      v2 += 6;
      --v4;
    }
    while ( v4 );
    qword_140C2B508 = (__int64)&KiSecondarySignalList;
    KiSecondarySignalList = (__int64)&KiSecondarySignalList;
    KeInitializeDpc((PRKDPC)&KiSecondarySignalDpc, (PKDEFERRED_ROUTINE)KiProcessSecondarySignalList, 0LL);
    KiSecondarySignalListLock = 0LL;
    KiSecondarySignalDpcRunning = 0;
    KiSecondaryInterruptServicesEnabled = 1;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v1;
}
