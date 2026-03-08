/*
 * XREFs of WbInPlaceEncryptionUnloadModule @ 0x140770B14
 * Callers:
 *     WbProcessModuleUnload @ 0x140770A30 (WbProcessModuleUnload.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     sub_140755994 @ 0x140755994 (sub_140755994.c)
 *     sub_140770F08 @ 0x140770F08 (sub_140770F08.c)
 */

__int64 __fastcall WbInPlaceEncryptionUnloadModule(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v3; // rbx
  int v6; // r12d
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int i; // edi
  char v10; // si
  struct _KTHREAD *v11; // rax
  bool v12; // zf
  __int64 v14; // rbp

  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned __int64 *)(a1 + 176);
  --CurrentThread->SpecialApcDisable;
  v6 = 0;
  v7 = KeAbPreAcquire(a1 + 176, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v7, (__int64)v3);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  for ( i = 0; i < *(_DWORD *)(a1 + 140); ++i )
  {
    v14 = *(_QWORD *)(*(_DWORD *)(a1 + 136) * i + *(_QWORD *)(a1 + 152));
    if ( v14 )
    {
      if ( *(_QWORD *)(v14 + 32) == a2 )
      {
        v6 = sub_140770F08((int)a1 + 136, 0, 0, i, 0LL);
        if ( v6 >= 0 )
        {
          sub_140755994((volatile signed __int64 *)v14);
          --i;
        }
      }
    }
  }
  v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  v11 = KeGetCurrentThread();
  v12 = v11->SpecialApcDisable++ == -1;
  if ( v12 && ($C71981A45BEB2B45F82C232A7085991E *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
    KiCheckForKernelApcDelivery();
  return (unsigned int)v6;
}
