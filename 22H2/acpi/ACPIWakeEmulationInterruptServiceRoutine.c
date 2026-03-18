/*
 * XREFs of ACPIWakeEmulationInterruptServiceRoutine @ 0x1C002F3A0
 * Callers:
 *     <none>
 * Callees:
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C00334AC (OSNotifyDeviceWakeByInterrupt.c)
 */

char __fastcall ACPIWakeEmulationInterruptServiceRoutine(__int64 a1, __int64 a2)
{
  OSNotifyDeviceWakeByInterrupt(a2);
  return 1;
}
