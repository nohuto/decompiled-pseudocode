/*
 * XREFs of BiIsSynchFirmwareEntries @ 0x14039026C
 * Callers:
 *     BcdCloseStore @ 0x14082C570 (BcdCloseStore.c)
 *     BcdForciblyUnloadStore @ 0x140A5964C (BcdForciblyUnloadStore.c)
 * Callees:
 *     <none>
 */

bool __fastcall BiIsSynchFirmwareEntries(char a1)
{
  return (a1 & 2) == 0;
}
