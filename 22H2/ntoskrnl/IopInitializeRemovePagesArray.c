/*
 * XREFs of IopInitializeRemovePagesArray @ 0x140394AB0
 * Callers:
 *     IopInitializeCrashDump @ 0x1408347D8 (IopInitializeCrashDump.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

void IopInitializeRemovePagesArray()
{
  __int64 Pool2; // rax

  if ( !IopRemovePagesArray )
  {
    Pool2 = ExAllocatePool2(64LL, 16008LL, 1682992969LL);
    IopRemovePagesArray = Pool2;
    if ( Pool2 )
      *(_DWORD *)(Pool2 + 4) = 1000;
  }
}
