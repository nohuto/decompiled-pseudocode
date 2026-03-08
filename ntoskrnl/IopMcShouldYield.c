/*
 * XREFs of IopMcShouldYield @ 0x14055CFD0
 * Callers:
 *     IopMcAddMdlPagesToTable @ 0x14055C730 (IopMcAddMdlPagesToTable.c)
 *     IopMcRemoveMdlPagesFromTable @ 0x14055CE20 (IopMcRemoveMdlPagesFromTable.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x1402C9870 (KeShouldYieldProcessor.c)
 */

bool __fastcall IopMcShouldYield(int a1, unsigned __int8 a2)
{
  if ( a1 && (a1 & 0xF) == 0 )
  {
    if ( (dword_140C5D2E4 & 0x40000000) != 0 )
      return 1;
    if ( a2 < 2u )
      return KeShouldYieldProcessor() != 0;
  }
  return 0;
}
