/*
 * XREFs of PopDirectedDripsUmInitialize @ 0x14085CE30
 * Callers:
 *     PopDirectedDripsInitializePhase0 @ 0x140B6E9FC (PopDirectedDripsInitializePhase0.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x140245560 (RtlInitializeGenericTableAvl.c)
 */

void PopDirectedDripsUmInitialize()
{
  qword_140C38A08 = 0LL;
  PopDirectedDripsUmLock = 0LL;
  PopDirectedDripsUmTestDeviceCount = 0;
  RtlInitializeGenericTableAvl(
    &PopDirectedDripsUmTestDeviceTable,
    PopDirectedDripsUmTestDeviceCompare,
    PopDirectedDripsUmTestDeviceAllocate,
    PopDirectedDripsUmTestDeviceFree,
    0LL);
  PopDirectedDripsUmTestPermissive = 0;
}
