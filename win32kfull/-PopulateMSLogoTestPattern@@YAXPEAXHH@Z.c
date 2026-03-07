void __fastcall PopulateMSLogoTestPattern(char *a1, int a2, int a3)
{
  char *v3; // r9
  __int64 v4; // r11
  __int64 v5; // rbx
  char *v6; // rdx
  _DWORD *v7; // rax
  __int64 v8; // r10
  int v9; // r8d

  if ( a2 >= 32 && a3 >= 32 )
  {
    v3 = (char *)&unk_1C0322C00;
    v4 = 11LL;
    v5 = 4LL * a2;
    v6 = &a1[4 * (a2 * (((unsigned int)a3 >> 1) - 5) + ((unsigned int)a2 >> 1) - 5)];
    do
    {
      v7 = v6;
      v8 = 11LL;
      do
      {
        v9 = *(_DWORD *)((char *)v7 + v3 - v6);
        if ( v9 )
          *v7 = v9;
        ++v7;
        --v8;
      }
      while ( v8 );
      v6 += v5;
      v3 += 44;
      --v4;
    }
    while ( v4 );
  }
}
