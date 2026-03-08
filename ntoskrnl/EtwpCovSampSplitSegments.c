/*
 * XREFs of EtwpCovSampSplitSegments @ 0x1409EFE98
 * Callers:
 *     EtwpSetCoverageSamplerInformation @ 0x1409F0DFC (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     _wcslwr @ 0x1403D3F30 (_wcslwr.c)
 *     wcschr @ 0x1403D5D90 (wcschr.c)
 */

__int64 __fastcall EtwpCovSampSplitSegments(wchar_t *Str, __int64 a2)
{
  const wchar_t *v3; // rbx
  unsigned int v4; // edi
  wchar_t *v5; // rax
  wchar_t *v6; // rdx
  __int64 v7; // rax
  const wchar_t *v8; // rdx
  __int64 v9; // rcx

  v3 = Str;
  wcslwr(Str);
  v4 = 0;
  if ( *v3 )
  {
    do
    {
      v5 = wcschr(v3, 0x3Au);
      v6 = v5;
      if ( v5 )
      {
        v7 = v5 - v3;
        v8 = v6 + 1;
      }
      else
      {
        v7 = -1LL;
        do
          ++v7;
        while ( v3[v7] );
        v8 = &v3[v7];
      }
      if ( v7 )
      {
        v9 = v4++;
        v9 *= 2LL;
        *(_QWORD *)(a2 + 8 * v9) = v3;
        *(_QWORD *)(a2 + 8 * v9 + 8) = v7;
        if ( v4 >= 0xA )
          break;
      }
      v3 = v8;
    }
    while ( *v8 );
  }
  return v4;
}
