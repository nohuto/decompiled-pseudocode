/*
 * XREFs of RtlGetUILanguageInfo @ 0x1800EEF70
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180036490 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18003AA98 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlLCIDToCultureName @ 0x18003B020 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18003B104 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlCultureNameToLCID @ 0x18003B850 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x18003F044 (RtlpCheckMuiMultiStringSafe.c)
 *     DbgPrint @ 0x180051AC0 (DbgPrint.c)
 *     RtlpInitializeLangRegistryInfo @ 0x18006FFD0 (RtlpInitializeLangRegistryInfo.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x180070000 (RtlpMuiFreeLangRegistryInfo.c)
 *     RtlUnicodeStringToInteger @ 0x1800765D0 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     RtlUnicodeStringToLcid @ 0x1800EF5A8 (RtlUnicodeStringToLcid.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x18010488C (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x180104A4C (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     RtlpMuiRegGetFallbackLanguagesAsMultiSZ @ 0x180104BC8 (RtlpMuiRegGetFallbackLanguagesAsMultiSZ.c)
 */

NTSTATUS __cdecl RtlGetUILanguageInfo(
        ULONG Flags,
        PCZZWSTR Languages,
        PZZWSTR FallbackLanguages,
        PULONG NumberOfFallbackLanguages,
        PULONG Attributes)
{
  char v5; // bl
  PZZWSTR v7; // r12
  WCHAR *v8; // rdi
  ULONG v9; // r13d
  __int64 v10; // rdx
  ULONG v11; // r15d
  int v12; // eax
  PVOID v13; // rsi
  NTSTATUS FallbackLanguagesAsMultiSZ; // ebx
  __int64 v15; // r12
  PVOID Heap; // rax
  int InstalledLanguageIndexByLangId; // eax
  __int64 v18; // r9
  __int64 v19; // r15
  const WCHAR *v20; // rdi
  int v22; // r8d
  int v23; // r9d
  int FallbackLanguageInfoByLangId; // eax
  int v25; // eax
  char v26; // [rsp+30h] [rbp-61h]
  _WORD v27[2]; // [rsp+34h] [rbp-5Dh] BYREF
  PZZWSTR v28; // [rsp+38h] [rbp-59h]
  LCID Lcid; // [rsp+40h] [rbp-51h] BYREF
  int v30; // [rsp+44h] [rbp-4Dh]
  PVOID v31; // [rsp+48h] [rbp-49h] BYREF
  ULONG v32; // [rsp+50h] [rbp-41h]
  int v33; // [rsp+54h] [rbp-3Dh]
  PVOID BaseAddress; // [rsp+58h] [rbp-39h]
  _UNICODE_STRING String; // [rsp+60h] [rbp-31h] BYREF
  PULONG v36; // [rsp+70h] [rbp-21h]
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-19h] BYREF
  __int128 v38; // [rsp+88h] [rbp-9h] BYREF
  __int64 v39; // [rsp+98h] [rbp+7h]
  int v40; // [rsp+A0h] [rbp+Fh]

  v5 = Flags;
  v32 = Flags;
  v28 = FallbackLanguages;
  v36 = Attributes;
  v31 = 0LL;
  v7 = FallbackLanguages;
  v27[0] = -1;
  v8 = (WCHAR *)Languages;
  LOBYTE(v30) = 0;
  BaseAddress = 0LL;
  if ( NumberOfFallbackLanguages )
    v9 = *NumberOfFallbackLanguages;
  else
    v9 = 0;
  if ( !Languages || !*Languages || (Flags & 0xC) == 0xC || (Flags & 0xFFFFFF73) != 0 || v9 && !FallbackLanguages )
    return -1073741811;
  v10 = 4LL;
  v11 = Flags & 4;
  if ( (Flags & 4) == 0 )
    v10 = 85LL;
  if ( (int)RtlpCheckMuiMultiStringSafe(v8, v10) < 0 )
    DbgPrint(
      "*** ASSERT FAILED: Input parameter pwmszLanguage for function RtlGetUILanguageInfo is not a valid multi-string!\n");
  if ( v7 )
  {
    if ( v9 )
      *v7 = 0;
    if ( v9 > 1 )
      v7[1] = 0;
  }
  if ( NumberOfFallbackLanguages )
    *NumberOfFallbackLanguages = 2;
  if ( Attributes )
    *Attributes = 0;
  v33 = v5 & 0x80;
  if ( v5 < 0 )
    v12 = RtlpInitializeLangRegistryInfo(&v31);
  else
    v12 = RtlpCreateProcessRegistryInfo(&v31);
  v13 = v31;
  FallbackLanguagesAsMultiSZ = v12;
  if ( v12 >= 0 )
  {
    if ( !v31 )
    {
      FallbackLanguagesAsMultiSZ = -1073741823;
      goto LABEL_56;
    }
    v15 = *((_QWORD *)v31 + 3);
    if ( v11 )
    {
      v26 = 1;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
      BaseAddress = Heap;
      if ( !Heap )
      {
        v13 = v31;
        FallbackLanguagesAsMultiSZ = -1073741801;
LABEL_32:
        v7 = v28;
        goto LABEL_56;
      }
      String.Buffer = (wchar_t *)Heap;
      *(_DWORD *)&String.Length = 11141120;
      RtlInitUnicodeString(&DestinationString, v8);
      if ( (int)RtlUnicodeStringToLcid(&DestinationString, &Lcid) < 0 || !RtlLCIDToCultureName(Lcid, &String) )
      {
        v13 = v31;
        FallbackLanguagesAsMultiSZ = -1073741811;
        goto LABEL_53;
      }
      v13 = v31;
      InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId((__int64)v31, Lcid, 1, v27);
    }
    else
    {
      v26 = 0;
      RtlInitUnicodeString(&String, v8);
      if ( !RtlCultureNameToLCID(&String, &Lcid) )
      {
        FallbackLanguagesAsMultiSZ = -1073741811;
        goto LABEL_32;
      }
      InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByName((__int64)v13, v8, 1, v27);
    }
    FallbackLanguagesAsMultiSZ = InstalledLanguageIndexByLangId;
    if ( InstalledLanguageIndexByLangId < 0 )
    {
      v7 = v28;
      if ( InstalledLanguageIndexByLangId == -1073741823 )
        FallbackLanguagesAsMultiSZ = -1073741772;
      goto LABEL_54;
    }
    if ( v27[0] < 0 || v27[0] >= (int)*(unsigned __int16 *)(v15 + 6) )
      goto LABEL_52;
    v19 = *(_QWORD *)(v15 + 16) + 28LL * v27[0];
    while ( *v8 )
      ++v8;
    v20 = v8 + 1;
    v38 = *(_OWORD *)v19;
    v39 = *(_QWORD *)(v19 + 16);
    v40 = *(_DWORD *)(v19 + 24);
    if ( (*(_BYTE *)v19 & 1) != 0 )
    {
      if ( (*(_BYTE *)v19 & 6) != 0 )
      {
        FallbackLanguagesAsMultiSZ = -1073741595;
        goto LABEL_53;
      }
      if ( *v20 )
      {
LABEL_52:
        FallbackLanguagesAsMultiSZ = -1073741772;
        goto LABEL_53;
      }
      LOBYTE(v22) = v30;
    }
    else
    {
      LOBYTE(v22) = v30;
      if ( *v20 )
      {
        while ( !(_BYTE)v22 )
        {
          if ( v26 )
          {
            RtlInitUnicodeString(&DestinationString, v20);
            if ( RtlUnicodeStringToInteger(&DestinationString, 0x10u, &Lcid) < 0 )
              break;
            LOBYTE(v23) = 1;
            FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByLangId(
                                             (_DWORD)v13,
                                             (unsigned int)&v38,
                                             (unsigned __int16)Lcid,
                                             v23,
                                             (__int64)&v38);
          }
          else
          {
            LOBYTE(v18) = 1;
            FallbackLanguageInfoByLangId = RtlpMuiRegGetFallbackLanguageInfoByName(v13, &v38, v20, v18, &v38);
          }
          FallbackLanguagesAsMultiSZ = FallbackLanguageInfoByLangId;
          if ( FallbackLanguageInfoByLangId < 0 )
            goto LABEL_53;
          v22 = (unsigned __int8)v30;
          if ( (v38 & 0x20) != 0 )
            v22 = 1;
          v30 = v22;
          while ( *v20 )
            ++v20;
          if ( !*++v20 )
            goto LABEL_81;
        }
        FallbackLanguagesAsMultiSZ = -1073741811;
        goto LABEL_53;
      }
    }
LABEL_81:
    if ( v36 )
    {
      v25 = *(_WORD *)v19 & 0x419F | 0x20;
      if ( (*(_WORD *)v19 & 0x1000) != 0 )
        v25 = *(_WORD *)v19 & 0x419F;
      *v36 = v25 | 0x40;
    }
    if ( NumberOfFallbackLanguages )
    {
      v7 = v28;
      *NumberOfFallbackLanguages = v9;
      if ( (_BYTE)v22 )
        *NumberOfFallbackLanguages = 2;
      else
        FallbackLanguagesAsMultiSZ = RtlpMuiRegGetFallbackLanguagesAsMultiSZ(
                                       v32,
                                       (_DWORD)v13,
                                       (unsigned int)&v38,
                                       (_DWORD)NumberOfFallbackLanguages,
                                       (__int64)v7);
LABEL_54:
      if ( BaseAddress )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
        v13 = v31;
      }
      goto LABEL_56;
    }
LABEL_53:
    v7 = v28;
    goto LABEL_54;
  }
LABEL_56:
  if ( v33 && v13 )
    RtlpMuiFreeLangRegistryInfo(v13);
  if ( !FallbackLanguagesAsMultiSZ && NumberOfFallbackLanguages && *NumberOfFallbackLanguages > v9 )
  {
    if ( v7 )
      return -1073741789;
  }
  return FallbackLanguagesAsMultiSZ;
}
