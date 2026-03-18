/*
 * XREFs of SeDeassignPrimaryToken @ 0x1407E0C48
 * Callers:
 *     PspProcessDelete @ 0x1407E0F30 (PspProcessDelete.c)
 *     SeAssignPrimaryToken @ 0x1408471EC (SeAssignPrimaryToken.c)
 * Callees:
 *     ObFastReplaceObject @ 0x140276A48 (ObFastReplaceObject.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall SeDeassignPrimaryToken(__int64 a1)
{
  _BYTE *v1; // rax

  v1 = (_BYTE *)ObFastReplaceObject((volatile __int64 *)(a1 + 1208), 0LL);
  v1[204] = 0;
  return ObfDereferenceObject(v1);
}
