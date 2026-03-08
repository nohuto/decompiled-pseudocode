/*
 * XREFs of MiProcessSuitableForCombining @ 0x140229534
 * Callers:
 *     MiSharePages @ 0x140228990 (MiSharePages.c)
 *     MiCapturePfnVm @ 0x14022A10C (MiCapturePfnVm.c)
 *     MiCombinePte @ 0x140650CA0 (MiCombinePte.c)
 *     MiCombineWorkingSet @ 0x140650E28 (MiCombineWorkingSet.c)
 * Callees:
 *     MiIsStoreProcess @ 0x140229574 (MiIsStoreProcess.c)
 */

_BOOL8 __fastcall MiProcessSuitableForCombining(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1124) & 0xC00u) >= 0xC00 && !*(_QWORD *)(a1 + 1768) && !(unsigned int)MiIsStoreProcess(a1);
}
