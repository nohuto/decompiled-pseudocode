/*
 * XREFs of _RtlpMuiRegAddBaseLanguage @ 0x140981F1C
 * Callers:
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14098251C (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x14078F0B0 (_RtlpMuiRegInitAnyLanguage.c)
 *     RtlpLangNameInMultiSzString @ 0x14078FA0C (RtlpLangNameInMultiSzString.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x1407CF4F0 (RtlpMuiRegGetOrAddLangInfo.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x14098184C (RtlpMuiRegGetLanguageSpec.c)
 */

__int64 __fastcall RtlpMuiRegAddBaseLanguage(__int64 a1, _WORD *a2, unsigned int a3, __int64 a4, wchar_t *a5)
{
  __int16 v5; // bx
  char v8; // r15
  wchar_t *v9; // rdi
  unsigned __int64 v10; // r13
  __int64 v11; // r9
  wchar_t *Buffer; // r8
  __int64 v13; // r9
  int v14; // r12d
  __int16 v15; // ax
  __int16 v16; // dx
  int v17; // r13d
  __int64 v18; // r12
  int v19; // r14d
  int LanguageSpec; // eax
  char v21; // cl
  __int16 v22; // r8
  __int16 v23; // dx
  wchar_t *v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  _WORD *v27; // rcx
  char v29; // [rsp+30h] [rbp-61h] BYREF
  char v30; // [rsp+31h] [rbp-60h] BYREF
  char v31; // [rsp+32h] [rbp-5Fh]
  __int16 v32[2]; // [rsp+34h] [rbp-5Dh] BYREF
  __int16 v33; // [rsp+38h] [rbp-59h]
  __int16 v34; // [rsp+3Ch] [rbp-55h] BYREF
  wchar_t *Str2; // [rsp+40h] [rbp-51h]
  int inited; // [rsp+48h] [rbp-49h]
  signed int v37; // [rsp+4Ch] [rbp-45h]
  __int64 v38; // [rsp+50h] [rbp-41h]
  _WORD *v39; // [rsp+58h] [rbp-39h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-31h] BYREF
  __int128 v41; // [rsp+70h] [rbp-21h] BYREF
  __int64 v42; // [rsp+80h] [rbp-11h]
  int v43; // [rsp+88h] [rbp-9h]

  v5 = 0;
  Str2 = a5;
  v37 = a3;
  v39 = a2;
  v38 = a1;
  v42 = 0LL;
  v43 = 0;
  v8 = 0;
  v29 = 0;
  v30 = 0;
  v34 = 0;
  DestinationString = 0LL;
  v41 = 0LL;
  if ( a1 && a2 && a4 && a3 <= 3 )
  {
    v9 = (wchar_t *)(a4 + *(unsigned int *)(a4 + 8));
    if ( !*(_DWORD *)(a4 + 12) || !v9 || (v31 = 1, !*v9) )
      v31 = 0;
    v10 = (unsigned __int64)*(unsigned int *)(a4 + 16) >> 1;
    v33 = *(_WORD *)(a4 + 2 * v10 + 20);
    *(_WORD *)(a4 + 2 * v10 + 20) = 0;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(a4 + 20));
    v32[0] = 0;
    if ( v31 )
    {
      Buffer = DestinationString.Buffer;
      v9[(unsigned __int64)*(unsigned int *)(a4 + 12) >> 1] = 0;
      inited = RtlpMuiRegInitAnyLanguage(a1, (__int64)&v41, Buffer, 1026);
      v14 = inited;
      if ( inited < 0 )
        return (unsigned int)v14;
      v15 = v33;
      v16 = ((unsigned __int8)v41 ^ (unsigned __int8)*v39) & 0x18;
      LOBYTE(v33) = 0;
      LOWORD(v41) = v16 ^ v41;
      *(_WORD *)(a4 + 2 * v10 + 20) = v15;
      v17 = 0;
      if ( Str2
        && *Str2
        && RtlpLangNameInMultiSzString(v9, Str2)
        && (int)RtlpMuiRegGetLanguageSpec(v38, Str2, &v30, v13, &v34) >= 0 )
      {
        v17 = 1;
        LOBYTE(v33) = 1;
        WORD6(v41) = v34;
        WORD4(v41) = WORD4(v41) & 0xFFFC | v30 & 3;
      }
      if ( v9 )
      {
        v18 = v38;
        v19 = 2 * v17;
        Str2 = (wchar_t *)&v41 + (unsigned int)v17 + 6;
        do
        {
          if ( !*v9 || v19 >= 8 )
            break;
          LanguageSpec = RtlpMuiRegGetLanguageSpec(v18, v9, &v29, v13, v32);
          v8 = v29;
          v5 = v32[0];
          if ( LanguageSpec >= 0 && (!(_BYTE)v33 || v30 != v29 || v34 != v32[0]) )
          {
            v21 = v19;
            v22 = WORD4(v41) & ~(3 << v19);
            ++v17;
            v19 += 2;
            v23 = (v29 & 3) << v21;
            v24 = Str2;
            WORD4(v41) = v23 | v22;
            *Str2 = v32[0];
            Str2 = v24 + 1;
          }
          v25 = -1LL;
          do
            ++v25;
          while ( v9[v25] );
          v9 += v25 + 1;
        }
        while ( v9 );
        v14 = inited;
      }
      if ( v17 < 0 )
      {
        v5 = WORD2(v41);
        if ( WORD2(v41) )
        {
          v8 = 1;
LABEL_40:
          v26 = v37;
          v27 = v39;
          v39[4] = v39[4] & ~(3 << (2 * v37)) | ((v8 & 3) << (2 * v37));
          v27[v26 + 6] = v5;
          return (unsigned int)v14;
        }
        v5 = WORD3(v41);
        if ( SWORD3(v41) > 0 )
        {
          v8 = 3;
          goto LABEL_40;
        }
        return (unsigned int)-1073741823;
      }
    }
    else
    {
      v14 = RtlpMuiRegGetLanguageSpec(a1, DestinationString.Buffer, &v29, v11, v32);
      if ( v14 < 0 )
        return (unsigned int)v14;
      v8 = v29;
      v5 = v32[0];
    }
    if ( !v31 )
      goto LABEL_40;
    LOWORD(v41) = v41 & 0xFFDF;
    v14 = RtlpMuiRegGetOrAddLangInfo((__int64 *)(v38 + 24), (__int64)&v41, v32);
    if ( v14 >= 0 )
    {
      v5 = v32[0];
      v8 = 2;
      goto LABEL_40;
    }
    return (unsigned int)v14;
  }
  return 3221225485LL;
}
