/*
 * XREFs of ?TdrHistoryInit@@YAXPEAU_TDR_HISTORY@@@Z @ 0x1C01D30C0
 * Callers:
 *     ?TdrInit@@YAXXZ @ 0x1C0213610 (-TdrInit@@YAXXZ.c)
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 */

void __fastcall TdrHistoryInit(UUID *Uuid)
{
  NTSTATUS v2; // eax

  memset(Uuid, 0, 0xA18uLL);
  v2 = ExUuidCreate(Uuid);
  if ( v2 < 0 )
    WdLogSingleEntry1(2LL, v2);
  Uuid[1].Data1 = KeQueryTimeIncrement();
}
