__int64 __fastcall WmipStaticInstanceNameSize(__int64 a1)
{
  unsigned int v1; // edx
  int v3; // r8d
  int v4; // eax
  __int64 v5; // rax
  _QWORD *v6; // r9
  __int64 v7; // r10
  __int64 v8; // r8

  v1 = *(_DWORD *)(a1 + 76);
  if ( !v1 )
  {
    v3 = *(_DWORD *)(a1 + 72);
    v4 = *(_DWORD *)(a1 + 16);
    v1 = 4 * v3;
    if ( (v4 & 1) != 0 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( *(_WORD *)(*(_QWORD *)(a1 + 88) + 2 * v5 + 4) );
      v1 += 2 * v3 * (v5 + 8);
    }
    else if ( (v4 & 2) != 0 && v3 )
    {
      v6 = *(_QWORD **)(a1 + 88);
      v7 = *(unsigned int *)(a1 + 72);
      do
      {
        v8 = -1LL;
        do
          ++v8;
        while ( *(_WORD *)(*v6 + 2 * v8) );
        ++v6;
        v1 += 2 * v8 + 4;
        --v7;
      }
      while ( v7 );
    }
    *(_DWORD *)(a1 + 76) = v1;
  }
  return v1;
}
