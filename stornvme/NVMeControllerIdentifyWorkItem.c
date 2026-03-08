/*
 * XREFs of NVMeControllerIdentifyWorkItem @ 0x1C0014EA0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerIdentify @ 0x1C001C564 (NVMeControllerIdentify.c)
 *     NVMeGetControllerIoCommandSetIdentify @ 0x1C001DF88 (NVMeGetControllerIoCommandSetIdentify.c)
 */

__int64 __fastcall NVMeControllerIdentifyWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9

  NVMeControllerIdentify(a1);
  NVMeGetControllerIoCommandSetIdentify(a1);
  return StorPortExtendedFunction(31LL, a1, a3, v5);
}
