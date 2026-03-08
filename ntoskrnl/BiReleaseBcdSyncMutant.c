/*
 * XREFs of BiReleaseBcdSyncMutant @ 0x14082EDB8
 * Callers:
 *     BcdQueryObject @ 0x14082B5C0 (BcdQueryObject.c)
 *     BcdDeleteObject @ 0x14082C47C (BcdDeleteObject.c)
 *     BcdCreateObject @ 0x14082C4D8 (BcdCreateObject.c)
 *     BcdCloseStore @ 0x14082C570 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x14082C814 (BcdOpenStore.c)
 *     BiDeleteElement @ 0x14082CDF8 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14082D894 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14082E398 (BcdGetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x14082E5DC (BcdCloseObject.c)
 *     BcdOpenObject @ 0x14082E620 (BcdOpenObject.c)
 *     SepSecureBootCorrectBcd @ 0x1409CDB74 (SepSecureBootCorrectBcd.c)
 *     BcdFlushStore @ 0x140A595E4 (BcdFlushStore.c)
 *     BcdForciblyUnloadStore @ 0x140A5964C (BcdForciblyUnloadStore.c)
 *     BcdSetSystemStore @ 0x140A5972C (BcdSetSystemStore.c)
 *     BcdEnumerateObjects @ 0x140A597EC (BcdEnumerateObjects.c)
 * Callees:
 *     ZwReleaseMutant @ 0x140412710 (ZwReleaseMutant.c)
 */

__int64 __fastcall BiReleaseBcdSyncMutant(char a1)
{
  __int64 result; // rax

  if ( !a1 && BcdMutantHandle != (HANDLE)-1LL )
    return ZwReleaseMutant((__int64)BcdMutantHandle, 0LL);
  return result;
}
