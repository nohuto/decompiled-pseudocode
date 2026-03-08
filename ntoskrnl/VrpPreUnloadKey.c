/*
 * XREFs of VrpPreUnloadKey @ 0x140A70314
 * Callers:
 *     VrpRegistryCallback @ 0x1406C2D60 (VrpRegistryCallback.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     VrpFindExactNamespaceNode @ 0x140737324 (VrpFindExactNamespaceNode.c)
 */

__int64 __fastcall VrpPreUnloadKey(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // r13
  unsigned __int64 *v3; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rax
  __int64 v8; // rbp
  unsigned int v9; // esi
  __int64 ExactNamespaceNode; // rax
  unsigned __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  v3 = a2 + 2;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((__int64)(a2 + 2), 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v7, (__int64)v3);
  v9 = 0;
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  ExactNamespaceNode = VrpFindExactNamespaceNode(a2, v2 + 16, &v12);
  if ( ExactNamespaceNode )
  {
    if ( *(int *)(ExactNamespaceNode + 56) < 0 )
    {
      *(_QWORD *)(a1 + 16) = ExactNamespaceNode;
    }
    else
    {
      v9 = -1073741790;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v3);
      KeAbPostRelease((ULONG_PTR)v3);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    return v9;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    KeAbPostRelease((ULONG_PTR)v3);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return 0LL;
  }
}
