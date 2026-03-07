char __fastcall RtlpValidAttribute(__int64 a1)
{
  const wchar_t *v2; // rcx
  __int64 v3; // r11
  unsigned int v4; // edx
  __int64 v5; // r8
  unsigned int v6; // eax
  unsigned int v8; // eax
  unsigned int v9; // r9d
  size_t pcchLength; // [rsp+30h] [rbp+8h] BYREF

  pcchLength = 0LL;
  if ( !a1 )
    return 0;
  v2 = *(const wchar_t **)a1;
  if ( !v2 )
    return 0;
  if ( RtlStringCchLengthW(v2, 0xFFFFuLL, &pcchLength) < 0 )
    return 0;
  if ( pcchLength == v3 )
    return 0;
  if ( *(_WORD *)(a1 + 10) != (_WORD)v3 )
    return 0;
  if ( (*(_DWORD *)(a1 + 12) & 0xFFC0) != 0 )
    return 0;
  v4 = *(_DWORD *)(a1 + 16);
  if ( !v4 )
    return 0;
  v5 = *(_QWORD *)(a1 + 24);
  if ( !v5 )
    return 0;
  if ( *(_WORD *)(a1 + 8) != 1 && *(_WORD *)(a1 + 8) != 2 )
  {
    switch ( *(_WORD *)(a1 + 8) )
    {
      case 3:
        v9 = v3;
        while ( *(_QWORD *)(v5 + 8LL * v9) != v3 )
        {
          if ( ++v9 >= v4 )
            return 1;
        }
        break;
      case 5:
        v8 = v3;
        while ( *(_QWORD *)(v5 + 16LL * v8) != v3 && *(_DWORD *)(v5 + 16LL * v8 + 8) != (_DWORD)v3 )
        {
          if ( ++v8 >= v4 )
            return 1;
        }
        break;
      case 6:
        while ( *(_QWORD *)(v5 + 8LL * (unsigned int)v3) <= 1uLL )
        {
          LODWORD(v3) = v3 + 1;
          if ( (unsigned int)v3 >= v4 )
            return 1;
        }
        break;
      case 0x10:
        v6 = v3;
        do
        {
          if ( *(_QWORD *)(v5 + 16LL * v6) )
          {
            if ( *(_DWORD *)(v5 + 16LL * v6 + 8) == (_DWORD)v3 )
              return 0;
          }
          else if ( *(_DWORD *)(v5 + 16LL * v6 + 8) != (_DWORD)v3 )
          {
            return 0;
          }
          ++v6;
        }
        while ( v6 < v4 );
        return 1;
    }
    return 0;
  }
  return 1;
}
