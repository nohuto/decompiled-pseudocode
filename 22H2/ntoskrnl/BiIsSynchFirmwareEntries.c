/*
 * XREFs of BiIsSynchFirmwareEntries @ 0x140374294
 * Callers:
 *     BcdCloseStore @ 0x140805378 (BcdCloseStore.c)
 *     BcdForciblyUnloadStore @ 0x140A5C300 (BcdForciblyUnloadStore.c)
 * Callees:
 *     <none>
 */

bool __fastcall BiIsSynchFirmwareEntries(char a1)
{
  return (a1 & 2) == 0;
}
