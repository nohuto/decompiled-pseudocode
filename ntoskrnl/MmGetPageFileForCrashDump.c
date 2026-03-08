/*
 * XREFs of MmGetPageFileForCrashDump @ 0x140A30138
 * Callers:
 *     IoConfigureCrashDump @ 0x14054D564 (IoConfigureCrashDump.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 */

__int64 __fastcall MmGetPageFileForCrashDump(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // rsi
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  signed __int8 v6; // cf
  __int64 v7; // rdi
  char *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v4 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v5 = KeAbPreAcquire((__int64)qword_140C6B4F8, 0LL);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)qword_140C6B4F8, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(qword_140C6B4F8, v5, (__int64)qword_140C6B4F8);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  if ( Count )
  {
    v8 = (char *)&unk_140C6F360;
    v9 = Count;
    do
    {
      v10 = *(_QWORD *)v8;
      if ( (*(_WORD *)(*(_QWORD *)v8 + 204LL) & 0x850) == 0 && *(_QWORD *)(v10 + 16) > v4 )
      {
        v3 = *(_QWORD *)(v10 + 224);
        v4 = *(_QWORD *)(v10 + 16);
        if ( a1 )
          *a1 = *(_OWORD *)(v10 + 96);
      }
      v8 += 8;
      --v9;
    }
    while ( v9 );
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C6B4F8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)qword_140C6B4F8);
  KeAbPostRelease((ULONG_PTR)qword_140C6B4F8);
  v11 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v11 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v3;
}
