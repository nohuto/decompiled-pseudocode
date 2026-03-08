/*
 * XREFs of KeInitializeSecondaryInterruptServices @ 0x140842B00
 * Callers:
 *     HalpAllocateGsivForSecondaryInterrupt @ 0x14039C2B0 (HalpAllocateGsivForSecondaryInterrupt.c)
 * Callees:
 *     KeInitializeDpc @ 0x140305660 (KeInitializeDpc.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 KeInitializeSecondaryInterruptServices()
{
  __int64 Pool2; // rax
  unsigned int v1; // ebx
  _QWORD *v2; // rdi
  struct _KEVENT *v3; // rsi
  __int64 v4; // rbp

  Pool2 = ExAllocatePool2(64LL, 12288LL, 1767073099LL);
  v1 = 0;
  KiGlobalSecondaryIDT = Pool2;
  v2 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    v3 = (struct _KEVENT *)(Pool2 + 8);
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
    qword_140C41708 = (__int64)&KiSecondarySignalList;
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
