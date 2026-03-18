/*
 * XREFs of NVMeControllerIdentifyWorkItem @ 0x1C0014F10
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerIdentify @ 0x1C001C5D4 (NVMeControllerIdentify.c)
 *     NVMeGetControllerIoCommandSetIdentify @ 0x1C001DFF8 (NVMeGetControllerIoCommandSetIdentify.c)
 */

__int64 __fastcall NVMeControllerIdentifyWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  NVMeControllerIdentify(a1);
  NVMeGetControllerIoCommandSetIdentify(a1);
  return StorPortExtendedFunction(31LL, a1, a3);
}
