/*
 * XREFs of BiAcquireBcdSyncMutant @ 0x140807BB4
 * Callers:
 *     BcdQueryObject @ 0x14080447C (BcdQueryObject.c)
 *     BcdDeleteObject @ 0x140805284 (BcdDeleteObject.c)
 *     BcdCreateObject @ 0x1408052E0 (BcdCreateObject.c)
 *     BcdCloseStore @ 0x140805378 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x14080561C (BcdOpenStore.c)
 *     BiDeleteElement @ 0x140805C00 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14080669C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14080723C (BcdGetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x140807480 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1408074C4 (BcdOpenObject.c)
 *     SepSecureBootCorrectBcd @ 0x1409D0A14 (SepSecureBootCorrectBcd.c)
 *     BcdFlushStore @ 0x140A5C298 (BcdFlushStore.c)
 *     BcdForciblyUnloadStore @ 0x140A5C300 (BcdForciblyUnloadStore.c)
 *     BcdSetSystemStore @ 0x140A5C3E0 (BcdSetSystemStore.c)
 *     BcdEnumerateObjects @ 0x140A5C4A0 (BcdEnumerateObjects.c)
 * Callees:
 *     ZwWaitForSingleObject @ 0x14041A720 (ZwWaitForSingleObject.c)
 *     BiGetCurrentBcdMutantHandle @ 0x140807C14 (BiGetCurrentBcdMutantHandle.c)
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
