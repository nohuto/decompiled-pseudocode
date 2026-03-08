/*
 * XREFs of PopSetRange @ 0x14058CA7C
 * Callers:
 *     PoSetHiberRange @ 0x14058C400 (PoSetHiberRange.c)
 *     RtlMarkHiberPhase @ 0x1405B232C (RtlMarkHiberPhase.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x140580CC0 (PopInternalAddToDumpFile.c)
 *     PopCloneRange @ 0x140A9EC7C (PopCloneRange.c)
 *     PopDiscardRange @ 0x140A9F68C (PopDiscardRange.c)
 *     PopSetBootPhaseRange @ 0x140AA2164 (PopSetBootPhaseRange.c)
 */

__int64 __fastcall PopSetRange(ULONG_PTR BugCheckParameter3, int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  if ( *(_BYTE *)(BugCheckParameter3 + 28) )
  {
    PopInternalAddToDumpFile(BugCheckParameter3, 0x1C8u, 0LL);
    KeBugCheckEx(0xA0u, 0x104uLL, 0xAuLL, BugCheckParameter3, 0LL);
  }
  if ( (a2 & 0x8000) != 0 )
    return PopDiscardRange(BugCheckParameter3, a3, a4);
  if ( (a2 & 2) != 0 )
    return PopCloneRange(BugCheckParameter3, a3, a4, a5);
  if ( (a2 & 0x10000) == 0 )
  {
    PopInternalAddToDumpFile(BugCheckParameter3, 0x1C8u, 0LL);
    KeBugCheckEx(0xA0u, 0x105uLL, 0xAuLL, BugCheckParameter3, 0LL);
  }
  return PopSetBootPhaseRange(BugCheckParameter3, a3, a4);
}
