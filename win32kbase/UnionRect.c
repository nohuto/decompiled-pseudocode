__int64 __fastcall UnionRect(__int64 a1, int *a2, _DWORD *a3)
{
  int v3; // ebx
  BOOL v5; // ecx
  int *v6; // r11
  int *v7; // r10
  BOOL v8; // eax
  __int64 result; // rax
  __int128 v10; // xmm0
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx

  v3 = *a2;
  v5 = *a2 >= a2[2] || a2[1] >= a2[3];
  v6 = a3 + 3;
  v7 = a3 + 1;
  v8 = *a3 >= a3[2] || *v7 >= *v6;
  if ( v5 )
  {
    if ( v8 )
    {
      result = 0LL;
      *(_OWORD *)a1 = 0LL;
      return result;
    }
    v10 = *(_OWORD *)a3;
  }
  else
  {
    if ( !v8 )
    {
      if ( v3 >= *a3 )
        v3 = *a3;
      *(_DWORD *)a1 = v3;
      v11 = a2[1];
      if ( v11 >= *v7 )
        v11 = *v7;
      *(_DWORD *)(a1 + 4) = v11;
      v12 = a2[2];
      if ( v12 <= a3[2] )
        v12 = a3[2];
      *(_DWORD *)(a1 + 8) = v12;
      v13 = a2[3];
      if ( v13 <= *v6 )
        v13 = *v6;
      *(_DWORD *)(a1 + 12) = v13;
      return 1LL;
    }
    v10 = *(_OWORD *)a2;
  }
  *(_OWORD *)a1 = v10;
  return 1LL;
}
