/*
 * XREFs of WbDecryptEncryptionSegment @ 0x1407553D8
 * Callers:
 *     WbDispatchOperation @ 0x1406AECD0 (WbDispatchOperation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     WbDecryptWarbirdEncryptionSegment @ 0x1407537B0 (WbDecryptWarbirdEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x140755694 (WbGetInitializedEncryptionSegment.c)
 *     sub_140755994 @ 0x140755994 (sub_140755994.c)
 */

__int64 __fastcall WbDecryptEncryptionSegment(__int64 a1, __int64 a2, __int64 a3)
{
  int InitializedEncryptionSegment; // edi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdi
  char v9; // si
  struct _KTHREAD *v10; // rax
  bool v11; // zf
  __int64 v13; // [rsp+48h] [rbp+20h] BYREF

  v13 = 0LL;
  if ( (unsigned int)a3 < 0x10 )
  {
    InitializedEncryptionSegment = -1073741811;
  }
  else
  {
    InitializedEncryptionSegment = WbGetInitializedEncryptionSegment(a1, a2, a3, &v13);
    if ( InitializedEncryptionSegment >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      v5 = (unsigned __int64 *)(v13 + 8);
      v6 = v13 + 8;
      --CurrentThread->SpecialApcDisable;
      v7 = KeAbPreAcquire(v6, 0LL);
      v8 = v7;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
        ExfAcquirePushLockExclusiveEx(v5, v7, (__int64)v5);
      if ( v8 )
        *(_BYTE *)(v8 + 18) = 1;
      InitializedEncryptionSegment = WbDecryptWarbirdEncryptionSegment(v13);
      v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v9 & 2) != 0 && (v9 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)v5);
      KeAbPostRelease((ULONG_PTR)v5);
      v10 = KeGetCurrentThread();
      v11 = v10->SpecialApcDisable++ == -1;
      if ( v11 && ($C71981A45BEB2B45F82C232A7085991E *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
        KiCheckForKernelApcDelivery();
    }
  }
  sub_140755994(v13);
  return (unsigned int)InitializedEncryptionSegment;
}
