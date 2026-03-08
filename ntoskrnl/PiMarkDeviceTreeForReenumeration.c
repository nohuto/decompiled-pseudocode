/*
 * XREFs of PiMarkDeviceTreeForReenumeration @ 0x1407855A8
 * Callers:
 *     PiCollapseEnumRequests @ 0x1402F4C5C (PiCollapseEnumRequests.c)
 *     PiProcessReenumeration @ 0x1407854F4 (PiProcessReenumeration.c)
 * Callees:
 *     PipSetDevNodeFlags @ 0x1406857DC (PipSetDevNodeFlags.c)
 *     PipForDeviceNodeSubtree @ 0x1407855F8 (PipForDeviceNodeSubtree.c)
 */

__int64 __fastcall PiMarkDeviceTreeForReenumeration(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 300) == 778 )
    result = PipSetDevNodeFlags(a1, 8);
  if ( a2 )
    return PipForDeviceNodeSubtree(a1, PiMarkDeviceTreeForReenumerationWorker, 0LL);
  return result;
}
