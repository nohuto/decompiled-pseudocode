/*
 * XREFs of SepSecureBootBuildRules @ 0x140A9372C
 * Callers:
 *     SeSecureBootRegisterPolicy @ 0x140A7084C (SeSecureBootRegisterPolicy.c)
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

  v0 = *((unsigned __int16 *)qword_140CF5120 + 18);
  if ( (_WORD)v0 )
  {
    v1 = (char *)qword_140CF5120 + *((unsigned int *)qword_140CF5120 + 10) + 60;
    qword_140CFA3E0 = (__int64)v1;
    v2 = v0;
    v3 = v1 + 4;
    v4 = dword_140CFA3F4;
    do
    {
      v5 = v3[3];
      v3 += 12;
      v4 |= 1 << (v5 & 0xF);
      --v2;
    }
    while ( v2 );
    dword_140CFA3F4 = v4;
  }
  if ( *((_WORD *)qword_140CF5120 + 19) )
    qword_140CFA3E8 = (__int64)qword_140CF5120 + *((unsigned int *)qword_140CF5120 + 11) + 60;
  return 0LL;
}
