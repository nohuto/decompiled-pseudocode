/*
 * XREFs of ReadAMDMsr @ 0x140406E80
 * Callers:
 *     KiDisableCacheErrataSource @ 0x140522214 (KiDisableCacheErrataSource.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ReadAMDMsr(unsigned int a1)
{
  return __readmsr(a1);
}
