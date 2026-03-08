/*
 * XREFs of rand @ 0x1C00DAEF8
 * Callers:
 *     ?SampleRandomPickStart@MousePerfSummary@@AEAAXXZ @ 0x1C007BC20 (-SampleRandomPickStart@MousePerfSummary@@AEAAXXZ.c)
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C00F449A (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 * Callees:
 *     <none>
 */

int __cdecl rand()
{
  dword_1C02CA8D0 = 214013 * dword_1C02CA8D0 + 2531011;
  return (dword_1C02CA8D0 >> 16) & 0x7FFF;
}
