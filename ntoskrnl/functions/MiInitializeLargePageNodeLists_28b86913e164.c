unsigned __int64 __fastcall MiInitializeLargePageNodeLists(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned int v2; // ebx
  unsigned int i; // edx
  __int64 v4; // r14
  _DWORD *v5; // rdi
  int *v6; // rdx
  __int64 v7; // r10
  _QWORD *v8; // r8
  __int64 v9; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // rcx

  result = *(_QWORD *)(a1 + 16040);
  v2 = 0;
  for ( i = 0; i < dword_140C66F60; result += 24LL )
  {
    *(_QWORD *)(result + 8) = result;
    ++i;
    *(_QWORD *)result = result;
  }
  v4 = *(_QWORD *)(a1 + 16040);
  if ( KeNumberNodes )
  {
    v5 = (_DWORD *)(*(_QWORD *)(a1 + 16) + 23120LL);
    do
    {
      v6 = dword_140C65800;
      v7 = 3LL;
      v8 = v5 - 5640;
      do
      {
        v9 = 2LL;
        v10 = v8;
        v11 = 24LL * (unsigned int)*v6;
        do
        {
          v12 = 2LL;
          do
          {
            v13 = 4LL;
            do
            {
              v14 = 4LL;
              do
              {
                *v10 = v4;
                v4 += v11;
                ++v10;
                --v14;
              }
              while ( v14 );
              --v13;
            }
            while ( v13 );
            --v12;
          }
          while ( v12 );
          --v9;
        }
        while ( v9 );
        ++v6;
        v8 += 134;
        --v7;
      }
      while ( v7 );
      MiInitializeColorTable(v5, v2);
      result = (unsigned __int16)KeNumberNodes;
      v5 += 6352;
      ++v2;
    }
    while ( v2 < (unsigned __int16)KeNumberNodes );
  }
  return result;
}
