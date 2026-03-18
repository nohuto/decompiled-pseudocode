/*
 * XREFs of SepDeleteLogonSessionClaims @ 0x14076D9E0
 * Callers:
 *     SepDeReferenceLogonSession @ 0x14076D310 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x14076D84C (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     SepDeleteClaimAttributes @ 0x1409D146C (SepDeleteClaimAttributes.c)
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
