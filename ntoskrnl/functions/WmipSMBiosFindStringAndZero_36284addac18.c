__int64 __fastcall WmipSMBiosFindStringAndZero(__int64 a1, int a2, unsigned int a3)
{
  unsigned __int64 v3; // rbx
  unsigned int v4; // esi
  char *v5; // rax
  unsigned int v6; // edi
  char *v7; // rcx

  v3 = a1 + a3;
  if ( a2 )
  {
    v4 = 0;
    v5 = (char *)(a1 + *(unsigned __int8 *)(a1 + 1));
    v6 = a2 - 1;
    if ( a2 == 1 )
      goto LABEL_8;
    do
    {
      v7 = strchr(v5, 0);
      v5 = v7 + 1;
      if ( (unsigned __int64)(v7 + 1) >= v3 || !*(_WORD *)v7 )
        return 3221225524LL;
      ++v4;
    }
    while ( v4 < v6 );
    do
    {
      if ( !*v5 )
        break;
      *v5++ = 95;
LABEL_8:
      ;
    }
    while ( (unsigned __int64)v5 < v3 );
  }
  return 0LL;
}
