void __fastcall MiDecrementZeroEngineThread(__int64 a1)
{
  __int64 v2; // r8
  int v3; // eax
  __int64 v4; // rdx
  _DWORD *v5; // rcx

  if ( (*(_DWORD *)(a1 + 12))-- == 1 )
  {
    v2 = *(_QWORD *)(a1 + 168);
    v3 = 0;
    v4 = 0LL;
    v5 = (_DWORD *)(v2 + 108);
    do
    {
      if ( *v5 )
        break;
      ++v3;
      ++v4;
      v5 += 74;
    }
    while ( v4 < 3 );
    if ( v3 == 3 )
      *(_BYTE *)(25408LL * *(unsigned int *)(v2 + 56) + *(_QWORD *)(*(_QWORD *)(v2 + 48) + 16LL) + 23176) = 0;
  }
}
