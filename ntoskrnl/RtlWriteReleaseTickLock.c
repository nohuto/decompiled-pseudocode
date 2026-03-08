/*
 * XREFs of RtlWriteReleaseTickLock @ 0x14037E0E0
 * Callers:
 *     KiCreateCpuSetForProcessor @ 0x140A89FC8 (KiCreateCpuSetForProcessor.c)
 *     KiCalibrateTimeAdjustment @ 0x140A9BEC0 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlWriteReleaseTickLock(__int64 *a1)
{
  __int64 result; // rax

  result = *a1 + 1;
  *a1 = result;
  return result;
}
