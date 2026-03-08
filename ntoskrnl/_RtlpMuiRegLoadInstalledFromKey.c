/*
 * XREFs of _RtlpMuiRegLoadInstalledFromKey @ 0x14039C4A0
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x140844000 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwEnumerateKey @ 0x140412950 (ZwEnumerateKey.c)
 *     NtClose @ 0x1407C00E0 (NtClose.c)
 *     LdrpOpenKey @ 0x14084370C (LdrpOpenKey.c)
 *     ValidateRegistrLangType @ 0x140843758 (ValidateRegistrLangType.c)
 *     RtlpMuiRegAddLanguageByName @ 0x1408437B0 (RtlpMuiRegAddLanguageByName.c)
 *     LdrpQueryValueKey @ 0x1408446D0 (LdrpQueryValueKey.c)
 */

__int64 __fastcall RtlpMuiRegLoadInstalledFromKey(int a1)
{
  unsigned int *v1; // rbp
  ULONG v3; // edi
  __int64 v4; // r8
  NTSTATUS v5; // ebx
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  void *v8; // rcx
  __int16 v9; // r11
  unsigned int v10; // r11d
  char v11; // cl
  int v12; // ecx
  void *v13; // rcx
  void *v14; // rcx
  int Length; // [rsp+20h] [rbp-30h]
  int v17; // [rsp+50h] [rbp+0h] BYREF

  v1 = (unsigned int *)((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL);
  v1[8] = 0;
  *((_QWORD *)v1 + 2) = 0LL;
  *v1 = 0;
  *((_WORD *)v1 + 2) = -1;
  v3 = 0;
  *((_QWORD *)v1 + 3) = 0LL;
  *(_OWORD *)(v1 + 10) = 0LL;
  RtlInitUnicodeString(
    (PUNICODE_STRING)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 40),
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages");
  if ( (int)LdrpOpenKey(v1 + 10, 0LL, v4, v1 + 6) < 0 )
    return 0LL;
  do
  {
    v5 = ZwEnumerateKey(
           *(HANDLE *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
           v3,
           KeyBasicInformation,
           v1 + 16,
           0x200u,
           v1 + 8);
    if ( v5 < 0 )
    {
      if ( v5 != -2147483622 )
        goto LABEL_19;
    }
    else
    {
      v6 = *(unsigned int *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x4C);
      if ( v6 + 24 <= 0x200 )
      {
        *(_WORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50 + 2 * (v6 >> 1)) = 0;
        RtlInitUnicodeString((PUNICODE_STRING)(v1 + 10), (PCWSTR)v1 + 40);
        if ( (int)LdrpOpenKey(v1 + 10, *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18), v7, v1 + 4) >= 0 )
        {
          RtlInitUnicodeString((PUNICODE_STRING)(v1 + 10), L"Type");
          v8 = *(void **)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
          *(_DWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 4;
          *(_DWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x24) = 4;
          if ( (int)LdrpQueryValueKey(v8, (PUNICODE_STRING)(v1 + 10), (__int64)(v1 + 9)) >= 0
            && (int)ValidateRegistrLangType(*v1) >= 0 )
          {
            v10 = v9 & 0x419F;
            *v1 = v10;
            if ( (v10 & 7) != 0 && (v10 & 7 & -(v10 & 7)) == (v10 & 7) )
            {
              if ( (v10 & 0x180) == 0 || (v11 = v10, (v10 & 0x180 & -(v10 & 0x180)) != (v10 & 0x180)) )
              {
                v10 = v10 & 0xFFFFFE7F | 0x80;
                *v1 = v10;
                v11 = v10;
              }
              v12 = v11 & 0x18;
              if ( v12 && (v12 & -v12) == v12 && ((v10 & 8) == 0 || (v10 & 4) != 0) )
                RtlpMuiRegAddLanguageByName(
                  a1,
                  *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10),
                  (_DWORD)v1 + 80,
                  v10,
                  Length,
                  (__int64)(v1 + 1));
            }
          }
        }
      }
    }
    v13 = *(void **)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
    if ( v13 )
    {
      NtClose(v13);
      *(_QWORD *)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0LL;
    }
    ++v3;
  }
  while ( v5 != -2147483622 );
  v5 = 0;
LABEL_19:
  v14 = *(void **)(((unsigned __int64)&v17 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
  if ( v14 )
    NtClose(v14);
  return (unsigned int)v5;
}
