void __fastcall PopulateXORTestPattern(char *a1, int a2, int a3)
{
  char *v3; // r9
  __int64 v4; // r11
  __int64 v5; // rbx
  char *v6; // rdx
  _DWORD *v7; // rcx
  __int64 v8; // r10

  if ( a2 >= 32 && a3 >= 32 )
  {
    v3 = (char *)&unk_1C0322DF0;
    v4 = 10LL;
    v5 = 4LL * a2;
    v6 = &a1[4 * (a2 * (((unsigned int)a3 >> 1) - 5) + ((unsigned int)a2 >> 1) - 5)];
    do
    {
      v7 = v6;
      v8 = 10LL;
      do
      {
        *v7 = *(_DWORD *)((char *)v7 + v3 - v6);
        ++v7;
        --v8;
      }
      while ( v8 );
      v6 += v5;
      v3 += 40;
      --v4;
    }
    while ( v4 );
  }
}
