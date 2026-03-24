/*
 * XREFs of rand @ 0x1C00C56E8
 * Callers:
 *     ?SampleRandomPickStart@MousePerfSummary@@AEAAXXZ @ 0x1C0041798 (-SampleRandomPickStart@MousePerfSummary@@AEAAXXZ.c)
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C006F2B8 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 * Callees:
 *     <none>
 */

int __cdecl rand()
{
  dword_1C024BCE0 = 214013 * dword_1C024BCE0 + 2531011;
  return (dword_1C024BCE0 >> 16) & 0x7FFF;
}
