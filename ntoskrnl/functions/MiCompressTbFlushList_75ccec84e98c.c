void __fastcall MiCompressTbFlushList(__int64 a1)
{
  int v1; // r11d
  _QWORD *v2; // r8
  unsigned int v3; // ebx
  unsigned __int64 v4; // r10
  __int64 v5; // rsi
  __int64 v6; // rdx
  unsigned int v7; // eax

  v1 = 0;
  v2 = (_QWORD *)(a1 + 24);
  v3 = 1;
  if ( *(_DWORD *)(a1 + 12) > 1u )
  {
    do
    {
      v4 = *(_QWORD *)(a1 + 8LL * v3 + 24);
      v5 = 4096LL << (9 * ((unsigned __int8)(v4 >> 10) & 3u));
      if ( ((v4 >> 10) & 3) == ((*v2 >> 10) & 3LL)
        && (v6 = *v2 & 0x3FFLL, (v4 & 0xFFFFFFFFFFFFF000uLL) - v5 * (v6 + 1) == (*v2 & 0xFFFFFFFFFFFFF000uLL))
        && v6 != 1023 )
      {
        if ( v6 + (v4 & 0x3FF) + 1 > 0x3FF )
        {
          *(_QWORD *)(a1 + 8LL * v3 + 24) = (1023 - v6) * v5 + (v4 ^ (v4 ^ (v4 - (1023 - v6))) & 0x3FF);
          *v2++ |= 0x3FFuLL;
          *v2 = *(_QWORD *)(a1 + 8LL * v3 + 24);
        }
        else
        {
          *v2 ^= (*v2 ^ (v4 + *v2 + 1LL)) & 0x3FF;
          ++v1;
        }
      }
      else
      {
        *++v2 = v4;
      }
      v7 = *(_DWORD *)(a1 + 12);
      ++v3;
    }
    while ( v3 < v7 );
    if ( v1 )
      *(_DWORD *)(a1 + 12) = v7 - v1;
  }
}
