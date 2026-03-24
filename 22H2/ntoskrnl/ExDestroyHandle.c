/*
 * XREFs of ExDestroyHandle @ 0x14061A1D8
 * Callers:
 *     PspJobDelete @ 0x1402DD320 (PspJobDelete.c)
 *     PspProcessDelete @ 0x140613B20 (PspProcessDelete.c)
 *     AlpcpFreeMessageFunction @ 0x140616B30 (AlpcpFreeMessageFunction.c)
 *     PspThreadDelete @ 0x140619D80 (PspThreadDelete.c)
 *     RtlpFreeHandleForAtom @ 0x14068631C (RtlpFreeHandleForAtom.c)
 *     RtlpInsertStringAtom @ 0x14068FC0C (RtlpInsertStringAtom.c)
 * Callees:
 *     ExSweepSingleHandle @ 0x140253EF4 (ExSweepSingleHandle.c)
 *     ExpFreeHandleTableEntry @ 0x14061A23C (ExpFreeHandleTableEntry.c)
 *     ExpUpdateDebugInfo @ 0x14094CE54 (ExpUpdateDebugInfo.c)
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
