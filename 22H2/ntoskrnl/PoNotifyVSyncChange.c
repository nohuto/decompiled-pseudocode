/*
 * XREFs of PoNotifyVSyncChange @ 0x14032BE00
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x14032C0A0 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14032C0F0 (PpmAcquireLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x14032C150 (PoFxSendSystemLatencyUpdate.c)
 */

__int64 __fastcall PoNotifyVSyncChange(char a1)
{
  PpmAcquireLock(&PopFxSystemLatencyLock);
  PopFxVSyncEnabled = a1;
  PoFxSendSystemLatencyUpdate();
  return PpmReleaseLock(&PopFxSystemLatencyLock);
}
