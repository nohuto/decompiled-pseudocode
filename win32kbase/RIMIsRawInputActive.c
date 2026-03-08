/*
 * XREFs of RIMIsRawInputActive @ 0x1C019DFB8
 * Callers:
 *     rimOnPnpArrived @ 0x1C00889C0 (rimOnPnpArrived.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C00C7510 (RIMDirectStartStopDeviceRead.c)
 * Callees:
 *     RIMHidTLCActive @ 0x1C01BF664 (RIMHidTLCActive.c)
 */

__int64 __fastcall RIMIsRawInputActive(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( *(_BYTE *)(a1 + 48) == 2 && (*(_DWORD *)(a1 + 184) & 0x20000) != 0 )
    return (unsigned int)RIMHidTLCActive(*(_QWORD *)(a1 + 464)) != 0;
  return v1;
}
