/*
 * XREFs of BiIsOfflineHandle @ 0x140374424
 * Callers:
 *     BcdQueryObject @ 0x14080447C (BcdQueryObject.c)
 *     BcdDeleteObject @ 0x140805284 (BcdDeleteObject.c)
 *     BcdCreateObject @ 0x1408052E0 (BcdCreateObject.c)
 *     BcdCloseStore @ 0x140805378 (BcdCloseStore.c)
 *     BiDeleteElement @ 0x140805C00 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14080669C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14080723C (BcdGetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x140807480 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1408074C4 (BcdOpenObject.c)
 *     BcdFlushStore @ 0x140A5C298 (BcdFlushStore.c)
 *     BcdForciblyUnloadStore @ 0x140A5C300 (BcdForciblyUnloadStore.c)
 *     BcdSetSystemStore @ 0x140A5C3E0 (BcdSetSystemStore.c)
 *     BcdEnumerateObjects @ 0x140A5C4A0 (BcdEnumerateObjects.c)
 * Callees:
 *     <none>
 */

char __fastcall BiIsOfflineHandle(char a1)
{
  return a1 & 1;
}
