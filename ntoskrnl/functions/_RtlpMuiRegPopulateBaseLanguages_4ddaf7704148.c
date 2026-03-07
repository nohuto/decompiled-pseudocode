__int64 __fastcall RtlpMuiRegPopulateBaseLanguages(__int64 a1, __int64 a2, _WORD *a3, __int64 a4)
{
  unsigned __int64 v4; // rbp
  unsigned int v8; // r13d
  __int64 v9; // r14
  __int16 v10; // ax
  unsigned int v11; // edi
  __int64 result; // rax
  unsigned __int16 v13; // cx
  unsigned __int16 v14; // si
  __int64 v15; // r15
  void *v16; // rsi
  ULONG i; // eax
  unsigned __int64 v18; // rsi
  __int16 v19; // r15
  unsigned int *v20; // rax
  _WORD v21[2]; // [rsp+50h] [rbp+0h] BYREF

  v4 = (unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(v4 + 48) = a2;
  *(_QWORD *)(v4 + 56) = a4;
  *(_DWORD *)(v4 + 40) = 0;
  *(_OWORD *)(v4 + 24) = 0LL;
  memset((void *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 64), 0, 0xAAuLL);
  memset((void *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 768), 0, 0xAAuLL);
  memset((void *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 944), 0, 0xAAuLL);
  *(_WORD *)v4 = 0;
  v8 = 0;
  *(_WORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0;
  LODWORD(v9) = 0;
  *(_WORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = 0;
  if ( !a1 || !a3 || !a2 )
    return 3221225485LL;
  v10 = *(_WORD *)(a1 + 4);
  v11 = 0;
  *(_DWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0;
  if ( v10 )
  {
    v13 = *(_WORD *)(a1 + 6);
    v14 = *(_WORD *)(a1 + 8);
  }
  else
  {
    result = NtQueryInstallUILanguage((_WORD *)((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL));
    if ( (int)result < 0 )
      return result;
    if ( (int)RtlpLoadInstallLanguageFallback(a1, (_WORD *)(v4 + 8), (_WORD *)(v4 + 12)) >= 0 )
    {
      v13 = *(_WORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
      v14 = *(_WORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC);
    }
    else
    {
      v13 = 0;
      v14 = 0;
    }
    v10 = *(_WORD *)v4;
    if ( PsUILanguageComitted )
    {
      *(_WORD *)(a1 + 8) = v14;
      *(_WORD *)(a1 + 6) = v13;
      *(_WORD *)(a1 + 4) = v10;
    }
  }
  v15 = -1LL;
  if ( a3[2] == v10 )
  {
    if ( v13 )
    {
      *(_QWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = ((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                          + 768;
      *(_DWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 512;
      *(_WORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x1A) = 170;
      if ( RtlLCIDToCultureName(v13, (UNICODE_STRING *)(v4 + 24)) )
      {
        if ( ZwQueryValueKey(
               *(HANDLE *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30),
               (PUNICODE_STRING)(v4 + 24),
               KeyValueFullInformation,
               (PVOID)(v4 + 256),
               0x200u,
               (PULONG)(v4 + 4)) >= 0
          && (int)RtlpMuiRegValidateAndGetInstallFallbackBase(a1, v4 + 256, v14, v4 + 944) >= 0
          && (int)RtlpMuiRegAddBaseLanguage((__int64 *)a1, a3, 0, v4 + 256, (wchar_t *)(v4 + 944)) >= 0 )
        {
          v11 = 1;
          v9 = -1LL;
          do
            ++v9;
          while ( *(_WORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x300 + 2 * v9) );
        }
      }
    }
  }
  RtlInitUnicodeString((PUNICODE_STRING)(v4 + 24), L"DefaultFallback");
  v16 = *(void **)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
  *(_DWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = 1;
  *(_DWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 170;
  if ( (int)LdrpQueryValueKey(
              v16,
              (PUNICODE_STRING)(v4 + 24),
              (_DWORD *)(v4 + 12),
              (void *)(v4 + 64),
              (ULONG *)(v4 + 4)) >= 0
    && *(_DWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) == 1
    && (!(_DWORD)v9
     || RtlCompareUnicodeStrings(
          (PCWCH)(v4 + 64),
          (unsigned __int64)*(unsigned int *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 4) >> 1,
          (PCWCH)(v4 + 768),
          (unsigned int)v9,
          1u)) )
  {
    RtlInitUnicodeString((PUNICODE_STRING)(v4 + 24), (PCWSTR)(v4 + 64));
    *(_DWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 512;
    if ( ZwQueryValueKey(
           v16,
           (PUNICODE_STRING)(v4 + 24),
           KeyValueFullInformation,
           (PVOID)(v4 + 256),
           0x200u,
           (PULONG)(v4 + 4)) >= 0
      && *(_DWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x104) == 7
      && (int)RtlpMuiRegAddBaseLanguage((__int64 *)a1, a3, v11, v4 + 256, 0LL) >= 0 )
    {
      ++v11;
      do
        ++v15;
      while ( *(_WORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40 + 2 * v15) );
      v8 = v15;
    }
  }
  for ( i = *(_DWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
        v11 < 4
     && ZwEnumerateValueKey(v16, i, KeyValueFullInformation, (PVOID)(v4 + 256), 0x200u, (PULONG)(v4 + 40)) >= 0;
        *(_DWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = i )
  {
    if ( *(_DWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x104) == 7
      && *(_DWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x110) <= 0x200u )
    {
      if ( !v8 && !(_DWORD)v9 )
        goto LABEL_42;
      v18 = (unsigned __int64)*(unsigned int *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x110) >> 1;
      v19 = *(_WORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x114 + 2 * v18);
      *(_WORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x114 + 2 * v18) = 0;
      if ( (!(_DWORD)v9
         || RtlCompareUnicodeStrings(
              (PCWCH)(v4 + 276),
              (unsigned __int64)*(unsigned int *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x110) >> 1,
              (PCWCH)(v4 + 768),
              (unsigned int)v9,
              1u))
        && (!v8
         || RtlCompareUnicodeStrings(
              (PCWCH)(v4 + 276),
              (unsigned __int64)*(unsigned int *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x110) >> 1,
              (PCWCH)(v4 + 64),
              v8,
              1u)) )
      {
        *(_WORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x114 + 2 * v18) = v19;
LABEL_42:
        if ( (int)RtlpMuiRegAddBaseLanguage((__int64 *)a1, a3, v11, v4 + 256, 0LL) >= 0 )
          ++v11;
      }
    }
    v16 = *(void **)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
    i = *(_DWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) + 1;
  }
  v20 = *(unsigned int **)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38);
  if ( v20 )
    *v20 = v11;
  return 0LL;
}
