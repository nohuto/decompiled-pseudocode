/*
 * XREFs of RtlGetUserPreferredUILanguages @ 0x18007CA20
 * Callers:
 *     <none>
 * Callees:
 *     RtlpMuiRegFreeLanguageList @ 0x1800207AC (RtlpMuiRegFreeLanguageList.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180036490 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18003681C (LdrpConvertLangFallbackListToMultiSz.c)
 *     InitializeTEBUserLangList @ 0x180038670 (InitializeTEBUserLangList.c)
 *     LdrpCreateLangFallbackList @ 0x180038974 (LdrpCreateLangFallbackList.c)
 *     LdrpMergeLangFallbackLists @ 0x18003A52C (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18003AA98 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180076FA0 (RtlGetSystemPreferredUILanguages.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800EEBD0 (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlIsValidLocaleName @ 0x1800FCEF0 (RtlIsValidLocaleName.c)
 */

NTSTATUS __cdecl RtlGetUserPreferredUILanguages(
        ULONG Flags,
        PCWSTR LocaleName,
        PULONG NumberOfLanguages,
        PZZWSTR Languages,
        PULONG ReturnLength)
{
  PULONG v5; // rdi
  WCHAR *v6; // r13
  ULONG v8; // ebx
  int v9; // edx
  unsigned int v10; // ecx
  int v11; // r15d
  unsigned int v12; // r12d
  int v13; // eax
  int v14; // ecx
  NTSTATUS result; // eax
  __int64 v16; // r10
  _QWORD *UserPrefLanguages; // rcx
  _QWORD *v18; // rsi
  __int64 v19; // rax
  int LangFallbackList; // eax
  NTSTATUS SystemPreferredUILanguages; // ebx
  _WORD *v22; // r14
  int v23; // eax
  _BYTE *v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // r8d
  int v27; // edi
  __int64 v28; // r11
  _BYTE *v29; // rdx
  __int64 v30; // r9
  int v31; // eax
  NTSTATUS v32; // eax
  char v33; // [rsp+28h] [rbp-51h]
  bool v34; // [rsp+58h] [rbp-21h]
  __int16 v35; // [rsp+5Ch] [rbp-1Dh] BYREF
  ULONG NumberOfLanguagesa; // [rsp+60h] [rbp-19h] BYREF
  ULONG v37; // [rsp+64h] [rbp-15h]
  PVOID BaseAddress; // [rsp+68h] [rbp-11h] BYREF
  PVOID v39; // [rsp+70h] [rbp-9h] BYREF
  unsigned int v40; // [rsp+78h] [rbp-1h]
  int v41; // [rsp+7Ch] [rbp+3h]
  _QWORD *v42; // [rsp+80h] [rbp+7h] BYREF
  __int64 v43; // [rsp+88h] [rbp+Fh]
  __int64 v44; // [rsp+90h] [rbp+17h]
  unsigned int LocaleNameb; // [rsp+E0h] [rbp+67h]

  v5 = ReturnLength;
  v6 = Languages;
  v35 = -1;
  BaseAddress = 0LL;
  v8 = Flags;
  v39 = 0LL;
  NumberOfLanguagesa = 0;
  v37 = 0;
  v42 = 0LL;
  v34 = 0;
  if ( ReturnLength )
    v37 = *ReturnLength;
  if ( LocaleName )
  {
    v8 = 4104;
    v34 = (Flags & 0x80) != 0;
    if ( !RtlIsValidLocaleName(LocaleName, 2u) )
    {
      SystemPreferredUILanguages = -1073741772;
      if ( !ReturnLength )
        goto LABEL_40;
LABEL_44:
      *ReturnLength = 2;
      goto LABEL_40;
    }
  }
  if ( (v8 & 0xFFFF6771) != 0 )
    return -1073741811;
  v9 = v8 | 0x80;
  if ( (v8 & 0x9880) != 0 )
    v9 = v8;
  if ( (v9 & 0xC) == 0xC )
    return -1073741811;
  v10 = v9 | 8;
  if ( (v9 & 0xC) != 0 )
    v10 = v9;
  v12 = v10 >> 1;
  v11 = v10 | 0x8000;
  LOBYTE(v12) = (v10 & 2) == 0;
  v13 = v10 & 0x9880;
  v40 = v12;
  if ( (v10 & 0x9880) != 0 )
    v11 = v10;
  v14 = 0x8000;
  v41 = v11;
  if ( v13 )
    v14 = v13;
  if ( v14 != 128 && v14 != 2048 && v14 != 4096 && v14 != 0x8000 || !ReturnLength || *ReturnLength && !v6 )
    return -1073741811;
  result = RtlpCreateProcessRegistryInfo(&v42);
  if ( result >= 0 )
  {
    if ( LocaleName && (int)RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v42, LocaleName, 1, &v35) < 0 )
    {
      SystemPreferredUILanguages = -1073741772;
      goto LABEL_44;
    }
    InitializeTEBUserLangList(v11 & 1, (__int64)v42);
    v16 = *(_QWORD *)NtCurrentTeb()->UserPrefLanguages;
    UserPrefLanguages = NtCurrentTeb()->UserPrefLanguages;
    v44 = v16;
    v18 = v42;
    if ( UserPrefLanguages[1] )
      v19 = *((_QWORD *)NtCurrentTeb()->UserPrefLanguages + 1);
    else
      v19 = v42[6];
    v43 = v19;
    if ( (v11 & 0x800) != 0 )
    {
      if ( !v16
        || ((*ReturnLength = v37,
             SystemPreferredUILanguages = LdrpConvertLangFallbackListToMultiSz(
                                            v16,
                                            (__int64)v18,
                                            v6,
                                            ReturnLength,
                                            v11,
                                            v12,
                                            (int *)&NumberOfLanguagesa),
             SystemPreferredUILanguages < 0)
         || !*(_WORD *)(v44 + 4))
        && SystemPreferredUILanguages != -1073741789 )
      {
        *ReturnLength = v37;
        SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages(
                                       (v11 & 8) != 0 ? 2056 : 2052,
                                       LocaleName,
                                       &NumberOfLanguagesa,
                                       v6,
                                       ReturnLength);
      }
LABEL_33:
      if ( SystemPreferredUILanguages >= 0 )
      {
        *NumberOfLanguages = NumberOfLanguagesa;
        return SystemPreferredUILanguages;
      }
LABEL_40:
      if ( v6 && v37 )
      {
        if ( v37 == 1 )
          *v6 = 0;
        else
          *(_DWORD *)v6 = 0;
      }
      return SystemPreferredUILanguages;
    }
    LangFallbackList = LdrpCreateLangFallbackList((__int64 *)&BaseAddress, (__int64)v42, 0x19u, 0);
    SystemPreferredUILanguages = LangFallbackList;
    if ( (v11 & 0x8080) != 0 )
    {
      if ( LangFallbackList >= 0 )
      {
        if ( !BaseAddress )
          goto LABEL_33;
        SystemPreferredUILanguages = LdrpMergeLangFallbackLists(
                                       v11 | 0x30u,
                                       (__int64)v18,
                                       &BaseAddress,
                                       0LL,
                                       0LL,
                                       v44,
                                       v18[7],
                                       v43,
                                       1);
        if ( SystemPreferredUILanguages >= 0 )
        {
          v22 = BaseAddress;
          *ReturnLength = v37;
          v23 = LdrpConvertLangFallbackListToMultiSz(
                  (__int64)v22,
                  (__int64)v18,
                  v6,
                  ReturnLength,
                  v11,
                  v12,
                  (int *)&NumberOfLanguagesa);
          SystemPreferredUILanguages = v23;
          if ( v23 >= 0 && v22[2] || v23 == -1073741789 )
            goto LABEL_29;
          *ReturnLength = v37;
          v32 = RtlGetSystemPreferredUILanguages(
                  ((v11 & 8) != 0 ? 8 : 4) | 0x8000,
                  LocaleName,
                  &NumberOfLanguagesa,
                  v6,
                  ReturnLength);
          goto LABEL_92;
        }
      }
    }
    else if ( LangFallbackList >= 0 )
    {
      if ( !BaseAddress )
        goto LABEL_33;
      SystemPreferredUILanguages = LdrpMergeLangFallbackLists(
                                     v11 | 0x20u,
                                     (__int64)v18,
                                     &BaseAddress,
                                     0LL,
                                     0LL,
                                     v44,
                                     0LL,
                                     v43,
                                     0);
      if ( SystemPreferredUILanguages >= 0 )
      {
        SystemPreferredUILanguages = LdrpCreateLangFallbackList((__int64 *)&v39, (__int64)v18, 0x19u, 0);
        if ( SystemPreferredUILanguages >= 0 )
        {
          v22 = BaseAddress;
          if ( !v39 )
          {
LABEL_29:
            if ( v22 )
              RtlpMuiRegFreeLanguageList(v22);
            if ( v39 )
              RtlpMuiRegFreeLanguageList(v39);
            goto LABEL_33;
          }
          if ( LocaleName )
          {
            if ( v35 != -1 )
            {
              LOBYTE(v12) = v40;
              v24 = (_BYTE *)(*(_QWORD *)(v18[3] + 16LL) + 28LL * v35);
              if ( v24 )
              {
                if ( (*v24 & 2) != 0 || v34 && (*v24 & 4) != 0 )
                  LOBYTE(v12) = 0;
                if ( *((_BYTE *)v39 + 8) )
                  v25 = v18[5];
                else
                  LODWORD(v25) = v43;
                LdrpMergeParentBaseLanguagesToList((unsigned int)&v39, (_DWORD)v24, (_DWORD)v18, v25, v33);
              }
            }
          }
          else
          {
            v26 = 0;
            LocaleNameb = 0;
            if ( *((_WORD *)BaseAddress + 2) )
            {
              LOBYTE(v12) = v40;
              v27 = v43;
              do
              {
                v28 = *((_QWORD *)v22 + 3);
                if ( *(_WORD *)(v28 + 6LL * v26) == 2 )
                {
                  if ( (*(_BYTE *)(28LL * *(__int16 *)(v28 + 6LL * v26 + 4) + *(_QWORD *)(v18[3] + 16LL)) & 2) != 0 )
                    LOBYTE(v12) = 0;
                  v29 = (_BYTE *)(*(_QWORD *)(v18[3] + 16LL) + 28LL * *(__int16 *)(v28 + 6LL * v26 + 4));
                  if ( (*v29 & 6) != 0 )
                  {
                    if ( *((_BYTE *)v39 + 8) )
                      v30 = v18[5];
                    else
                      LODWORD(v30) = v27;
                    v31 = LdrpMergeParentBaseLanguagesToList((unsigned int)&v39, (_DWORD)v29, (_DWORD)v18, v30, v33);
                    v26 = LocaleNameb;
                    SystemPreferredUILanguages = v31;
                    if ( v31 >= 0 )
                      break;
                  }
                }
                LocaleNameb = ++v26;
              }
              while ( v26 < (unsigned __int16)v22[2] );
              v5 = ReturnLength;
              LOBYTE(v11) = v41;
              v6 = Languages;
            }
            if ( !*(_WORD *)(*((_QWORD *)v22 + 3) + 6LL * v26) || SystemPreferredUILanguages < 0 )
            {
              *v5 = v37;
              SystemPreferredUILanguages = RtlGetSystemPreferredUILanguages(
                                             (v11 & 8) != 0 ? 4104 : 4100,
                                             0LL,
                                             &NumberOfLanguagesa,
                                             v6,
                                             v5);
              if ( SystemPreferredUILanguages >= 0 )
                goto LABEL_29;
            }
          }
          v32 = LdrpConvertLangFallbackListToMultiSz(
                  (__int64)v39,
                  (__int64)v18,
                  v6,
                  v5,
                  v11,
                  v12,
                  (int *)&NumberOfLanguagesa);
LABEL_92:
          SystemPreferredUILanguages = v32;
          goto LABEL_29;
        }
      }
    }
    v22 = BaseAddress;
    goto LABEL_29;
  }
  return result;
}
