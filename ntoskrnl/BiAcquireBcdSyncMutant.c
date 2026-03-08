/*
 * XREFs of BiAcquireBcdSyncMutant @ 0x14082ED10
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
 *     ZwWaitForSingleObject @ 0x140412390 (ZwWaitForSingleObject.c)
 *     BiGetCurrentBcdMutantHandle @ 0x14082ED70 (BiGetCurrentBcdMutantHandle.c)
 */

NTSTATUS __fastcall BiAcquireBcdSyncMutant(char a1)
{
  NTSTATUS result; // eax
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  if ( a1 )
    return 0;
  result = BiGetCurrentBcdMutantHandle(&v2);
  if ( result < 0 )
    return result;
  if ( v2 == -1 )
    return 0;
  Timeout.QuadPart = -600000000LL;
  result = ZwWaitForSingleObject(BcdMutantHandle, 0, &Timeout);
  if ( result == 258 )
    return -1073741823;
  return result;
}
