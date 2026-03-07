bool __fastcall AreDependenciesSatisfied(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rsi
  unsigned int v3; // ebx
  unsigned int v4; // edi
  void **v5; // rsi
  __int64 v6; // rbp

  v2 = *(_DWORD **)(a2 + 32);
  v3 = 0;
  v4 = *v2;
  if ( *v2 )
  {
    v5 = (void **)(v2 + 10);
    do
    {
      if ( (int)AMLIGetNameSpaceObject(*v5) < 0 )
        break;
      v6 = *(_QWORD *)(MEMORY[0] + 104LL);
      AMLIDereferenceHandleEx(0LL);
      if ( !v6 )
        break;
      if ( *(_DWORD *)(v6 + 368) != 3 )
        break;
      ++v3;
      v5 += 5;
    }
    while ( v3 < v4 );
  }
  return v3 == v4;
}
