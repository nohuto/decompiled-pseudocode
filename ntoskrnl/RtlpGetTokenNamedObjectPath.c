/*
 * XREFs of RtlpGetTokenNamedObjectPath @ 0x1409B9D5C
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x1405A7A70 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlGetTokenNamedObjectPath @ 0x1409B93E0 (RtlGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140208B50 (RtlAppendUnicodeToString.c)
 *     RtlStringCchPrintfW @ 0x140208BFC (RtlStringCchPrintfW.c)
 *     RtlAppendUnicodeStringToString @ 0x1402447D0 (RtlAppendUnicodeStringToString.c)
 *     RtlStringCbLengthW @ 0x140246920 (RtlStringCbLengthW.c)
 *     RtlSubAuthoritySid @ 0x1402BE740 (RtlSubAuthoritySid.c)
 *     RtlGetCurrentServiceSessionId @ 0x1403024F0 (RtlGetCurrentServiceSessionId.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     NtQueryInformationToken @ 0x1406D6780 (NtQueryInformationToken.c)
 *     RtlGetAppContainerSidType @ 0x1407414C0 (RtlGetAppContainerSidType.c)
 *     RtlConvertSidToUnicodeString @ 0x1407479E0 (RtlConvertSidToUnicodeString.c)
 *     ExpAllocateStringRoutine @ 0x140777DB0 (ExpAllocateStringRoutine.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     RtlGetAppContainerParent @ 0x1409B9200 (RtlGetAppContainerParent.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpGetTokenNamedObjectPath(HANDLE TokenHandle, char *Sid, char a3, UNICODE_STRING *a4)
{
  char *v8; // r12
  PSID v9; // r14
  int v10; // eax
  int v11; // esi
  int v12; // edi
  signed int AppContainerSidType; // ebx
  __int64 v15; // r14
  int CurrentServiceSessionId; // eax
  int v17; // r9d
  char v18; // al
  PULONG v19; // rsi
  PULONG v20; // rdi
  PULONG v21; // rbx
  const wchar_t *v22; // rcx
  NTSTATUS v23; // eax
  wchar_t *v24; // rcx
  wchar_t v25; // ax
  wchar_t *v26; // rax
  wchar_t *v27; // rdx
  wchar_t v28; // ax
  int v29; // esi
  size_t v30; // rbx
  int v31; // r14d
  size_t v32; // rbx
  wchar_t *StringRoutine; // rax
  wchar_t *v34; // rdi
  PULONG ReturnLength; // [rsp+20h] [rbp-E0h]
  PULONG ReturnLengtha; // [rsp+20h] [rbp-E0h]
  char v37; // [rsp+40h] [rbp-C0h]
  PSID v38; // [rsp+48h] [rbp-B8h] BYREF
  int TokenInformation; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v40; // [rsp+54h] [rbp-ACh] BYREF
  int v41; // [rsp+58h] [rbp-A8h] BYREF
  int v42; // [rsp+5Ch] [rbp-A4h] BYREF
  int v43; // [rsp+60h] [rbp-A0h] BYREF
  int v44; // [rsp+64h] [rbp-9Ch]
  int v45; // [rsp+68h] [rbp-98h]
  size_t pcbLength; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  int v48; // [rsp+88h] [rbp-78h]
  UNICODE_STRING Source; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING v51; // [rsp+B0h] [rbp-50h] BYREF
  PSID Sida[12]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v53[10]; // [rsp+120h] [rbp+20h] BYREF
  wchar_t psz[264]; // [rsp+170h] [rbp+70h] BYREF
  PCWSTR SourceString; // [rsp+380h] [rbp+280h] BYREF
  char v56; // [rsp+388h] [rbp+288h]
  wchar_t pszDest[264]; // [rsp+4A0h] [rbp+3A0h] BYREF

  v43 = 0;
  v38 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  memset(v53, 0, sizeof(v53));
  v40 = 0;
  v42 = 0;
  memset(psz, 0, 0x208uLL);
  memset(pszDest, 0, 0x208uLL);
  memset(Sida, 0, 0x58uLL);
  *(_QWORD *)&Source.Length = 262146LL;
  Source.Buffer = (wchar_t *)L"\\";
  v51 = 0LL;
  if ( !a4 || !TokenHandle )
    return 3221225485LL;
  TokenInformation = 0;
  v41 = 0;
  v44 = a3 & 2;
  v37 = 1;
  v10 = a3 & 8;
  v11 = a3 & 1;
  v12 = a3 & 4;
  LODWORD(pcbLength) = v11;
  v45 = v10;
  v48 = v12;
  *a4 = 0LL;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  if ( Sid )
  {
    v8 = Sid;
    TokenInformation = 1;
    goto LABEL_17;
  }
  AppContainerSidType = NtQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &v40);
  if ( AppContainerSidType >= 0 )
  {
    if ( !TokenInformation )
      goto LABEL_17;
    AppContainerSidType = NtQueryInformationToken(TokenHandle, TokenAppContainerSid, v53, 0x50u, &v40);
    if ( AppContainerSidType >= 0 )
    {
      v8 = (char *)v53[0];
      if ( !v53[0] )
      {
        AppContainerSidType = -1073741823;
        goto LABEL_10;
      }
LABEL_17:
      AppContainerSidType = NtQueryInformationToken(TokenHandle, TokenPrivateNameSpace, &v41, 4u, &v40);
      if ( AppContainerSidType < 0 )
        goto LABEL_10;
      if ( v41 )
      {
        AppContainerSidType = NtQueryInformationToken(TokenHandle, TokenUser, Sida, 0x58u, &v40);
        if ( AppContainerSidType < 0 )
          goto LABEL_10;
        AppContainerSidType = RtlConvertSidToUnicodeString(&UnicodeString, Sida[0], 1u);
        if ( AppContainerSidType < 0 )
          goto LABEL_10;
      }
      AppContainerSidType = NtQueryInformationToken(TokenHandle, TokenSessionId, &v42, 4u, &v40);
      if ( AppContainerSidType < 0 )
        goto LABEL_10;
      v15 = 260LL;
      if ( TokenInformation )
      {
        AppContainerSidType = RtlGetAppContainerSidType(v8, &v43);
        if ( AppContainerSidType < 0 )
          goto LABEL_35;
        if ( v43 == 2 )
        {
          AppContainerSidType = RtlConvertSidToUnicodeString(&DestinationString, v8, 1u);
          if ( AppContainerSidType >= 0 )
            goto LABEL_26;
          goto LABEL_35;
        }
        AppContainerSidType = RtlGetAppContainerParent(v8, (ULONG **)&v38);
        if ( AppContainerSidType < 0
          || (AppContainerSidType = RtlConvertSidToUnicodeString(&DestinationString, v38, 1u), AppContainerSidType < 0)
          || (v19 = RtlSubAuthoritySid(v8, 0xBu),
              v20 = RtlSubAuthoritySid(v8, 0xAu),
              v21 = RtlSubAuthoritySid(v8, 9u),
              LODWORD(ReturnLength) = *RtlSubAuthoritySid(v8, 8u),
              AppContainerSidType = RtlStringCchPrintfW(
                                      pszDest,
                                      0x104uLL,
                                      L"%s\\%u-%u-%u-%u",
                                      DestinationString.Buffer,
                                      ReturnLength,
                                      *v21,
                                      *v20,
                                      *v19),
              AppContainerSidType < 0) )
        {
LABEL_35:
          v9 = v38;
          goto LABEL_10;
        }
        RtlFreeUnicodeString(&DestinationString);
        RtlInitUnicodeString(&DestinationString, pszDest);
        v12 = v48;
        LOBYTE(v11) = pcbLength;
        v37 = 0;
      }
LABEL_26:
      AppContainerSidType = NtQueryInformationToken(TokenHandle, TokenBnoIsolation, &SourceString, 0x120u, &v40);
      if ( AppContainerSidType < 0 )
      {
LABEL_73:
        v9 = v38;
        goto LABEL_10;
      }
      if ( v41 || TokenInformation )
      {
        v17 = v42;
      }
      else
      {
        CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
        v17 = v42;
        if ( v42 == CurrentServiceSessionId )
        {
          v18 = 1;
          goto LABEL_38;
        }
      }
      v18 = 0;
LABEL_38:
      if ( (_BYTE)v11 )
      {
        if ( !v12 )
        {
          v23 = RtlStringCchPrintfW(psz, 0x104uLL, L"Global\\Session\\%ld%s");
LABEL_52:
          AppContainerSidType = v23;
LABEL_60:
          if ( AppContainerSidType >= 0 )
          {
            pcbLength = 0LL;
            AppContainerSidType = RtlStringCbLengthW(psz, 0x208uLL, &pcbLength);
            if ( AppContainerSidType >= 0 )
            {
              v29 = v44;
              if ( !v41 || v44 )
                v30 = pcbLength;
              else
                v30 = UnicodeString.Length + pcbLength + 2;
              if ( TokenInformation )
                v30 += DestinationString.Length + 2LL;
              v31 = v45;
              if ( v56 && !v45 )
              {
                RtlInitUnicodeString(&v51, SourceString);
                v30 += v51.Length + 2LL;
              }
              v32 = v30 + 2;
              StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v32);
              v34 = StringRoutine;
              if ( StringRoutine )
              {
                memset(StringRoutine, 0, v32);
                *a4 = 0LL;
                a4->MaximumLength = v32;
                a4->Buffer = v34;
                AppContainerSidType = RtlAppendUnicodeToString(a4, psz);
                if ( AppContainerSidType >= 0 )
                {
                  if ( !v41
                    || v29
                    || (AppContainerSidType = RtlAppendUnicodeStringToString(a4, &Source), AppContainerSidType >= 0)
                    && (AppContainerSidType = RtlAppendUnicodeStringToString(a4, &UnicodeString),
                        AppContainerSidType >= 0) )
                  {
                    if ( !TokenInformation
                      || (AppContainerSidType = RtlAppendUnicodeStringToString(a4, &Source), AppContainerSidType >= 0)
                      && (AppContainerSidType = RtlAppendUnicodeStringToString(a4, &DestinationString),
                          AppContainerSidType >= 0) )
                    {
                      if ( v56 )
                      {
                        if ( !v31 )
                        {
                          AppContainerSidType = RtlAppendUnicodeStringToString(a4, &Source);
                          if ( AppContainerSidType >= 0 )
                            AppContainerSidType = RtlAppendUnicodeStringToString(a4, &v51);
                        }
                      }
                    }
                  }
                }
              }
              else
              {
                AppContainerSidType = -1073741670;
              }
            }
          }
          goto LABEL_73;
        }
        v27 = psz;
        do
        {
          if ( v15 == -2147483386 )
            break;
          v28 = *(wchar_t *)((char *)v27 + (char *)L"AppContainerNamedObjects" - (char *)psz);
          if ( !v28 )
            break;
          *v27++ = v28;
          --v15;
        }
        while ( v15 );
        v26 = v27 - 1;
        if ( v15 )
          v26 = v27;
      }
      else
      {
        if ( !v18 )
        {
          v22 = L"AppContainerNamedObjects";
          if ( !TokenInformation )
            v22 = L"BaseNamedObjects";
          LODWORD(ReturnLengtha) = v17;
          v23 = RtlStringCchPrintfW(psz, 0x104uLL, L"%s\\%ld\\%s", L"\\Sessions", ReturnLengtha, v22);
          goto LABEL_52;
        }
        v24 = psz;
        do
        {
          if ( v15 == -2147483386 )
            break;
          v25 = *(wchar_t *)((char *)v24 + (char *)L"\\BaseNamedObjects" - (char *)psz);
          if ( !v25 )
            break;
          *v24++ = v25;
          --v15;
        }
        while ( v15 );
        v26 = v24 - 1;
        if ( v15 )
          v26 = v24;
      }
      *v26 = 0;
      AppContainerSidType = v15 == 0 ? 0x80000005 : 0;
      goto LABEL_60;
    }
  }
LABEL_10:
  RtlFreeUnicodeString(&UnicodeString);
  if ( AppContainerSidType < 0 )
    RtlFreeUnicodeString(a4);
  if ( v37 )
    RtlFreeUnicodeString(&DestinationString);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)AppContainerSidType;
}
