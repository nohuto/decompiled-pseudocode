/*
 * XREFs of AlpcpFlushMessagesPort @ 0x140717700
 * Callers:
 *     AlpcpDoPortCleanup @ 0x140716E08 (AlpcpDoPortCleanup.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObReferenceObjectSafe @ 0x1402CBCB0 (ObReferenceObjectSafe.c)
 *     AlpcpFlushQueue @ 0x1407178BC (AlpcpFlushQueue.c)
 *     AlpcpFlushCancelQueue @ 0x140717A60 (AlpcpFlushCancelQueue.c)
 *     AlpcpFlushMessagesByRequestor @ 0x140781C5C (AlpcpFlushMessagesByRequestor.c)
 */

int __fastcall AlpcpFlushMessagesPort(__int64 a1)
{
  int result; // eax
  __int64 *v3; // rbx
  signed __int64 *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbx

  AlpcpFlushQueue(a1, a1 + 144, 1LL);
  AlpcpFlushQueue(a1, a1 + 160, 2LL);
  AlpcpFlushQueue(a1, a1 + 184, 3LL);
  AlpcpFlushQueue(a1, a1 + 208, 4LL);
  AlpcpFlushCancelQueue(a1, 0LL);
  result = *(_DWORD *)(a1 + 416) & 6;
  if ( (*(_BYTE *)(a1 + 416) & 6) == 6 )
  {
    v3 = *(__int64 **)(a1 + 16);
    v4 = v3 - 2;
    ExAcquirePushLockSharedEx((ULONG_PTR)(v3 - 2), 0LL);
    v5 = *v3;
    v6 = v3[2];
    if ( v5 )
      v5 &= -(__int64)(ObReferenceObjectSafe(v5) != 0);
    if ( v6 )
      v6 &= -(__int64)(ObReferenceObjectSafe(v6) != 0);
    if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v4);
    result = KeAbPostRelease((ULONG_PTR)v4);
    if ( v5 )
    {
      if ( (*(_DWORD *)(v5 + 416) & 0x40) == 0 && v6 && (*(_DWORD *)(v6 + 416) & 8) == 0 )
      {
        AlpcpFlushMessagesByRequestor(v6, v5, v5 + 144, 1LL);
        AlpcpFlushMessagesByRequestor(v6, v5, v5 + 160, 2LL);
        if ( (*(_DWORD *)(a1 + 416) & 0x80u) == 0 )
          AlpcpFlushMessagesByRequestor(v6, v5, v5 + 184, 3LL);
        AlpcpFlushMessagesByRequestor(v6, v5, v5 + 208, 4LL);
        AlpcpFlushCancelQueue(v5, a1);
      }
      result = ObfDereferenceObject((PVOID)v5);
    }
    if ( v6 )
      return ObfDereferenceObject((PVOID)v6);
  }
  return result;
}
