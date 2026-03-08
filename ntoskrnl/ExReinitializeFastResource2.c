/*
 * XREFs of ExReinitializeFastResource2 @ 0x14040E808
 * Callers:
 *     ExReinitializeFastResource @ 0x1403D0890 (ExReinitializeFastResource.c)
 * Callees:
 *     ExpIsFastResourceOwned @ 0x14041057C (ExpIsFastResourceOwned.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

char __fastcall ExReinitializeFastResource2(ULONG_PTR BugCheckParameter2)
{
  unsigned __int8 CurrentIrql; // al
  ULONG_PTR v2; // rdx
  char v3; // al
  __int16 v4; // cx
  char result; // al

  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 1u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
  if ( (unsigned __int8)ExpIsFastResourceOwned(BugCheckParameter2, BugCheckParameter2) )
    KeBugCheckEx(0x1C6u, 4uLL, v2, 0LL, 0LL);
  v3 = *(_BYTE *)(v2 + 101);
  v4 = *(_WORD *)(v2 + 26) & 0x41;
  *(_QWORD *)(v2 + 64) = 0LL;
  *(_QWORD *)(v2 + 72) = 0LL;
  result = v3 & 0xF8 | 2;
  *(_BYTE *)(v2 + 101) = result;
  *(_QWORD *)(v2 + 80) = 0LL;
  *(_DWORD *)(v2 + 96) = 0;
  *(_BYTE *)(v2 + 100) = 0;
  *(_QWORD *)v2 = 0LL;
  *(_OWORD *)(v2 + 8) = 0LL;
  *(_QWORD *)(v2 + 56) = 0LL;
  *(_WORD *)(v2 + 26) = v4;
  return result;
}
