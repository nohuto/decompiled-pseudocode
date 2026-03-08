/*
 * XREFs of SepDeleteLogonSessionSidValues @ 0x1409CC8AC
 * Callers:
 *     SepDeleteLogonSessionTrack @ 0x1407DAE44 (SepDeleteLogonSessionTrack.c)
 *     SepDeReferenceLogonSession @ 0x1407DBBB8 (SepDeReferenceLogonSession.c)
 * Callees:
 *     SepDereferenceSidValuesBlock @ 0x1409CC964 (SepDereferenceSidValuesBlock.c)
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
