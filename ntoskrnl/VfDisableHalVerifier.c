/*
 * XREFs of VfDisableHalVerifier @ 0x1405CC438
 * Callers:
 *     VfAllocateCrashDumpRegisters @ 0x140AC2380 (VfAllocateCrashDumpRegisters.c)
 *     VfAllocateCrashDumpRegistersEx @ 0x140AC2420 (VfAllocateCrashDumpRegistersEx.c)
 *     VfNotifyOfHibernate @ 0x140AC4218 (VfNotifyOfHibernate.c)
 * Callees:
 *     <none>
 */

void VfDisableHalVerifier()
{
  ViVerifyDma = 0;
}
