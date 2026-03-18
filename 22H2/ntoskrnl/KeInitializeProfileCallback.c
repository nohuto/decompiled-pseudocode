/*
 * XREFs of KeInitializeProfileCallback @ 0x140975010
 * Callers:
 *     EtwpSetPmcProfileSource @ 0x1409E6AE0 (EtwpSetPmcProfileSource.c)
 *     EtwpTimeProfileStart @ 0x1409E6BF8 (EtwpTimeProfileStart.c)
 *     EtwpCoverageSamplerStart @ 0x1409F3488 (EtwpCoverageSamplerStart.c)
 *     KiInitializeCacheErrataSupport @ 0x140B9723C (KiInitializeCacheErrataSupport.c)
 * Callees:
 *     KiCopyAffinityEx @ 0x1402544A0 (KiCopyAffinityEx.c)
 *     memset @ 0x140435400 (memset.c)
 */

unsigned __int16 __fastcall KeInitializeProfileCallback(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4)
{
  memset(a1, 0, 0x268uLL);
  *(_DWORD *)a1 = 40370193;
  *((_QWORD *)a1 + 4) = a2;
  *((_QWORD *)a1 + 5) = a3;
  a1[304] = a4;
  *((_DWORD *)a1 + 19) = 0;
  *((_DWORD *)a1 + 18) = 2097153;
  memset(a1 + 40, 0, 0x100uLL);
  return KiCopyAffinityEx((__int64)(a1 + 36), a1[37], (unsigned __int16 *)KeActiveProcessors);
}
