/*
 * XREFs of BiIsOfflineHandle @ 0x1403903FC
 * Callers:
 *     BcdQueryObject @ 0x14082B5C0 (BcdQueryObject.c)
 *     BcdDeleteObject @ 0x14082C47C (BcdDeleteObject.c)
 *     BcdCreateObject @ 0x14082C4D8 (BcdCreateObject.c)
 *     BcdCloseStore @ 0x14082C570 (BcdCloseStore.c)
 *     BiDeleteElement @ 0x14082CDF8 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14082D894 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14082E398 (BcdGetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x14082E5DC (BcdCloseObject.c)
 *     BcdOpenObject @ 0x14082E620 (BcdOpenObject.c)
 *     BcdFlushStore @ 0x140A595E4 (BcdFlushStore.c)
 *     BcdForciblyUnloadStore @ 0x140A5964C (BcdForciblyUnloadStore.c)
 *     BcdSetSystemStore @ 0x140A5972C (BcdSetSystemStore.c)
 *     BcdEnumerateObjects @ 0x140A597EC (BcdEnumerateObjects.c)
 * Callees:
 *     <none>
 */

char __fastcall BiIsOfflineHandle(char a1)
{
  return a1 & 1;
}
