/*
 * XREFs of IoSetGenericIrpExtension @ 0x140390920
 * Callers:
 *     StRtlIoStorInfoSetNvCachePriority @ 0x140674868 (StRtlIoStorInfoSetNvCachePriority.c)
 * Callees:
 *     IopIrpHasExtensionType @ 0x1402B1D58 (IopIrpHasExtensionType.c)
 *     IopAllocateIrpExtension @ 0x1402B22EC (IopAllocateIrpExtension.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall IoSetGenericIrpExtension(__int64 a1, const void *a2, unsigned __int16 a3, char a4)
{
  size_t v4; // rbx
  int v6; // edx
  _WORD *IrpExtension; // rax

  v4 = a3;
  if ( a3 > 4u )
    return 3221225485LL;
  v6 = 2;
  if ( !a4 && IopIrpHasExtensionType(a1, 2u) )
    return 3221225505LL;
  IrpExtension = IopAllocateIrpExtension(a1, v6);
  if ( !IrpExtension )
    return 3221225626LL;
  memmove(IrpExtension + 2, a2, v4);
  return 0LL;
}
