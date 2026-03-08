/*
 * XREFs of EtwCleanupSiloState @ 0x1409DEED0
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x1409A9EC0 (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     KeBugCheck @ 0x140415FE0 (KeBugCheck.c)
 *     EtwpCleanupSiloState @ 0x1409E04E0 (EtwpCleanupSiloState.c)
 */

__int64 __fastcall EtwCleanupSiloState(_DWORD *P)
{
  unsigned int v2; // edx
  unsigned int v3; // ecx
  unsigned int i; // edi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v6; // rbp
  signed int j; // ecx

  if ( !P )
    goto LABEL_13;
  v2 = P[4];
  v3 = 0;
  if ( v2 )
  {
    while ( *(_QWORD *)(*((_QWORD *)P + 57) + 8LL * v3) == 1LL )
    {
      if ( ++v3 >= v2 )
        goto LABEL_5;
    }
LABEL_13:
    KeBugCheck(0x11Du);
  }
LABEL_5:
  for ( i = 0; i < 0x40; ++i )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = (signed __int64 *)&P[14 * i + 116];
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)(v6 + 6), 0LL);
    for ( j = 0; (unsigned int)j < 3; ++j )
    {
      if ( (signed __int64 *)v6[2 * j] != &v6[2 * j] )
        goto LABEL_13;
    }
    if ( _InterlockedCompareExchange64(v6 + 6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6 + 6);
    KeAbPostRelease((ULONG_PTR)(v6 + 6));
    KeLeaveCriticalRegion();
  }
  return EtwpCleanupSiloState(P);
}
