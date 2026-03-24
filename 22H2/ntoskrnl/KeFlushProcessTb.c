/*
 * XREFs of KeFlushProcessTb @ 0x1402EA3D4
 * Callers:
 *     MmOutSwapProcess @ 0x140249E04 (MmOutSwapProcess.c)
 *     MiDeleteProcessShadow @ 0x140285DE8 (MiDeleteProcessShadow.c)
 *     MiDeleteFinalPageTables @ 0x1402EA0BC (MiDeleteFinalPageTables.c)
 *     KeSwapDirectoryTableBase @ 0x14038D334 (KeSwapDirectoryTableBase.c)
 * Callees:
 *     HvlFlushAddressSpaceTb @ 0x14038FCEC (HvlFlushAddressSpaceTb.c)
 */

char __fastcall KeFlushProcessTb(__int64 a1)
{
  char result; // al

  result = HvlEnlightenments & 1;
  if ( (HvlEnlightenments & 1) != 0 )
    return HvlFlushAddressSpaceTb(a1 & 0xFFFFFFFFFFFFF000uLL, 0LL, 0LL);
  return result;
}
