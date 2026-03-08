/*
 * XREFs of KiSaveNpxState @ 0x14036A584
 * Callers:
 *     KiSaveProcessorState @ 0x14036A140 (KiSaveProcessorState.c)
 * Callees:
 *     RtlXSave @ 0x14036A800 (RtlXSave.c)
 */

__int64 __fastcall KiSaveNpxState(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( (a2 & 0x100008) == 0x100008 )
    _fxsave((void *)(a1 + 256));
  result = 1048640LL;
  if ( (a2 & 0x100040) == 0x100040 )
  {
    result = MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFC;
    if ( (MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFC) != 0 )
      return RtlXSave(*(int *)(a1 + 1248) + a1 + 720, (unsigned int)result, 1048584LL);
  }
  return result;
}
