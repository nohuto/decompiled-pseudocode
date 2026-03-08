/*
 * XREFs of MiFreeSessionId @ 0x140A2F7B4
 * Callers:
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14072665C (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiSessionCreate @ 0x140756EC8 (MiSessionCreate.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall MiFreeSessionId(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v2; // rsi
  __int64 v3; // rax
  signed __int8 v4; // cf
  __int64 v5; // rdi
  $C71981A45BEB2B45F82C232A7085991E *v6; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((__int64)&qword_140C65650, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C65650, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_140C65650, v3, (__int64)&qword_140C65650);
  if ( v5 )
    *(_BYTE *)(v5 + 18) = 1;
  *((_BYTE *)qword_140C69590->Buffer + (v2 >> 3)) &= ~(1 << (v2 & 7));
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C65650, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C65650);
  LOBYTE(v6) = KeAbPostRelease((ULONG_PTR)&qword_140C65650);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v6 = &CurrentThread->152;
    if ( ($C71981A45BEB2B45F82C232A7085991E *)v6->ApcState.ApcListHead[0].Flink != v6 )
      LOBYTE(v6) = KiCheckForKernelApcDelivery();
  }
  return (char)v6;
}
