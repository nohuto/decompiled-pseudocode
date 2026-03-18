/*
 * XREFs of ReadAMDMsr @ 0x1404283F0
 * Callers:
 *     KiDisableCacheErrataSource @ 0x140579280 (KiDisableCacheErrataSource.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadAMDMsr(unsigned int a1)
{
  return __readmsr(a1);
}
