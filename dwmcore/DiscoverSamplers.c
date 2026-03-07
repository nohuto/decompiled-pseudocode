__int64 __fastcall DiscoverSamplers(_QWORD *a1, __int64 a2)
{
  _WORD *v2; // rbx
  unsigned int v4; // edi
  _WORD *v5; // rbp
  __int16 v6; // si
  unsigned int v7; // r15d
  unsigned int v8; // eax

  v2 = (_WORD *)a1[1];
  v4 = 0;
  v5 = &v2[*a1];
  while ( v2 != v5 )
  {
    v6 = *v2 & 0xFF00;
    if ( ((v6 - 256) & 0xFEFF) == 0 )
    {
      v7 = (unsigned __int8)*v2;
      v8 = v7 + 1;
      if ( v4 > v7 + 1 )
        v8 = v4;
      v4 = v8;
      *(_BYTE *)gsl::span<SamplerPresenceEntry,-1>::operator[](a2, (unsigned __int8)*v2) = 1;
      if ( v6 == 512 )
        *(_BYTE *)(gsl::span<SamplerPresenceEntry,-1>::operator[](a2, v7) + 1) = 1;
    }
    ++v2;
  }
  return v4;
}
