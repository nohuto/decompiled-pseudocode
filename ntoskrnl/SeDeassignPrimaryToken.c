/*
 * XREFs of SeDeassignPrimaryToken @ 0x140705614
 * Callers:
 *     PspProcessDelete @ 0x140704DD0 (PspProcessDelete.c)
 *     SeAssignPrimaryToken @ 0x14083FBD8 (SeAssignPrimaryToken.c)
 * Callees:
 *     ObFastReplaceObject @ 0x140217FC8 (ObFastReplaceObject.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall SeDeassignPrimaryToken(__int64 a1)
{
  _BYTE *v1; // rax

  v1 = (_BYTE *)ObFastReplaceObject((volatile __int64 *)(a1 + 1208), 0LL);
  v1[204] = 0;
  return ObfDereferenceObject(v1);
}
