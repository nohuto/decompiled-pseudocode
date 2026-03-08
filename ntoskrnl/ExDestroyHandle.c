/*
 * XREFs of ExDestroyHandle @ 0x1407D76E4
 * Callers:
 *     PspJobDelete @ 0x140291AD0 (PspJobDelete.c)
 *     PspProcessDelete @ 0x140704DD0 (PspProcessDelete.c)
 *     PspThreadDelete @ 0x14075E4B0 (PspThreadDelete.c)
 *     AlpcpFreeMessageFunction @ 0x140776C40 (AlpcpFreeMessageFunction.c)
 *     ObCloseHandleTableEntry @ 0x1407D8274 (ObCloseHandleTableEntry.c)
 *     RtlpInsertStringAtom @ 0x1407DBB30 (RtlpInsertStringAtom.c)
 *     RtlpFreeHandleForAtom @ 0x1407DC658 (RtlpFreeHandleForAtom.c)
 * Callees:
 *     ExSweepSingleHandle @ 0x14035218C (ExSweepSingleHandle.c)
 *     ExpFreeHandleTableEntry @ 0x1407D8838 (ExpFreeHandleTableEntry.c)
 *     ExpUpdateDebugInfo @ 0x1409F6478 (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ExDestroyHandle(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // ebx

  if ( *(_QWORD *)(a1 + 96) )
    ExpUpdateDebugInfo(a1, KeGetCurrentThread(), a2, 2LL);
  v6 = ExSweepSingleHandle(a1, a3);
  ExpFreeHandleTableEntry(a1, a2, a3);
  return v6;
}
