/*
 * XREFs of NVMeControllerDeleteLocalCommandPool @ 0x1C0004338
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C0007E10 (NVMeHwFindAdapter.c)
 *     NVMeControllerRemove @ 0x1C000E23C (NVMeControllerRemove.c)
 * Callees:
 *     NVMeFreeDmaBuffer @ 0x1C000EEA4 (NVMeFreeDmaBuffer.c)
 */

void __fastcall NVMeControllerDeleteLocalCommandPool(__int64 a1)
{
  if ( a1 )
  {
    if ( a1 != -4512 )
      StorPortExtendedFunction(37LL, a1, a1 + 4512);
  }
}
