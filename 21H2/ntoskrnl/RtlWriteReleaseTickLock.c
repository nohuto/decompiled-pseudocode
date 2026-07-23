/*
 * XREFs of RtlWriteReleaseTickLock @ 0x1403A7544
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x140995B90 (KiCalibrateTimeAdjustment.c)
 *     KiCreateCpuSetForProcessor @ 0x14099F1FC (KiCreateCpuSetForProcessor.c)
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
