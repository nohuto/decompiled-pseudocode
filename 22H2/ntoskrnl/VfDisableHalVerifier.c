/*
 * XREFs of VfDisableHalVerifier @ 0x1405CE8E8
 * Callers:
 *     VfAllocateCrashDumpRegisters @ 0x140AC6380 (VfAllocateCrashDumpRegisters.c)
 *     VfAllocateCrashDumpRegistersEx @ 0x140AC6420 (VfAllocateCrashDumpRegistersEx.c)
 *     VfNotifyOfHibernate @ 0x140AC8218 (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

void VfDisableHalVerifier()
{
  ViVerifyDma = 0;
}
