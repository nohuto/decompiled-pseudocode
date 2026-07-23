/*
 * XREFs of SeDeassignPrimaryToken @ 0x14067DBD4
 * Callers:
 *     PspProcessDelete @ 0x14067D320 (PspProcessDelete.c)
 *     SeAssignPrimaryToken @ 0x1407BC360 (SeAssignPrimaryToken.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObFastReplaceObject @ 0x140301BD0 (ObFastReplaceObject.c)
 */

void __fastcall SeDeassignPrimaryToken(__int64 a1)
{
  ULONG_PTR v1; // rax

  v1 = ObFastReplaceObject((volatile __int64 *)(a1 + 1208), 0LL);
  *(_BYTE *)(v1 + 204) = 0;
  HalPutDmaAdapter((PADAPTER_OBJECT)v1);
}
