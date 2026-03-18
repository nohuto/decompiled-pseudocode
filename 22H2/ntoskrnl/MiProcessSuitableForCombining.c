/*
 * XREFs of MiProcessSuitableForCombining @ 0x140216D74
 * Callers:
 *     MiCapturePfnVm @ 0x140215CFC (MiCapturePfnVm.c)
 *     MiSharePages @ 0x1402161D0 (MiSharePages.c)
 *     MiCombinePte @ 0x140653300 (MiCombinePte.c)
 *     MiCombineWorkingSet @ 0x140653488 (MiCombineWorkingSet.c)
 * Callees:
 *     MiIsStoreProcess @ 0x140216DB4 (MiIsStoreProcess.c)
 */

_BOOL8 __fastcall MiProcessSuitableForCombining(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1124) & 0xC00u) >= 0xC00 && !*(_QWORD *)(a1 + 1768) && !(unsigned int)MiIsStoreProcess();
}
