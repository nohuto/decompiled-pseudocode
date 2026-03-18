/*
 * XREFs of ReadAMDMsr @ 0x140429480
 * Callers:
 *     KiDisableCacheErrataSource @ 0x140577C84 (KiDisableCacheErrataSource.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadAMDMsr(unsigned int a1)
{
  return __readmsr(a1);
}
