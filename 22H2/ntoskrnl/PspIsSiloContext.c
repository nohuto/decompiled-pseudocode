/*
 * XREFs of PspIsSiloContext @ 0x140660ED8
 * Callers:
 *     PsInsertSiloContext @ 0x1405D25C0 (PsInsertSiloContext.c)
 *     PsInsertPermanentSiloContextEx @ 0x140660CE4 (PsInsertPermanentSiloContextEx.c)
 *     PsReplaceSiloContext @ 0x140905BF0 (PsReplaceSiloContext.c)
 * Callees:
 *     <none>
 */

bool __fastcall PspIsSiloContext(__int64 a1)
{
  struct _DMA_ADAPTER *v1; // rax

  v1 = (struct _DMA_ADAPTER *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  return v1 == PsSiloContextNonPagedType || v1 == PsSiloContextPagedType;
}
