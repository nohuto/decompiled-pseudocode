/*
 * XREFs of PiDrvDbFindSystemFilePathToken @ 0x14096CFAC
 * Callers:
 *     PiDrvDbResolveSystemFilePath @ 0x14096E128 (PiDrvDbResolveSystemFilePath.c)
 * Callees:
 *     iswalnum @ 0x1403D45F0 (iswalnum.c)
 *     iswalpha @ 0x1403D460C (iswalpha.c)
 *     RtlFindUnicodeSubstring @ 0x1406B8BB0 (RtlFindUnicodeSubstring.c)
 */

char *__fastcall PiDrvDbFindSystemFilePathToken(__m128i *a1, unsigned __int16 *a2)
{
  __int64 v2; // rbx
  _WORD *v5; // rsi
  __int16 v6; // r15
  char *UnicodeSubstring; // rax
  char *v8; // rdi
  __int64 v9; // r14
  wint_t v10; // r12
  wint_t v11; // cx
  __int64 v12; // rdx
  _WORD *v13; // r8
  __int16 v14; // ax
  __m128i v16; // [rsp+20h] [rbp-38h] BYREF

  v2 = 0LL;
  v16 = *a1;
  v5 = (_WORD *)_mm_srli_si128(v16, 8).m128i_u64[0];
  v16.m128i_i64[1] = (__int64)v5;
  if ( *v5 )
  {
    v6 = v16.m128i_i16[0];
    do
    {
      UnicodeSubstring = RtlFindUnicodeSubstring((unsigned __int16 *)&v16);
      v8 = UnicodeSubstring;
      if ( !UnicodeSubstring )
        return (char *)v2;
      v9 = *a2 >> 1;
      if ( (unsigned __int64)UnicodeSubstring > a1->m128i_i64[1] )
      {
        v10 = *((_WORD *)UnicodeSubstring - 1);
        v11 = **((_WORD **)a2 + 1);
        if ( v11 == 92 )
        {
          if ( iswalnum(v10) || v10 == 92 )
            goto LABEL_17;
        }
        else if ( iswalpha(v11) && iswalnum(v10) )
        {
          goto LABEL_17;
        }
      }
      v12 = 2LL * (unsigned int)v9;
      if ( v6 == *a2 && !*(_WORD *)&v8[v12] )
        return v8;
      v13 = (_WORD *)*((_QWORD *)a2 + 1);
      v14 = v13[(unsigned int)(v9 - 1)];
      if ( v14 == 92 || *(_WORD *)&v8[v12] == 92 || v14 == 37 && *v13 == 37 )
        return v8;
LABEL_17:
      v6 -= *a2;
      v5 += v9;
      v16.m128i_i64[1] = (__int64)v5;
      v16.m128i_i16[0] = v6;
    }
    while ( *v5 );
  }
  return (char *)v2;
}
