__int64 __fastcall ArrangeActionCompatibleWithStyle(__int64 a1, int a2)
{
  char *v2; // r9
  unsigned int v3; // r8d
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  bool v10; // zf

  v2 = *(char **)(a1 + 40);
  v3 = 1;
  if ( v2[24] < 0 )
    return 0LL;
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              if ( (unsigned int)(v9 - 1) <= 1 )
                return **(_WORD **)(*(_QWORD *)(a1 + 136) + 8LL) != *(_WORD *)(gpsi + 900LL);
              return v3;
            }
          }
        }
        if ( (v2[30] & 4) != 0 && **(_WORD **)(*(_QWORD *)(a1 + 136) + 8LL) != *(_WORD *)(gpsi + 900LL) )
          return v3;
      }
      else if ( (v2[31] & 1) == 0 || (v2[30] & 4) != 0 )
      {
        return v3;
      }
      return 0;
    }
    if ( (v2[30] & 2) == 0 )
      return 0;
    v10 = (v2[31] & 0x20) == 0;
  }
  else
  {
    if ( **(_WORD **)(*(_QWORD *)(a1 + 136) + 8LL) == *(_WORD *)(gpsi + 900LL) || (v2[30] & 1) == 0 )
      return 0;
    v10 = (v2[31] & 1) == 0;
  }
  if ( !v10 )
    return 0;
  return v3;
}
