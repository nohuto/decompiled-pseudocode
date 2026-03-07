char __fastcall PpmCheckCoordinatedStateInitiator(unsigned int a1, unsigned int a2, __int64 a3)
{
  char v3; // r9
  int v4; // esi
  __int64 i; // rbx
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rax

  v3 = 0;
  v4 = 0;
  if ( a2 )
  {
    for ( i = a3 + 8; ; i += 24LL )
    {
      v8 = *(_DWORD *)(i - 8);
      if ( v8 == -1 || v8 == a1 )
      {
        v9 = 0LL;
        if ( *(_DWORD *)i )
          break;
      }
LABEL_10:
      if ( ++v4 >= a2 )
        return v3;
    }
    while ( 1 )
    {
      v10 = *(_QWORD *)(i + 8);
      if ( *(_BYTE *)(v10 + 24 * v9 + 1) )
      {
        if ( *(_DWORD *)(i - 8) != -1 )
          return 1;
        v3 = PpmCheckCoordinatedStateInitiator(
               a1,
               *(unsigned int *)(v10 + 24 * v9 + 8),
               *(_QWORD *)(v10 + 24 * v9 + 16));
        if ( v3 )
          return v3;
      }
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= *(_DWORD *)i )
        goto LABEL_10;
    }
  }
  return v3;
}
