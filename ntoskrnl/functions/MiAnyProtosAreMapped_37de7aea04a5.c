__int64 __fastcall MiAnyProtosAreMapped(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebp
  ULONG_PTR v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  unsigned __int8 v7; // dl
  unsigned __int8 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v9 = 17;
  if ( a1 == a2[3] )
    v3 = a2[1];
  else
    v3 = *(_QWORD *)(a1 + 8);
  if ( a1 == a2[4] )
    v4 = a2[2] + 8LL;
  else
    v4 = *(_QWORD *)(a1 + 8) + 8LL * *(unsigned int *)(a1 + 44);
  if ( v3 < v4 )
  {
    do
    {
      v5 = MiCheckProtoPtePageState(v3, &v9);
      if ( v5 )
      {
        v6 = v4;
        if ( v4 > (v3 & 0xFFFFFFFFFFFFF000uLL) + 4096 )
          v6 = (v3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        while ( v3 < v6 )
        {
          if ( (*(_BYTE *)v3 & 1) != 0 )
          {
            v2 = 1;
            v3 = v4;
            break;
          }
          v3 += 8LL;
        }
        v7 = v9;
        if ( v9 != 17 )
        {
          MiUnlockProtoPoolPage(v5, v9);
          v7 = 17;
          v9 = 17;
        }
      }
      else
      {
        v7 = v9;
        v3 = (v3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
    }
    while ( v3 < v4 );
    if ( v7 != 17 )
      MiUnlockProtoPoolPage(v5, v7);
  }
  return v2;
}
