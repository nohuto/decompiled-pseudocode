/*
 * XREFs of ExDeleteFastResource @ 0x1403CEDE0
 * Callers:
 *     <none>
 * Callees:
 *     ExpDeleteResource @ 0x1403CEE78 (ExpDeleteResource.c)
 *     ExDeleteFastResource2 @ 0x14040DFE4 (ExDeleteFastResource2.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall ExDeleteFastResource(ULONG_PTR BugCheckParameter2)
{
  __int16 v2; // ax
  unsigned __int8 CurrentIrql; // dl

  if ( FeatureFastResource2 )
    return ExDeleteFastResource2(BugCheckParameter2);
  v2 = *(_WORD *)(BugCheckParameter2 + 26);
  if ( (v2 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 1u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
  if ( *(_DWORD *)(BugCheckParameter2 + 64) )
    KeBugCheckEx(0x1C6u, 4uLL, BugCheckParameter2, 0LL, 0LL);
  *(_WORD *)(BugCheckParameter2 + 26) = v2 & 0xFFBE;
  return ExpDeleteResource();
}
