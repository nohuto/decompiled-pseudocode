/*
 * XREFs of ACPIEcInstallOpRegionHandler @ 0x1C00836FC
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x1C00256A0 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     RegisterOperationRegionHandler @ 0x1C008BB24 (RegisterOperationRegionHandler.c)
 */

__int64 __fastcall ACPIEcInstallOpRegionHandler(__int64 a1)
{
  return RegisterOperationRegionHandler(*(_QWORD *)(a1 + 56), 2, 3, (unsigned int)ACPIEcOpRegionHandler, a1, a1 + 80);
}
