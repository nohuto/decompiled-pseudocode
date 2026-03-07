void __fastcall DrawRegionalShadow(char *a1, int a2, int a3)
{
  __int64 v3; // r11
  __int64 v4; // rbx
  __int64 v5; // rdi
  char *v6; // r9
  char *v7; // rdx
  __int64 v8; // r10
  __int64 i; // rcx
  int v10; // r8d

  if ( a3 > 0 )
  {
    v3 = a2;
    v4 = (unsigned int)a3;
    v5 = 4LL * -a2;
    v6 = &a1[4 * a2 * (a3 - 1)];
    do
    {
      if ( v3 > 0 )
      {
        v7 = v6;
        v8 = v3;
        do
        {
          for ( i = 0LL; i < 5; ++i )
          {
            v10 = byte_1C0322BA4[i];
            if ( *(_DWORD *)v7 == (v10 | ((v10 | (v10 << 8)) << 8)) )
              *(_DWORD *)v7 = -16777216 - (v10 << 24);
          }
          v7 += 4;
          --v8;
        }
        while ( v8 );
      }
      v6 += v5;
      --v4;
    }
    while ( v4 );
  }
}
