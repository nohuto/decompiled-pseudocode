__int64 __fastcall RtlpMuiRegAddBaseLanguage(__int64 *a1, _WORD *a2, unsigned int a3, __int64 a4, wchar_t *Str2)
{
  char v6; // r15
  wchar_t *v7; // rbx
  char v8; // di
  unsigned __int64 v9; // r12
  __int16 v10; // ax
  __int64 v11; // r9
  wchar_t *Buffer; // r8
  int LanguageSpec; // edi
  __int16 v14; // ax
  __int16 v15; // dx
  int v16; // esi
  __int64 *v17; // r13
  char v18; // di
  int v19; // r12d
  __int16 v20; // ax
  __int16 v21; // dx
  __int64 *v22; // rcx
  __int64 v23; // rax
  __int16 v24; // dx
  __int64 v25; // r8
  _WORD *v26; // rcx
  char v28; // [rsp+30h] [rbp-51h] BYREF
  char v29[3]; // [rsp+31h] [rbp-50h] BYREF
  __int16 v30[2]; // [rsp+34h] [rbp-4Dh] BYREF
  __int16 v31; // [rsp+38h] [rbp-49h]
  __int16 v32; // [rsp+3Ch] [rbp-45h] BYREF
  __int64 *v33; // [rsp+40h] [rbp-41h]
  int inited; // [rsp+48h] [rbp-39h]
  signed int v35; // [rsp+4Ch] [rbp-35h]
  _WORD *v36; // [rsp+50h] [rbp-31h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-29h] BYREF
  __int128 v38; // [rsp+68h] [rbp-19h] BYREF
  __int64 v39; // [rsp+78h] [rbp-9h]
  int v40; // [rsp+80h] [rbp-1h]

  v33 = a1;
  v35 = a3;
  v36 = a2;
  v39 = 0LL;
  v40 = 0;
  v28 = 0;
  v29[0] = 0;
  v32 = 0;
  DestinationString = 0LL;
  v38 = 0LL;
  if ( a1 && a2 && a4 && a3 <= 3 )
  {
    v6 = 1;
    v7 = (wchar_t *)(a4 + *(unsigned int *)(a4 + 8));
    if ( !*(_DWORD *)(a4 + 12) || !v7 || (v8 = 1, !*v7) )
      v8 = 0;
    v9 = (unsigned __int64)*(unsigned int *)(a4 + 16) >> 1;
    v10 = *(_WORD *)(a4 + 2 * v9 + 20);
    *(_WORD *)(a4 + 2 * v9 + 20) = 0;
    v31 = v10;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(a4 + 20));
    v30[0] = 0;
    if ( v8 )
    {
      Buffer = DestinationString.Buffer;
      v7[(unsigned __int64)*(unsigned int *)(a4 + 12) >> 1] = 0;
      inited = RtlpMuiRegInitAnyLanguage((__int64)v33, (__int64)&v38, Buffer, 1026);
      LanguageSpec = inited;
      if ( inited < 0 )
        return (unsigned int)LanguageSpec;
      v14 = v31;
      v15 = (*v36 ^ v38) & 0x18 ^ v38;
      LOBYTE(v31) = 0;
      LOWORD(v38) = v15;
      *(_WORD *)(a4 + 2 * v9 + 20) = v14;
      v16 = 0;
      if ( Str2 && *Str2 && RtlpLangNameInMultiSzString(v7, Str2) )
      {
        v17 = v33;
        if ( (int)RtlpMuiRegGetLanguageSpec((__int64)v33, Str2, v29, 0LL, &v32) >= 0 )
        {
          LOBYTE(v31) = 1;
          v16 = 1;
          WORD6(v38) = v32;
          WORD4(v38) = WORD4(v38) & 0xFFFC | v29[0] & 3;
        }
      }
      else
      {
        v17 = v33;
      }
      if ( v7 )
      {
        v18 = v29[0];
        v19 = 2 * v16;
        v33 = (__int64 *)((char *)&v38 + 2 * (unsigned int)v16 + 12);
        do
        {
          if ( !*v7 || v19 >= 8 )
            break;
          if ( (int)RtlpMuiRegGetLanguageSpec((__int64)v17, v7, &v28, 0LL, v30) >= 0
            && (!(_BYTE)v31 || v18 != v28 || v32 != v30[0]) )
          {
            ++v16;
            v20 = (v28 & 3) << v19;
            v21 = WORD4(v38) & ~(3 << v19);
            v19 += 2;
            v22 = v33;
            WORD4(v38) = v20 | v21;
            *(_WORD *)v33 = v30[0];
            v33 = (__int64 *)((char *)v22 + 2);
          }
          v23 = -1LL;
          do
            ++v23;
          while ( v7[v23] );
          v7 += v23 + 1;
        }
        while ( v7 );
        LanguageSpec = inited;
      }
      if ( v16 < 0 )
      {
        v24 = WORD2(v38);
        if ( WORD2(v38) )
        {
LABEL_40:
          v25 = v35;
          v26 = v36;
          v36[4] = v36[4] & ~(3 << (2 * v35)) | ((v6 & 3) << (2 * v35));
          v26[v25 + 6] = v24;
          return (unsigned int)LanguageSpec;
        }
        v24 = WORD3(v38);
        if ( SWORD3(v38) > 0 )
        {
          v6 = 3;
          goto LABEL_40;
        }
        return (unsigned int)-1073741823;
      }
      LOWORD(v38) = v38 & 0xFFDF;
      LanguageSpec = RtlpMuiRegGetOrAddLangInfo(v17 + 3, (__int64)&v38, v30);
      if ( LanguageSpec < 0 )
        return (unsigned int)LanguageSpec;
      v6 = 2;
    }
    else
    {
      LanguageSpec = RtlpMuiRegGetLanguageSpec((__int64)v33, DestinationString.Buffer, &v28, v11, v30);
      if ( LanguageSpec < 0 )
        return (unsigned int)LanguageSpec;
      v6 = v28;
    }
    v24 = v30[0];
    goto LABEL_40;
  }
  return 3221225485LL;
}
