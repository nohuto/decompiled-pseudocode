/*
 * XREFs of PopDirectedDripsUmInitialize @ 0x140802C48
 * Callers:
 *     PopDirectedDripsInitializePhase0 @ 0x140B379E0 (PopDirectedDripsInitializePhase0.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x14031E790 (RtlInitializeGenericTableAvl.c)
 */

void PopDirectedDripsUmInitialize()
{
  qword_140C38E28 = 0LL;
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
