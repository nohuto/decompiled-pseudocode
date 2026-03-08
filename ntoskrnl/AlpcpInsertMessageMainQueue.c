/*
 * XREFs of AlpcpInsertMessageMainQueue @ 0x140792B48
 * Callers:
 *     AlpcpSendLegacySynchronousRequest @ 0x140715930 (AlpcpSendLegacySynchronousRequest.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 */

signed __int32 __fastcall AlpcpInsertMessageMainQueue(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rsi
  int v5; // eax

  v2 = (volatile signed __int64 *)(a1 + 136);
  ExAcquirePushLockExclusiveEx(a1 + 136, 0LL);
  v5 = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 16) = a1;
  *(_DWORD *)(a2 + 40) = v5 & 0xFFFFFF81 | (4 * (*(_DWORD *)(a1 + 416) & 6)) | 1;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 152);
  *(_QWORD *)a2 = a1 + 144;
  **(_QWORD **)(a1 + 152) = a2;
  ++*(_DWORD *)(a1 + 448);
  *(_QWORD *)(a1 + 152) = a2;
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
