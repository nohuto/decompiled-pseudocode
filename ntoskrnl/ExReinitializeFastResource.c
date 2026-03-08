/*
 * XREFs of ExReinitializeFastResource @ 0x1403D0890
 * Callers:
 *     <none>
 * Callees:
 *     ExReinitializeFastResource2 @ 0x14040E808 (ExReinitializeFastResource2.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReinitializeFastResource(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax
  __int16 v2; // ax
  unsigned __int8 CurrentIrql; // dl

  if ( FeatureFastResource2 )
    return ExReinitializeFastResource2(BugCheckParameter2);
  v2 = *(_WORD *)(BugCheckParameter2 + 26);
  if ( (v2 & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 1u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
  if ( *(_DWORD *)(BugCheckParameter2 + 64) )
    KeBugCheckEx(0x1C6u, 4uLL, BugCheckParameter2, 0LL, 0LL);
  *(_DWORD *)(BugCheckParameter2 + 24) = 0;
  *(_OWORD *)(BugCheckParameter2 + 32) = 0LL;
  *(_WORD *)(BugCheckParameter2 + 26) |= v2 & 0x41;
  result = BugCheckParameter2 + 48;
  *(_QWORD *)(BugCheckParameter2 + 56) = BugCheckParameter2 + 48;
  *(_QWORD *)(BugCheckParameter2 + 48) = BugCheckParameter2 + 48;
  *(_QWORD *)(BugCheckParameter2 + 64) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 72) = 0LL;
  return result;
}
