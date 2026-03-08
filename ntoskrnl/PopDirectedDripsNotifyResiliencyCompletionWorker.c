/*
 * XREFs of PopDirectedDripsNotifyResiliencyCompletionWorker @ 0x140584B00
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PopPdcCompleteResiliencyCallback @ 0x140994E48 (PopPdcCompleteResiliencyCallback.c)
 */

signed __int32 __fastcall PopDirectedDripsNotifyResiliencyCompletionWorker(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  unsigned int v3; // esi
  signed __int32 result; // eax
  __int64 v5; // rcx

  v1 = (volatile signed __int64 *)(a1 + 136);
  v3 = 0;
  ExAcquirePushLockExclusiveEx(a1 + 136, 0LL);
  if ( *(_BYTE *)(a1 + 152) )
  {
    v3 = *(_DWORD *)(a1 + 148);
    *(_DWORD *)(a1 + 148) = 0;
    *(_BYTE *)(a1 + 152) = 0;
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 192), 0);
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  result = KeAbPostRelease((ULONG_PTR)v1);
  if ( v3 )
    return PopPdcCompleteResiliencyCallback(v5, v3);
  return result;
}
