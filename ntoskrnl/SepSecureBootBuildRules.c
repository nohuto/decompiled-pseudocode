/*
 * XREFs of SepSecureBootBuildRules @ 0x140B93A1C
 * Callers:
 *     SeSecureBootRegisterPolicy @ 0x140B42958 (SeSecureBootRegisterPolicy.c)
 * Callees:
 *     <none>
 */

__int64 SepSecureBootBuildRules()
{
  unsigned int v0; // edx
  char *v1; // r8
  __int64 v2; // r9
  char *v3; // r8
  int v4; // edx
  char v5; // al

  v0 = *((unsigned __int16 *)qword_140D17BD0 + 18);
  if ( (_WORD)v0 )
  {
    v1 = (char *)qword_140D17BD0 + *((unsigned int *)qword_140D17BD0 + 10) + 60;
    qword_140D1BC38 = (__int64)v1;
    v2 = v0;
    v3 = v1 + 4;
    v4 = dword_140D1BC40;
    do
    {
      v5 = v3[3];
      v3 += 12;
      v4 |= 1 << (v5 & 0xF);
      --v2;
    }
    while ( v2 );
    dword_140D1BC40 = v4;
  }
  if ( *((_WORD *)qword_140D17BD0 + 19) )
    qword_140D1BC50 = (__int64)qword_140D17BD0 + *((unsigned int *)qword_140D17BD0 + 11) + 60;
  return 0LL;
}
