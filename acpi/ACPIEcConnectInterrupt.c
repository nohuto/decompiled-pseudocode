/*
 * XREFs of ACPIEcConnectInterrupt @ 0x1C00834C0
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x1C00256A0 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     ACPIEcConnectGpeVector @ 0x1C00833B8 (ACPIEcConnectGpeVector.c)
 *     ACPIEcConnectGpioInterrupt @ 0x1C00833F4 (ACPIEcConnectGpioInterrupt.c)
 */

NTSTATUS __fastcall ACPIEcConnectInterrupt(char *a1)
{
  if ( a1[805] )
    return ACPIEcConnectGpioInterrupt(a1);
  else
    return ACPIEcConnectGpeVector((__int64)a1);
}
