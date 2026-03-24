/*
 * XREFs of BiIsSynchFirmwareEntries @ 0x14039AD84
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1407791D8 (BcdForciblyUnloadStore.c)
 *     BcdCloseStore @ 0x140782314 (BcdCloseStore.c)
 * Callees:
 *     <none>
 */

bool __fastcall BiIsSynchFirmwareEntries(char a1)
{
  return (a1 & 2) == 0;
}
