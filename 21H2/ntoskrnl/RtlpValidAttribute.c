/*
 * XREFs of RtlpValidAttribute @ 0x140912F60
 * Callers:
 *     RtlpValidAttributeInfo @ 0x140913078 (RtlpValidAttributeInfo.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x140252F04 (RtlStringCchLengthW.c)
 */

char __fastcall RtlpValidAttribute(__int64 a1)
{
  const wchar_t *v2; // rcx
  __int64 v3; // r11
  unsigned int v4; // edx
  __int64 v5; // r9
  unsigned __int16 v6; // ax
  unsigned int v7; // ecx
  int v8; // r8d
  unsigned int v10; // eax
  unsigned int v11; // r8d
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
  v6 = *(_WORD *)(a1 + 8);
  if ( !v6 )
    return 0;
  if ( v6 > 2u )
  {
    switch ( v6 )
    {
      case 3u:
        v11 = v3;
        while ( *(_QWORD *)(v5 + 8LL * v11) != v3 )
        {
          if ( ++v11 >= v4 )
            return 1;
        }
        break;
      case 5u:
        v10 = v3;
        while ( *(_QWORD *)(v5 + 16LL * v10) != v3 && *(_DWORD *)(v5 + 16LL * v10 + 8) != (_DWORD)v3 )
        {
          if ( ++v10 >= v4 )
            return 1;
        }
        break;
      case 6u:
        while ( *(_QWORD *)(v5 + 8LL * (unsigned int)v3) <= 1uLL )
        {
          LODWORD(v3) = v3 + 1;
          if ( (unsigned int)v3 >= v4 )
            return 1;
        }
        break;
      case 0x10u:
        v7 = v3;
        do
        {
          v8 = *(_DWORD *)(v5 + 16LL * v7 + 8);
          if ( *(_QWORD *)(v5 + 16LL * v7) == v3 )
          {
            if ( v8 )
              return 0;
          }
          else if ( !v8 )
          {
            return 0;
          }
          ++v7;
        }
        while ( v7 < v4 );
        return 1;
    }
    return 0;
  }
  return 1;
}
