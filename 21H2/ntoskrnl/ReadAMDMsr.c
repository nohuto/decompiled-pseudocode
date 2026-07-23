/*
 * XREFs of ReadAMDMsr @ 0x140407060
 * Callers:
 *     KiDisableCacheErrataSource @ 0x140522454 (KiDisableCacheErrataSource.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadAMDMsr(unsigned int a1)
{
  return __readmsr(a1);
}
