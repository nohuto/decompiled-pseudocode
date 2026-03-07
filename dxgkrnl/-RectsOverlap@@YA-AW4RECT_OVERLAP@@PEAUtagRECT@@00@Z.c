__int64 __fastcall RectsOverlap(int *a1, int *a2, __int64 a3)
{
  int v3; // r10d
  int v4; // r11d
  BOOL v5; // r9d
  int v6; // esi
  int v7; // ebp
  BOOL v8; // eax
  BOOL v9; // edi
  int v10; // ebx
  BOOL v11; // eax
  int v13; // eax

  v3 = a1[2];
  v4 = *a2;
  v5 = v3 > *a2 && *a1 < a2[2];
  v6 = a1[3];
  v7 = a2[1];
  v8 = v6 > v7 && a1[1] < a2[3];
  if ( !v5 || !v8 )
    return 0LL;
  v9 = *a1 >= v4 && v3 <= a2[2];
  v10 = a1[1];
  v11 = v10 >= v7 && v6 <= a2[3];
  if ( v9 )
  {
    if ( v11 )
      return 1LL;
    if ( v7 <= v10 || a2[3] >= v6 )
    {
      if ( a3 )
      {
        *(_OWORD *)a3 = *(_OWORD *)a1;
        v13 = a2[1];
        if ( a1[1] >= v13 )
          *(_DWORD *)(a3 + 4) = a2[3];
        else
          *(_DWORD *)(a3 + 12) = v13;
      }
      return 2LL;
    }
  }
  else if ( v11 && (v4 <= *a1 || a2[2] >= v3) )
  {
    if ( a3 )
    {
      *(_OWORD *)a3 = *(_OWORD *)a1;
      if ( *a1 >= *a2 )
        *(_DWORD *)a3 = a2[2];
      else
        *(_DWORD *)(a3 + 8) = *a2;
    }
    return 2LL;
  }
  return 3LL;
}
