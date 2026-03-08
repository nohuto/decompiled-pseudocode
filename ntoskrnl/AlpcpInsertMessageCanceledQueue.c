/*
 * XREFs of AlpcpInsertMessageCanceledQueue @ 0x1407950AC
 * Callers:
 *     AlpcpCancelMessage @ 0x1407141F0 (AlpcpCancelMessage.c)
 *     AlpcpDisconnectPort @ 0x140716FA8 (AlpcpDisconnectPort.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x14077EC7C (AlpcpReturnMessageOnInsufficientBuffer.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 */

signed __int32 __fastcall AlpcpInsertMessageCanceledQueue(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rsi

  v2 = (volatile signed __int64 *)(a1 + 136);
  ExAcquirePushLockExclusiveEx(a1 + 136, 0LL);
  *(_QWORD *)(a2 + 88) = *(_QWORD *)(a1 + 392);
  *(_QWORD *)(a2 + 80) = a1 + 384;
  **(_QWORD **)(a1 + 392) = a2 + 80;
  *(_QWORD *)(a1 + 392) = a2 + 80;
  *(_DWORD *)(a2 + 40) |= 0x20000u;
  ++*(_DWORD *)(a1 + 464);
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
