__int64 __fastcall RtlpMuiRegInitLIPLanguage(__int64 a1, void *a2, _BYTE *a3)
{
  unsigned __int64 v3; // rbp
  unsigned int v7; // r14d
  ULONG v8; // ebx
  __int64 v9; // rsi
  int ValueKey; // eax
  int v11; // edi
  unsigned __int64 v12; // rcx
  int v14; // [rsp+50h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL;
  *(_DWORD *)(v3 + 28) = 0;
  v7 = 0;
  v8 = 0;
  *(_OWORD *)(v3 + 8) = 0LL;
  memset((void *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 32), 0, 0xAAuLL);
  LODWORD(v9) = 0;
  if ( !a1 || !a2 || !a3 || (*a3 & 4) == 0 )
    return 3221225485LL;
  RtlInitUnicodeString((PUNICODE_STRING)(v3 + 8), L"DefaultFallback");
  *(_DWORD *)v3 = 1;
  *(_DWORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 170;
  if ( (int)LdrpQueryValueKey(
              a2,
              (PUNICODE_STRING)(v3 + 8),
              (_DWORD *)((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL),
              (void *)(v3 + 32),
              (ULONG *)(v3 + 24)) < 0
    || *(_DWORD *)v3 != 1 )
  {
    goto LABEL_30;
  }
  RtlInitUnicodeString((PUNICODE_STRING)(v3 + 8), (PCWSTR)(v3 + 32));
  *(_DWORD *)v3 = 7;
  ValueKey = LdrpQueryValueKey(
               a2,
               (PUNICODE_STRING)(v3 + 8),
               (_DWORD *)((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL),
               0LL,
               0LL);
  v11 = ValueKey;
  if ( (!ValueKey || ValueKey == -2147483643)
    && (*(_DWORD *)v3 == 7 || *(_DWORD *)v3 == 1)
    && (int)RtlMuiRegAddLIPParent(a1, (__int64)a3, 0, (WCHAR *)(v3 + 32)) >= 0 )
  {
    v7 = 1;
    v9 = -1LL;
    do
      ++v9;
    while ( *(_WORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20 + 2 * v9) );
  }
  if ( v11 != -2147483622 )
  {
LABEL_30:
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v7 >= 4
          || ZwEnumerateValueKey(a2, v8, KeyValueFullInformation, (PVOID)(v3 + 224), 0x200u, (PULONG)(v3 + 28)) < 0 )
        {
          return 0LL;
        }
        if ( *(_DWORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0xE4) == 7
          || *(_DWORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0xE4) == 1 )
        {
          v12 = *(unsigned int *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0xF0);
          if ( v12 + 24 <= 0x200 )
            break;
        }
LABEL_20:
        ++v8;
      }
      *(_WORD *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0xF4 + 2 * (v12 >> 1)) = 0;
      RtlInitUnicodeString((PUNICODE_STRING)(v3 + 8), (PCWSTR)(v3 + 244));
      if ( (!(_DWORD)v9
         || RtlCompareUnicodeStrings(
              *(PCWCH *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10),
              (unsigned __int64)*(unsigned __int16 *)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 8) >> 1,
              (PCWCH)(v3 + 32),
              (unsigned int)v9,
              1u))
        && (int)RtlMuiRegAddLIPParent(
                  a1,
                  (__int64)a3,
                  v7,
                  *(WCHAR **)(((unsigned __int64)&v14 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10)) >= 0 )
      {
        ++v7;
        goto LABEL_20;
      }
      ++v8;
    }
  }
  return 0LL;
}
