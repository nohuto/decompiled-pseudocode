__int64 __fastcall RtlQueryInformationAcl(unsigned __int8 *a1, unsigned int *a2, unsigned int a3, int a4)
{
  unsigned int v4; // r10d
  int v6; // r9d
  unsigned int v7; // r10d
  unsigned __int8 *v8; // rdx
  int v9; // r8d
  unsigned int v10; // r9d
  unsigned __int8 *v11; // rax
  int v12; // edx

  v4 = *a1;
  if ( (unsigned __int8)(v4 - 2) > 2u )
    return 3221225485LL;
  v6 = a4 - 1;
  if ( !v6 )
  {
    if ( a3 >= 4 )
    {
      *a2 = v4;
      return 0LL;
    }
    return 3221225507LL;
  }
  if ( v6 == 1 )
  {
    if ( a3 >= 0xC )
    {
      v7 = *((unsigned __int16 *)a1 + 2);
      v8 = a1 + 8;
      v9 = 0;
      v10 = 0;
      if ( *((_WORD *)a1 + 2) )
      {
        while ( v8 < &a1[*((unsigned __int16 *)a1 + 1)] )
        {
          ++v10;
          v8 += *((unsigned __int16 *)v8 + 1);
          if ( v10 >= v7 )
            goto LABEL_8;
        }
        return 3221225485LL;
      }
LABEL_8:
      v11 = &a1[*((unsigned __int16 *)a1 + 1)];
      *a2 = v7;
      if ( v8 > v11 )
        v8 = 0LL;
      if ( v8 )
      {
        v12 = (_DWORD)v8 - (_DWORD)a1;
        a2[1] = v12;
        v9 = *((unsigned __int16 *)a1 + 1) - v12;
      }
      else
      {
        a2[1] = *((unsigned __int16 *)a1 + 1);
      }
      a2[2] = v9;
      return 0LL;
    }
    return 3221225507LL;
  }
  return 3221225475LL;
}
