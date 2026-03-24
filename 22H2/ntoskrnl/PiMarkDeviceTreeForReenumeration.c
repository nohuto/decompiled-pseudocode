/*
 * XREFs of PiMarkDeviceTreeForReenumeration @ 0x140749330
 * Callers:
 *     PiCollapseEnumRequests @ 0x140370448 (PiCollapseEnumRequests.c)
 *     PiProcessReenumeration @ 0x14074927C (PiProcessReenumeration.c)
 * Callees:
 *     PipForDeviceNodeSubtree @ 0x14069B540 (PipForDeviceNodeSubtree.c)
 *     PipSetDevNodeFlags @ 0x140741ABC (PipSetDevNodeFlags.c)
 */

__int64 __fastcall PiMarkDeviceTreeForReenumeration(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 300) == 776 )
    result = PipSetDevNodeFlags(a1, 8);
  if ( a2 )
    return PipForDeviceNodeSubtree(a1, (__int64)PiMarkDeviceTreeForReenumerationWorker, 0LL);
  return result;
}
