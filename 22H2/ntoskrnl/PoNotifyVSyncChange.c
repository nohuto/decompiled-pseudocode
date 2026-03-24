/*
 * XREFs of PoNotifyVSyncChange @ 0x14034A7F0
 * Callers:
 *     <none>
 * Callees:
 *     PpmReleaseLock @ 0x14022A470 (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x14034A828 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x14034AA84 (PpmAcquireLock.c)
 */

LONG __fastcall PoNotifyVSyncChange(char a1)
{
  PpmAcquireLock(&PopFxSystemLatencyLock);
  PopFxVSyncEnabled = a1;
  PoFxSendSystemLatencyUpdate();
  return PpmReleaseLock(&PopFxSystemLatencyLock);
}
