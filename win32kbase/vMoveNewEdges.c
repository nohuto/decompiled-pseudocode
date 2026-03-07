__int64 __fastcall vMoveNewEdges(__int64 a1, _DWORD *a2, int a3)
{
  _DWORD *v3; // r9
  _DWORD *v4; // rdi
  int v5; // r11d
  _DWORD *v6; // r10
  int v7; // ebx
  __int64 result; // rax

  v3 = *(_DWORD **)a1;
  v4 = a2 + 4;
  v5 = a2[4];
  do
  {
    v6 = *(_DWORD **)a2;
    v7 = v3[3];
    if ( v7 > *(_DWORD *)(*(_QWORD *)a2 + 12LL) )
    {
      do
      {
        a2 = v6;
        v6 = *(_DWORD **)v6;
      }
      while ( v7 > v6[3] );
    }
    ++v5;
    *(_QWORD *)a1 = *(_QWORD *)v3;
    result = *(_QWORD *)a2;
    *(_QWORD *)v3 = *(_QWORD *)a2;
    *(_QWORD *)a2 = v3;
    a2 = v3;
    v3 = *(_DWORD **)a1;
  }
  while ( *(_DWORD *)(*(_QWORD *)a1 + 16LL) == a3 );
  *v4 = v5;
  return result;
}
