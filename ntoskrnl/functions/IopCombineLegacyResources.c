_DWORD *__fastcall IopCombineLegacyResources(__int64 a1)
{
  _DWORD *v1; // rsi
  unsigned int v2; // ebp
  __int64 v3; // rdi
  __int64 v4; // rbx
  _DWORD *v5; // rcx
  _DWORD *Pool2; // rax
  char *v7; // r14
  __int64 v8; // rbp
  int v9; // eax
  size_t v10; // rbx

  v1 = 0LL;
  v2 = 0;
  v3 = a1;
  v4 = a1;
  if ( a1 )
  {
    do
    {
      v5 = *(_DWORD **)(v4 + 416);
      if ( v5 )
        v2 += PnpDetermineResourceListSize(v5);
      v4 = *(_QWORD *)(v4 + 536);
    }
    while ( v4 );
    if ( v2 )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(256LL, v2, 538996816LL);
      v1 = Pool2;
      if ( Pool2 )
      {
        *Pool2 = 0;
        v7 = (char *)(Pool2 + 1);
        do
        {
          v8 = *(_QWORD *)(v3 + 416);
          if ( v8 )
          {
            v9 = PnpDetermineResourceListSize(*(_DWORD **)(v3 + 416));
            if ( v9 )
            {
              v10 = (unsigned int)(v9 - 4);
              memmove(v7, (const void *)(v8 + 4), v10);
              v7 += v10;
              *v1 += **(_DWORD **)(v3 + 416);
            }
          }
          v3 = *(_QWORD *)(v3 + 536);
        }
        while ( v3 );
      }
    }
  }
  return v1;
}
