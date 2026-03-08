/*
 * XREFs of CmpWaitForHiveMount @ 0x14084B55C
 * Callers:
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E1630 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     CmpHashUnicodeComponent @ 0x1407A480C (CmpHashUnicodeComponent.c)
 */

char __fastcall CmpWaitForHiveMount(__m128i *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __m128i v4; // xmm0
  char v5; // bl
  __int16 v7; // cx
  _WORD *v8; // r8
  unsigned __int16 v9; // dx
  unsigned int v10; // edi
  int v11; // eax
  unsigned __int16 v12; // dx
  __int64 v13; // rsi
  __int64 v15; // rcx
  bool v16; // zf
  __m128i v17; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a1;
  v5 = 0;
  v7 = _mm_cvtsi128_si32(*a1);
  v17 = v4;
  v17.m128i_i16[0] = v7;
  if ( !v7 )
    goto LABEL_18;
  v8 = (_WORD *)v17.m128i_i64[1];
  do
  {
    if ( *v8 != 92 )
      break;
    ++v8;
    v16 = v7 == 2;
    v7 -= 2;
    v17.m128i_i16[0] = v7;
  }
  while ( !v16 );
  v17.m128i_i64[1] = (__int64)v8;
  if ( v7 )
  {
    v9 = 0;
    v10 = 1;
    do
    {
      if ( v8[v9] == 92 )
        break;
      ++v9;
      v7 -= 2;
    }
    while ( v7 );
    v17.m128i_i16[0] = 2 * v9;
    v11 = CmpHashUnicodeComponent(&v17);
    v12 = 0;
    while ( 1 )
    {
      v13 = 3LL * v12;
      if ( dword_140C02C5C[6 * v12] == v11 )
        break;
      if ( ++v12 >= 8u )
      {
        _interlockedbittestandset(dword_140C02C60, 2u);
        return 0;
      }
    }
    _interlockedbittestandset(&dword_140C02C60[6 * v12], 3u);
    _InterlockedAdd(&dword_140C02C64[6 * v12], 1u);
    KeSetEvent((struct _KEVENT *)((char *)&stru_140C026D0 + 184 * (unsigned int)dword_140C02C58[6 * v12]), 0, 0);
    v15 = (unsigned int)dword_140C02C58[2 * v13];
    if ( !*((_DWORD *)&unk_140C02704 + 46 * v15) )
    {
      v5 = 1;
      *a4 = v15;
      v10 = 5;
    }
    _interlockedbittestandset(&dword_140C02C60[2 * v13], v10);
    return v5;
  }
  else
  {
LABEL_18:
    _interlockedbittestandset(dword_140C02C60, 0);
    return 0;
  }
}
