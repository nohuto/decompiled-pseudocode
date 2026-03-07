__int64 __fastcall ViThunkReplaceSpecialPristine(_QWORD *a1)
{
  PVOID *v1; // rdx
  __int64 result; // rax
  PVOID *i; // rcx
  unsigned int v5; // r11d
  _QWORD *v6; // r8
  int v7; // r10d

  v1 = (PVOID *)ViVerifierDriverAddedSpecialThunkListHead;
  result = 0LL;
LABEL_10:
  if ( v1 != &ViVerifierDriverAddedSpecialThunkListHead )
  {
    result = 0LL;
    for ( i = (PVOID *)v1[3]; ; i = (PVOID *)*i )
    {
      if ( i == v1 + 3 )
      {
        v1 = (PVOID *)*v1;
        goto LABEL_10;
      }
      v5 = *((_DWORD *)i + 6);
      v6 = i + 4;
      v7 = 0;
      result = 0LL;
      if ( v5 )
        break;
LABEL_7:
      ;
    }
    while ( *a1 != v6[1] )
    {
      v6 += 2;
      if ( ++v7 >= v5 )
      {
        result = 0LL;
        goto LABEL_7;
      }
    }
    *a1 = *v6;
    return 1LL;
  }
  return result;
}
