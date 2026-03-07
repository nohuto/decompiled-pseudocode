char PpmPerfSelectDomainStates()
{
  __int64 i; // rcx
  unsigned int v2; // eax
  char v3; // r11
  char v4; // r9
  unsigned int v5; // r8d
  __int64 v6; // r10
  __int64 v7; // rdx
  unsigned int v8; // eax
  char *v9; // rax

  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    v2 = *(_DWORD *)(i + 296);
    v3 = 0;
    v4 = 0;
    v5 = 1;
    if ( v2 )
    {
      v6 = v2;
      v7 = *(_QWORD *)(i + 312) + 56LL;
      do
      {
        if ( *(_DWORD *)(v7 - 40) != 2 )
        {
          v8 = *(_DWORD *)v7;
          if ( *(_DWORD *)v7 <= v5 )
            v8 = v5;
          v5 = v8;
          if ( *(_BYTE *)(v7 + 4) )
            v4 = 1;
        }
        v7 += 144LL;
        --v6;
      }
      while ( v6 );
    }
    v9 = (char *)(i + 520);
    if ( *(_DWORD *)(i + 512) != v5 || *v9 != v4 )
      v3 = 1;
    *(_DWORD *)(i + 512) = v5;
    *v9 = v4;
    if ( v3 )
      *(_BYTE *)(i + 1061) = 1;
  }
  return 1;
}
