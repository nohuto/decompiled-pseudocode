__int64 __fastcall RtlpPopulateLanguageConfigList(HANDLE KeyHandle, __int64 *a2, __int64 a3)
{
  unsigned __int8 *v3; // rbp
  NTSTATUS v4; // r11d
  ULONG v5; // eax
  __int64 v7; // r15
  HANDLE v8; // r10
  __int64 v9; // rdi
  NTSTATUS v10; // eax
  int v11; // r9d
  NTSTATUS v12; // ebx
  __int64 v13; // rax
  unsigned int v15; // ecx
  unsigned __int64 v16; // rsi
  __int16 v17; // r12
  int LanguageSpec; // eax
  int v19; // r9d
  __int16 v20; // ax
  __int16 v21; // r13
  __int16 v22; // r13
  __int64 v23; // rax
  const wchar_t *v24; // rsi
  int v25; // r15d
  int v26; // r15d
  unsigned __int16 v27; // r12
  __int16 v28; // ax
  __int64 v29; // rcx
  int v30; // eax
  __int64 LanguageConfigList; // rax
  int v32; // eax
  char v33; // [rsp+50h] [rbp+0h] BYREF

  v3 = (unsigned __int8 *)((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL);
  LOWORD(v4) = 0;
  *((_QWORD *)v3 + 3) = a3;
  v5 = 0;
  *((_QWORD *)v3 + 5) = KeyHandle;
  *((_WORD *)v3 + 2) = 0;
  *v3 = 0;
  LODWORD(v7) = a3;
  *((_DWORD *)v3 + 8) = 0;
  v8 = KeyHandle;
  *((_QWORD *)v3 + 7) = 0LL;
  *((_DWORD *)v3 + 16) = 0;
  v9 = 0LL;
  if ( KeyHandle && a2 && a3 )
  {
    v9 = *a2;
    *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = *a2;
    *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = 0;
    while ( 1 )
    {
      v10 = ZwEnumerateValueKey(v8, v5, KeyValueFullInformation, v3 + 96, 0x200u, (PULONG)v3 + 8);
      v4 = 0;
      v12 = v10;
      if ( v10 < 0 )
        break;
      v5 = *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC);
      v8 = *(HANDLE *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
      if ( *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x64) == 7 )
      {
        v15 = *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70);
        v5 = *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC);
        if ( v15 + 24 <= 0x200 )
        {
          v16 = (unsigned __int64)v15 >> 1;
          v17 = *(_WORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v16);
          *(_WORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v16) = 0;
          LanguageSpec = RtlpMuiRegGetLanguageSpec(
                           v7,
                           (int)v3 + 116,
                           (unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL,
                           v11,
                           (__int64)(v3 + 4));
          v4 = 0;
          v12 = LanguageSpec;
          if ( LanguageSpec < 0 )
            goto LABEL_7;
          v20 = *(_WORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
          v21 = *v3;
          *(_WORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x74 + 2 * v16) = v17;
          v22 = v21 << 14;
          *(_WORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = v20;
          v23 = *(unsigned int *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68);
          *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3C) = 0LL;
          *(_WORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A) = v22;
          *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 0LL;
          *(_BYTE *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 1) = 0;
          *(_WORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0;
          v24 = (const wchar_t *)&v3[v23 + 96];
          if ( !v24 )
            goto LABEL_37;
          v25 = *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x6C);
          if ( !v25 )
          {
            v7 = *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
LABEL_37:
            v12 = -1073741811;
            goto LABEL_7;
          }
          v26 = 2 * v25;
          v27 = 0;
          do
          {
            if ( *v24 == (_WORD)v4 || v26 <= 0 || v27 >= 3u )
              break;
            if ( (int)RtlpMuiRegGetLanguageSpec(
                        *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
                        (_DWORD)v24,
                        (int)v3 + 1,
                        v19,
                        (__int64)(v3 + 8)) >= 0 )
            {
              v28 = *(_WORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
              *(_WORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A) = ((*(_BYTE *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                               + 1) & 3) << (2 * v27)) | v22 & ~(3 << (2 * v27));
              *(_WORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3E + 2LL * v27) = v28;
              v22 = *(_WORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x3A);
            }
            v12 = RtlStringCbLengthW(v24, v26, (size_t *)v3 + 6);
            if ( v12 < 0 )
            {
              v7 = *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
              goto LABEL_7;
            }
            v29 = *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
            v26 += -2 - v29;
            ++v27;
            v24 = (const wchar_t *)((char *)v24 + v29 + 2);
          }
          while ( v24 );
          v7 = *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
          v30 = RtlpMuiRegValidateConfigNode(v7, (unsigned __int16 *)v3 + 28);
          v4 = 0;
          v12 = v30;
          if ( v30 < 0 )
            goto LABEL_7;
          if ( !v9 )
          {
            LanguageConfigList = RtlpMuiRegCreateLanguageConfigList(0xFFFFFFFFLL);
            *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = LanguageConfigList;
            if ( !LanguageConfigList )
            {
              v12 = -1073741801;
              goto LABEL_11;
            }
            *a2 = LanguageConfigList;
          }
          v32 = RtlpMuiRegConfigListAddLanguage(v3 + 16, v3 + 56);
          v9 = *(_QWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
          v4 = 0;
          v12 = v32;
          if ( v32 >= 0 )
            *a2 = v9;
LABEL_7:
          v5 = *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) + 1;
          *(_DWORD *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = v5;
          if ( v12 == -2147483622 )
          {
            v12 = v4;
            goto LABEL_9;
          }
          v8 = *(HANDLE *)(((unsigned __int64)&v33 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
        }
      }
    }
    if ( v10 != -2147483622 )
      goto LABEL_9;
    goto LABEL_7;
  }
  v12 = -1073741811;
LABEL_9:
  if ( !v9 && v12 != -1073741811 )
  {
LABEL_11:
    v13 = RtlpMuiRegCreateLanguageConfigList(1LL);
    LOWORD(v4) = 0;
    *a2 = v13;
    v9 = v13;
    if ( !v13 )
      v12 = -1073741801;
  }
  if ( v12 < 0 && v9 )
    *(_WORD *)(v9 + 4) = v4;
  return (unsigned int)v12;
}
