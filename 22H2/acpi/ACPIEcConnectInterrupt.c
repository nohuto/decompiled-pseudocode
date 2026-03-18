/*
 * XREFs of ACPIEcConnectInterrupt @ 0x1C00834D0
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x1C00256C0 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     ACPIEcConnectGpeVector @ 0x1C00833C8 (ACPIEcConnectGpeVector.c)
 *     ACPIEcConnectGpioInterrupt @ 0x1C0083404 (ACPIEcConnectGpioInterrupt.c)
 */

NTSTATUS __fastcall ACPIEcConnectInterrupt(char *a1)
{
  if ( a1[805] )
    return ACPIEcConnectGpioInterrupt(a1);
  else
    return ACPIEcConnectGpeVector((__int64)a1);
}
