/*
 * XREFs of BiReleaseBcdSyncMutant @ 0x140784674
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1407791D8 (BcdForciblyUnloadStore.c)
 *     BcdFlushStore @ 0x14077A194 (BcdFlushStore.c)
 *     BcdCloseStore @ 0x140782314 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x140782D48 (BcdOpenStore.c)
 *     BiDeleteElement @ 0x14078309C (BiDeleteElement.c)
 *     BcdQueryObject @ 0x140783204 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x140783940 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140783ACC (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x140783EDC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1407840C0 (BcdGetElementDataWithFlags.c)
 *     SepSecureBootCorrectBcd @ 0x140924238 (SepSecureBootCorrectBcd.c)
 *     BcdCreateObject @ 0x14096EC68 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14096ED00 (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x14096ED5C (BcdEnumerateObjects.c)
 * Callees:
 *     ZwReleaseMutant @ 0x1403F9E20 (ZwReleaseMutant.c)
 */

NTSTATUS __fastcall BiReleaseBcdSyncMutant(char a1)
{
  NTSTATUS result; // eax

  if ( !a1 && BcdMutantHandle != (HANDLE)-1LL )
    return ZwReleaseMutant(BcdMutantHandle, 0LL);
  return result;
}
