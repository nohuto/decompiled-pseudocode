/*
 * XREFs of KeFlushProcessTb @ 0x1402A566C
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1402A54F4 (MiDeleteFinalPageTables.c)
 *     MiDeleteProcessShadow @ 0x1402A5828 (MiDeleteProcessShadow.c)
 *     MmOutSwapProcess @ 0x1402C00EC (MmOutSwapProcess.c)
 *     KeSwapDirectoryTableBase @ 0x1403D20B4 (KeSwapDirectoryTableBase.c)
 * Callees:
 *     KiFlushAddressSpaceTb @ 0x1403C6B40 (KiFlushAddressSpaceTb.c)
 */

__int64 __fastcall KeFlushProcessTb(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)HvlEnlightenments;
  if ( (HvlEnlightenments & 1) != 0 )
    return KiFlushAddressSpaceTb(a1 & 0xFFFFFFFFFFFFF000uLL, 0LL, 0LL, 0LL);
  return result;
}
