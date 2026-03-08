/*
 * XREFs of IopInitializeRemovePagesArray @ 0x140392E30
 * Callers:
 *     IopInitializeCrashDump @ 0x140834B28 (IopInitializeCrashDump.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
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
