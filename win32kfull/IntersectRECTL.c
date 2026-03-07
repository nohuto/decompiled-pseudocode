_BOOL8 __fastcall IntersectRECTL(int *a1, int *a2)
{
  int v2; // r8d
  int v4; // ecx
  int v5; // eax
  int v6; // r10d
  int v7; // r9d
  int v8; // r8d
  int v9; // edx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int128 v14; // [rsp+0h] [rbp-18h]

  v2 = *a1;
  v4 = a1[1];
  v5 = v2;
  v6 = *a2;
  v7 = a2[3];
  if ( v2 < *a2 )
    v5 = *a2;
  if ( v2 >= v6 )
    v6 = v2;
  v8 = a2[1];
  v9 = a2[2];
  LODWORD(v14) = v5;
  v10 = v4;
  if ( v4 >= v8 )
    v8 = v4;
  else
    v10 = v8;
  DWORD1(v14) = v10;
  v11 = a1[2];
  if ( v11 <= v9 )
    v9 = a1[2];
  else
    v11 = v9;
  DWORD2(v14) = v11;
  v12 = a1[3];
  if ( v12 <= v7 )
    v7 = a1[3];
  else
    v12 = v7;
  HIDWORD(v14) = v12;
  *(_OWORD *)a1 = v14;
  return v9 > v6 && v7 > v8;
}
