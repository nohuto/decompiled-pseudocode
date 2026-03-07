__int64 __fastcall AslpFileHasActiveMarkWrapper(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // r9
  unsigned __int64 v6; // r10
  __int16 v7; // ax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r9
  unsigned __int64 i; // rdx
  __int64 v11; // r8

  v4 = 0;
  v5 = 0LL;
  *a1 = 0;
  v6 = *(_QWORD *)(a3 + 24);
  if ( v6 >= *(_QWORD *)(a3 + 40) )
    v6 = *(_QWORD *)(a3 + 40);
  if ( v6 - 1025 > 0xFFFFFBFE || *(_DWORD *)(a3 + 84) || *(_DWORD *)(a3 + 80) )
  {
    return (unsigned int)-1073741275;
  }
  else
  {
    v7 = *(_WORD *)(a2 + 24);
    if ( v7 == 267 )
    {
      v5 = a2 + 152;
    }
    else if ( v7 == 523 )
    {
      v5 = a2 + 168;
    }
    if ( v5 && (v8 = (unsigned int)(*(_DWORD *)(v5 + 4) + 1024), v6 > v8) )
    {
      v9 = v6 - v8 + *(_QWORD *)(a3 + 32);
      for ( i = v9 + 998; i >= v9; --i )
      {
        if ( *(_QWORD *)i == 0x464F564D41534D54LL )
        {
          v11 = *(unsigned __int16 *)(i + 8);
          if ( (_WORD)v11 == 1
            && v11
             + 621
             + *(unsigned int *)(i + 10)
             + *(unsigned int *)(i + 14)
             + (unsigned __int64)*(unsigned int *)(i + 18) == *(_DWORD *)(i + 22) )
          {
            *a1 = 1;
            return v4;
          }
        }
      }
    }
    else
    {
      return (unsigned int)-1073741275;
    }
  }
  return v4;
}
