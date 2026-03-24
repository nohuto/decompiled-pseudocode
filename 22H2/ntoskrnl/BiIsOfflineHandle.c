/*
 * XREFs of BiIsOfflineHandle @ 0x14039AE9C
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1407791D8 (BcdForciblyUnloadStore.c)
 *     BcdFlushStore @ 0x14077A194 (BcdFlushStore.c)
 *     BcdCloseStore @ 0x140782314 (BcdCloseStore.c)
 *     BiDeleteElement @ 0x14078309C (BiDeleteElement.c)
 *     BcdQueryObject @ 0x140783204 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x140783940 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140783ACC (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x140783EDC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1407840C0 (BcdGetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x14096EC68 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14096ED00 (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x14096ED5C (BcdEnumerateObjects.c)
 * Callees:
 *     <none>
 */

char __fastcall BiIsOfflineHandle(char a1)
{
  return a1 & 1;
}
