/*
 * XREFs of SeDeassignPrimaryToken @ 0x1406143D4
 * Callers:
 *     PspProcessDelete @ 0x140613B20 (PspProcessDelete.c)
 *     SeAssignPrimaryToken @ 0x1407BC390 (SeAssignPrimaryToken.c)
 * Callees:
 *     ObFastReplaceObject @ 0x140277500 (ObFastReplaceObject.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 */

void __fastcall SeDeassignPrimaryToken(__int64 a1)
{
  ULONG_PTR v1; // rax

  v1 = ObFastReplaceObject((volatile __int64 *)(a1 + 1208), 0LL);
  *(_BYTE *)(v1 + 204) = 0;
  HalPutDmaAdapter((PADAPTER_OBJECT)v1);
}
