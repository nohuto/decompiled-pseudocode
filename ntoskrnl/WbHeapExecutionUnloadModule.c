/*
 * XREFs of WbHeapExecutionUnloadModule @ 0x140770C2C
 * Callers:
 *     WbProcessModuleUnload @ 0x140770A30 (WbProcessModuleUnload.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     sub_1406AFC38 @ 0x1406AFC38 (sub_1406AFC38.c)
 *     sub_140770F08 @ 0x140770F08 (sub_140770F08.c)
 */

__int64 __fastcall WbHeapExecutionUnloadModule(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v3; // rbx
  int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int i; // edi
  __int64 v10; // r14
  char v11; // si
  struct _KTHREAD *v12; // rax
  bool v13; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned __int64 *)(a1 + 48);
  --CurrentThread->SpecialApcDisable;
  v6 = 0;
  v7 = KeAbPreAcquire(a1 + 48, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v7, (__int64)v3);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  for ( i = 0; i < *(_DWORD *)(a1 + 12); ++i )
  {
    v10 = *(_QWORD *)(*(_DWORD *)(a1 + 8) * i + *(_QWORD *)(a1 + 24));
    if ( v10 )
    {
      if ( *(_QWORD *)(v10 + 64) == a2 )
      {
        v6 = sub_140770F08((int)a1 + 8, 0, 0, i, 0LL);
        if ( v6 >= 0 )
        {
          sub_1406AFC38(a1, v10);
          --i;
        }
      }
    }
  }
  v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  v12 = KeGetCurrentThread();
  v13 = v12->SpecialApcDisable++ == -1;
  if ( v13 && ($C71981A45BEB2B45F82C232A7085991E *)v12->ApcState.ApcListHead[0].Flink != &v12->152 )
    KiCheckForKernelApcDelivery();
  return (unsigned int)v6;
}
