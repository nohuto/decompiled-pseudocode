/*
 * XREFs of SeDeassignPrimaryToken @ 0x140613F74
 * Callers:
 *     PspProcessDelete @ 0x1406136C0 (PspProcessDelete.c)
 *     SeAssignPrimaryToken @ 0x1407BBBD0 (SeAssignPrimaryToken.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ObFastReplaceObject @ 0x1402F6E80 (ObFastReplaceObject.c)
 */

void __fastcall SeDeassignPrimaryToken(__int64 a1)
{
  ULONG_PTR v1; // rax

  v1 = ObFastReplaceObject((volatile __int64 *)(a1 + 1208), 0LL);
  *(_BYTE *)(v1 + 204) = 0;
  HalPutDmaAdapter((PADAPTER_OBJECT)v1);
}
