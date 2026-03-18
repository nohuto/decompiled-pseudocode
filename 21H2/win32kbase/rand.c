/*
 * XREFs of rand @ 0x1C00D6428
 * Callers:
 *     ?SampleRandomPickStart@MousePerfSummary@@AEAAXXZ @ 0x1C00382B4 (-SampleRandomPickStart@MousePerfSummary@@AEAAXXZ.c)
 *     ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C00B25A4 (-ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z.c)
 * Callees:
 *     <none>
 */

int __cdecl rand()
{
  dword_1C028F250 = 214013 * dword_1C028F250 + 2531011;
  return (dword_1C028F250 >> 16) & 0x7FFF;
}
