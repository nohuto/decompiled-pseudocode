/*
 * XREFs of NVMeControllerStartFailureEventLog @ 0x1C0007D4C
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0007E10 (NVMeHwFindAdapter.c)
 *     NVMeHwPassiveInitialize @ 0x1C0008540 (NVMeHwPassiveInitialize.c)
 *     NVMeControllerInitPart3 @ 0x1C000DD8C (NVMeControllerInitPart3.c)
 *     NVMeControllerPowerUp @ 0x1C000E1A4 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C000E580 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C001C700 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     memset @ 0x1C0004B80 (memset.c)
 */

__int64 __fastcall NVMeControllerStartFailureEventLog(__int64 a1)
{
  _QWORD v3[10]; // [rsp+20h] [rbp-50h] BYREF

  memset(v3, 0, 0x48uLL);
  HIDWORD(v3[1]) = 0;
  v3[6] = a1 + 36;
  v3[0] = 0x4800000100LL;
  BYTE4(v3[3]) = 1;
  v3[4] = 0x200000006LL;
  LODWORD(v3[5]) = 4;
  return StorPortExtendedFunction(16LL, a1, v3);
}
