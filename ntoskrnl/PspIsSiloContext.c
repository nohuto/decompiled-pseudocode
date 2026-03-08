/*
 * XREFs of PspIsSiloContext @ 0x1407387C4
 * Callers:
 *     PsInsertSiloContext @ 0x140738510 (PsInsertSiloContext.c)
 *     PsInsertPermanentSiloContextEx @ 0x14073858C (PsInsertPermanentSiloContextEx.c)
 *     PsReplaceSiloContext @ 0x1409A9740 (PsReplaceSiloContext.c)
 * Callees:
 *     <none>
 */

bool __fastcall PspIsSiloContext(__int64 a1)
{
  PVOID v1; // rax

  v1 = (PVOID)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  return v1 == PsSiloContextNonPagedType || v1 == PsSiloContextPagedType;
}
