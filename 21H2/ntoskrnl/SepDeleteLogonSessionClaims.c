/*
 * XREFs of SepDeleteLogonSessionClaims @ 0x14069BFB8
 * Callers:
 *     SepDeReferenceLogonSession @ 0x14069BBC0 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x14069BDD0 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     SepDeleteClaimAttributes @ 0x1409CE8C4 (SepDeleteClaimAttributes.c)
 */

__int64 __fastcall SepDeleteLogonSessionClaims(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)(a1 + 112);
  if ( v2 )
  {
    result = SepDeleteClaimAttributes(v2);
    *(_QWORD *)(a1 + 112) = 0LL;
  }
  return result;
}
