/*
 * XREFs of ExIsFastResourceContended @ 0x140609D70
 * Callers:
 *     <none>
 * Callees:
 *     ExIsFastResourceContended2 @ 0x140413360 (ExIsFastResourceContended2.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

bool __fastcall ExIsFastResourceContended(ULONG_PTR BugCheckParameter2)
{
  unsigned __int8 CurrentIrql; // al

  if ( FeatureFastResource2 )
    return ExIsFastResourceContended2(BugCheckParameter2);
  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  return *(_DWORD *)(BugCheckParameter2 + 72) || *(_DWORD *)(BugCheckParameter2 + 76) != 0;
}
