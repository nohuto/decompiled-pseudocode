bool __fastcall EtwpIsEventNameFilterEnabled(__int64 a1, unsigned int a2, unsigned __int8 a3, __int64 a4, char a5)
{
  __int64 v5; // rcx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  unsigned __int8 v10; // al

  v5 = *(_QWORD *)(a1 + 384);
  if ( !v5 )
    return 0;
  v7 = 104LL * a2;
  v8 = *(_DWORD *)(v7 + v5);
  if ( a5 )
  {
    if ( (v8 & 0x80002000) != 0x80002000 )
      return 0;
    v9 = *(_QWORD *)(v7 + v5 + 56);
  }
  else
  {
    if ( (v8 & 0x80000400) != 0x80000400 )
      return 0;
    v9 = *(_QWORD *)(v7 + v5 + 96);
  }
  if ( !v9 )
    return 0;
  v10 = *(_BYTE *)(v9 + 1);
  if ( a3 > v10 )
  {
    if ( v10 )
      return 0;
  }
  if ( a4 )
  {
    if ( (a4 & *(_QWORD *)(v9 + 8)) != 0 )
      return (a4 & *(_QWORD *)(v9 + 16)) == *(_QWORD *)(v9 + 16);
    return 0;
  }
  return 1;
}
