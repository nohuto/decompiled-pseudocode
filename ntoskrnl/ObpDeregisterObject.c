/*
 * XREFs of ObpDeregisterObject @ 0x140979950
 * Callers:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140316BE0 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x140366B30 (NtSetInformationWorkerFactory.c)
 *     ObpProcessRemoveObjectQueue @ 0x1407DEA90 (ObpProcessRemoveObjectQueue.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     EtwTraceObject @ 0x1409E2DE8 (EtwTraceObject.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall ObpDeregisterObject(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rbp
  __int64 v4; // rdx
  _QWORD *i; // rdi
  struct _KTHREAD *v6; // rax
  bool v7; // zf
  __int64 v8; // rax
  struct _KTHREAD *v9; // rax

  if ( (xmmword_140D1EAD0 & 0x80u) != 0LL )
    EtwTraceObject(4401LL, a1);
  if ( (*(_BYTE *)(a1 + 25) & 3) == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = 0LL;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&ObpStackTraceLock, 0LL);
    if ( (ObpTraceFlags & 0x73) != 0 )
    {
      v4 = (((unsigned int)(a1 + 48) >> 4) & 0xFFFFF) % 0x191;
      for ( i = (_QWORD *)*((_QWORD *)ObpObjectTable + v4); i; i = (_QWORD *)i[1] )
      {
        if ( *i == a1 )
        {
          v8 = i[1];
          if ( v3 )
            v3[1] = v8;
          else
            *((_QWORD *)ObpObjectTable + v4) = v8;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
          KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
          v9 = KeGetCurrentThread();
          v7 = v9->SpecialApcDisable++ == -1;
          if ( v7 && ($C71981A45BEB2B45F82C232A7085991E *)v9->ApcState.ApcListHead[0].Flink != &v9->152 )
            KiCheckForKernelApcDelivery();
          ExFreePoolWithTag(i, 0x7452624Fu);
          return;
        }
        v3 = i;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ObpStackTraceLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ObpStackTraceLock);
    KeAbPostRelease((ULONG_PTR)&ObpStackTraceLock);
    v6 = KeGetCurrentThread();
    v7 = v6->SpecialApcDisable++ == -1;
    if ( v7 && ($C71981A45BEB2B45F82C232A7085991E *)v6->ApcState.ApcListHead[0].Flink != &v6->152 )
      KiCheckForKernelApcDelivery();
  }
}
