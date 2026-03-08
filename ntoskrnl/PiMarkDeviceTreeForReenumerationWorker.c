/*
 * XREFs of PiMarkDeviceTreeForReenumerationWorker @ 0x140870DB0
 * Callers:
 *     <none>
 * Callees:
 *     PipSetDevNodeFlags @ 0x1406857DC (PipSetDevNodeFlags.c)
 */

__int64 __fastcall PiMarkDeviceTreeForReenumerationWorker(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 300) == 778 )
    PipSetDevNodeFlags(a1, 8);
  return 0LL;
}
