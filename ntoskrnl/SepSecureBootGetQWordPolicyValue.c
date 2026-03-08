/*
 * XREFs of SepSecureBootGetQWordPolicyValue @ 0x1409CDF60
 * Callers:
 *     SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1409CE184 (SepSecureBootValidateBcdDataAgainstBcdRule.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepSecureBootGetQWordPolicyValue(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r8d
  unsigned __int64 v3; // r9
  _QWORD *v4; // rax

  v2 = 0;
  if ( (*(_WORD *)a1 & 0x1F) == 5 )
  {
    *a2 = *(_QWORD *)(a1 + 2);
    return v2;
  }
  if ( (*(_WORD *)a1 & 0x1F) == 6 )
  {
    if ( *a2 >= *(_QWORD *)(a1 + 10) && *a2 <= *(_QWORD *)(a1 + 18) )
      return v2;
LABEL_12:
    *a2 = *(_QWORD *)(a1 + 2);
    return v2;
  }
  if ( (*(_WORD *)a1 & 0x1F) != 7 )
    return (unsigned int)-1069350909;
  v3 = 0LL;
  if ( !*(_WORD *)(a1 + 10) )
    goto LABEL_12;
  v4 = (_QWORD *)(a1 + 12);
  while ( *v4 != *a2 )
  {
    ++v3;
    ++v4;
    if ( v3 >= *(unsigned __int16 *)(a1 + 10) )
      goto LABEL_12;
  }
  return v2;
}
