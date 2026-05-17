/*
 * XREFs of RtlpProtectInvertedFunctionTable @ 0x18010B160
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x180069BE0 (RtlAddGrowableFunctionTable.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RtlpProtectInvertedFunctionTable(int a1)
{
  return LdrProtectMrdata(a1);
}
