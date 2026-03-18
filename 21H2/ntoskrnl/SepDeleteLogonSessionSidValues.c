/*
 * XREFs of SepDeleteLogonSessionSidValues @ 0x1409CCB9C
 * Callers:
 *     SepDeReferenceLogonSession @ 0x14069BBC0 (SepDeReferenceLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x14069BDD0 (SepDeleteLogonSessionTrack.c)
 * Callees:
 *     SepDereferenceSidValuesBlock @ 0x1409CCC54 (SepDereferenceSidValuesBlock.c)
 */

__int64 __fastcall SepDeleteLogonSessionSidValues(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  v2 = *(void **)(a1 + 120);
  if ( v2 )
  {
    result = SepDereferenceSidValuesBlock(v2);
    *(_QWORD *)(a1 + 120) = 0LL;
  }
  return result;
}
