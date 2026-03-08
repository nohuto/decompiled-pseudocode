/*
 * XREFs of NVMeControllerStartFailureEventLog @ 0x1C0007C08
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0007CD0 (NVMeHwFindAdapter.c)
 *     NVMeHwPassiveInitialize @ 0x1C0008480 (NVMeHwPassiveInitialize.c)
 *     NVMeControllerInitPart3 @ 0x1C000DCDC (NVMeControllerInitPart3.c)
 *     NVMeControllerPowerUp @ 0x1C000E0F4 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C000E4D8 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C001C690 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     memset @ 0x1C0004580 (memset.c)
 */

__int64 __fastcall NVMeControllerStartFailureEventLog(__int64 a1)
{
  _QWORD v3[10]; // [rsp+20h] [rbp-50h] BYREF
  int v4; // [rsp+80h] [rbp+10h] BYREF

  memset(v3, 0, 0x48uLL);
  HIDWORD(v3[1]) = 0;
  v3[6] = a1 + 36;
  v4 = 72;
  v3[0] = 0x4800000100LL;
  BYTE4(v3[3]) = 1;
  v3[4] = 0x200000006LL;
  LODWORD(v3[5]) = 4;
  return StorPortExtendedFunction(16LL, a1, v3, &v4);
}
