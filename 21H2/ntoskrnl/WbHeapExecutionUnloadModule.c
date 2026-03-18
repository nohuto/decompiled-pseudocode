/*
 * XREFs of WbHeapExecutionUnloadModule @ 0x1406D5CF8
 * Callers:
 *     WbProcessModuleUnload @ 0x1406D5B38 (WbProcessModuleUnload.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1407E1B0C @ 0x1407E1B0C (sub_1407E1B0C.c)
 *     sub_1407E3B7C @ 0x1407E3B7C (sub_1407E3B7C.c)
 */

__int64 __fastcall WbHeapExecutionUnloadModule(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // r12d
  unsigned __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int i; // edi
  __int64 v10; // r14
  char v11; // si
  struct _KTHREAD *v12; // rax
  bool v13; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->SpecialApcDisable;
  v6 = (unsigned __int64 *)(a1 + 48);
  v7 = KeAbPreAcquire(a1 + 48, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, (__int64)v6);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  for ( i = 0; i < *(_DWORD *)(a1 + 12); ++i )
  {
    v10 = *(_QWORD *)(i * *(_DWORD *)(a1 + 8) + *(_QWORD *)(a1 + 24));
    if ( v10 )
    {
      if ( *(_QWORD *)(v10 + 64) == a2 )
      {
        v3 = sub_1407E1B0C((int)a1 + 8, 0, 0, i, 0LL);
        if ( v3 >= 0 )
        {
          sub_1407E3B7C(a1, v10);
          --i;
        }
      }
    }
  }
  v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
    ExfTryToWakePushLock(v6);
  KeAbPostRelease((ULONG_PTR)v6);
  v12 = KeGetCurrentThread();
  v13 = v12->SpecialApcDisable++ == -1;
  if ( v13 && ($CEA84C04E3712D858E5667A507841A2A *)v12->ApcState.ApcListHead[0].Flink != &v12->152 )
    KiCheckForKernelApcDelivery();
  return (unsigned int)v3;
}
