/*
 * XREFs of PopBatteryReleaseLock @ 0x1408ED654
 * Callers:
 *     PopBatteryWorker @ 0x14077F710 (PopBatteryWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 */

void PopBatteryReleaseLock()
{
  PopReleaseRwLock((ULONG_PTR)&PopCB);
}
