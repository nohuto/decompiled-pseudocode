PVOID *__fastcall ViThunkFindNextSpecialTable(__int64 a1, unsigned int a2, PVOID *a3)
{
  __int64 v3; // r9
  unsigned int v5; // ecx

  v3 = 0LL;
  if ( !a3 )
    a3 = (PVOID *)ViVerifierDriverAddedSpecialThunkListHead;
  while ( a3 != &ViVerifierDriverAddedSpecialThunkListHead )
  {
    v5 = 0;
    if ( a2 )
    {
      while ( *(PVOID *)(a1 + 8LL * v5) != a3[2] )
      {
        if ( ++v5 >= a2 )
          goto LABEL_7;
      }
      return a3;
    }
LABEL_7:
    a3 = (PVOID *)*a3;
  }
  return (PVOID *)v3;
}
