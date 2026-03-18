/*
 * XREFs of RIMHidTLCActive @ 0x1C0199F40
 * Callers:
 *     RIMFreeSpecificDevWorker @ 0x1C00B7910 (RIMFreeSpecificDevWorker.c)
 *     RIMIsRawInputActive @ 0x1C00DBE44 (RIMIsRawInputActive.c)
 *     rimObsStartStopDeviceRead @ 0x1C01B5628 (rimObsStartStopDeviceRead.c)
 * Callees:
 *     RIMHidValidExclusive @ 0x1C0199F7C (RIMHidValidExclusive.c)
 */

__int64 __fastcall RIMHidTLCActive(_DWORD *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( a1[7] || a1[6] || a1[8] > (unsigned int)RIMHidValidExclusive(a1) )
    return 1;
  return v1;
}
