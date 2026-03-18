/*
 * XREFs of WbInPlaceEncryptionUnloadModule @ 0x1407E0B20
 * Callers:
 *     WbProcessModuleUnload @ 0x1407E0A3C (WbProcessModuleUnload.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     sub_140761E88 @ 0x140761E88 (sub_140761E88.c)
 *     sub_1407D2B00 @ 0x1407D2B00 (sub_1407D2B00.c)
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
        v6 = sub_140761E88(a1 + 136, 0, 0, i, 0LL);
        if ( v6 >= 0 )
        {
          sub_1407D2B00((volatile signed __int64 *)v14);
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
