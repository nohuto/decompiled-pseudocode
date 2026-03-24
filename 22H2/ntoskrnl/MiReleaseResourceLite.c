/*
 * XREFs of MiReleaseResourceLite @ 0x140372D1C
 * Callers:
 *     MiProcessLoaderEntry @ 0x140372B40 (MiProcessLoaderEntry.c)
 *     MiRememberUnloadedDriver @ 0x14075F2E4 (MiRememberUnloadedDriver.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 */

_QWORD *__fastcall MiReleaseResourceLite(__int64 a1)
{
  ExReleaseResourceLite(&PsLoadedModuleResource);
  return KeLeaveCriticalRegionThread(a1);
}
