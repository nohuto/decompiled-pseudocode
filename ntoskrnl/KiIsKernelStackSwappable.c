/*
 * XREFs of KiIsKernelStackSwappable @ 0x140577E00
 * Callers:
 *     KeTryToFreezeThreadStack @ 0x14056CB08 (KeTryToFreezeThreadStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIsKernelStackSwappable(__int64 a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( *(_BYTE *)(a1 + 391) && (*(_DWORD *)(a1 + 120) & 0x40) != 0 )
    return *(_BYTE *)(a1 + 195) < 25;
  return v1;
}
