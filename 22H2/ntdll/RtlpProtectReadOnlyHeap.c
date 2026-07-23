/*
 * XREFs of RtlpProtectReadOnlyHeap @ 0x18010B16C
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x180069BE0 (RtlAddGrowableFunctionTable.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall RtlpProtectReadOnlyHeap(int a1)
{
  LdrProtectMrdataHeap(a1);
}
