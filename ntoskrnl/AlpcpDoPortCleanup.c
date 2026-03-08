/*
 * XREFs of AlpcpDoPortCleanup @ 0x140716E08
 * Callers:
 *     AlpcpClosePort @ 0x1407156B0 (AlpcpClosePort.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeReleaseSemaphore @ 0x140292210 (KeReleaseSemaphore.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSemaphoreEx @ 0x14033E940 (KeReleaseSemaphoreEx.c)
 *     AlpcpDisconnectPort @ 0x140716FA8 (AlpcpDisconnectPort.c)
 *     AlpcpFlushResourcesPort @ 0x1407175F8 (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushMessagesPort @ 0x140717700 (AlpcpFlushMessagesPort.c)
 *     AlpcpFreeCompletionList @ 0x1409766D0 (AlpcpFreeCompletionList.c)
 */

signed __int32 __fastcall AlpcpDoPortCleanup(__int64 a1)
{
  volatile signed __int64 *v2; // rsi
  void *v3; // rcx
  __int64 v4; // rax
  _QWORD **v5; // r14
  volatile signed __int64 *v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx

  AlpcpDisconnectPort(a1, 0LL);
  v2 = (volatile signed __int64 *)(a1 + 352);
  ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
  if ( *(_QWORD *)(a1 + 360) )
    AlpcpFreeCompletionList(a1);
  v3 = *(void **)(a1 + 24);
  v4 = 0LL;
  if ( ((unsigned __int8)v3 & 1) == 0 )
    v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
  {
    ObfDereferenceObjectWithTag(v3, 0x63706C41u);
    *(_QWORD *)(a1 + 24) |= 1uLL;
  }
  *(_DWORD *)(a1 + 416) |= 0x40u;
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
  KeAbPostRelease(a1 + 352);
  AlpcpFlushMessagesPort(a1);
  AlpcpFlushResourcesPort(a1);
  ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
  if ( (*(_DWORD *)(a1 + 416) & 0x200) != 0 )
  {
    KeReleaseSemaphore(*(PRKSEMAPHORE *)(a1 + 248), 1, 0x1000000, 0);
  }
  else
  {
    v5 = (_QWORD **)(a1 + 232);
    if ( *v5 != v5 )
    {
      v6 = (volatile signed __int64 *)(a1 + 224);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v6, 0LL);
      while ( 1 )
      {
        v7 = *v5;
        if ( *v5 == v5 )
          break;
        *(v7 - 1) = 0LL;
        v8 = *v7;
        if ( *(_QWORD **)(*v7 + 8LL) != v7 || (v9 = (_QWORD *)v7[1], (_QWORD *)*v9 != v7) )
          __fastfail(3u);
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        *v7 = 0LL;
        KeReleaseSemaphoreEx((__int64)(v7 - 22), 1u, 1);
      }
      if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v6);
      KeAbPostRelease((ULONG_PTR)v6);
    }
  }
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
