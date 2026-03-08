/*
 * XREFs of RtlFormatCurrentUserKeyPath @ 0x140747770
 * Callers:
 *     RtlpGetRegistryHandle @ 0x14069BBB0 (RtlpGetRegistryHandle.c)
 *     RtlOpenCurrentUser @ 0x140749100 (RtlOpenCurrentUser.c)
 *     AslRegistryBuildUserPath @ 0x14084C16C (AslRegistryBuildUserPath.c)
 *     _RegRtlOpenPredefinedKey @ 0x140858A9C (_RegRtlOpenPredefinedKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140208B50 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQueryInformationToken @ 0x140412730 (ZwQueryInformationToken.c)
 *     RtlLengthSidAsUnicodeString @ 0x140747878 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x1407479E0 (RtlConvertSidToUnicodeString.c)
 *     ExpAllocateStringRoutine @ 0x140777DB0 (ExpAllocateStringRoutine.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 */

NTSTATUS __fastcall RtlFormatCurrentUserKeyPath(PUNICODE_STRING UnicodeString)
{
  NTSTATUS result; // eax
  unsigned __int16 v3; // di
  __int64 v4; // rcx
  wchar_t *StringRoutine; // rax
  wchar_t *Buffer; // rax
  unsigned __int64 v7; // rdx
  NTSTATUS v8; // edi
  int v9; // [rsp+38h] [rbp-39h] BYREF
  ULONG ReturnLength; // [rsp+3Ch] [rbp-35h] BYREF
  UNICODE_STRING UnicodeStringa; // [rsp+40h] [rbp-31h] BYREF
  PSID TokenInformation[12]; // [rsp+58h] [rbp-19h] BYREF

  ReturnLength = 0;
  v9 = 0;
  *(_DWORD *)(&UnicodeStringa.MaximumLength + 1) = 0;
  result = ZwQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, TokenUser, TokenInformation, 0x58u, &ReturnLength);
  if ( result >= 0 )
  {
    result = RtlLengthSidAsUnicodeString(TokenInformation[0], &v9);
    if ( result >= 0 )
    {
      v3 = v9;
      UnicodeString->Length = 0;
      v4 = (unsigned __int16)(v3 + 34);
      UnicodeString->MaximumLength = v4;
      StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v4);
      UnicodeString->Buffer = StringRoutine;
      if ( StringRoutine )
      {
        RtlAppendUnicodeToString(UnicodeString, L"\\REGISTRY\\USER\\");
        Buffer = UnicodeString->Buffer;
        v7 = (unsigned __int64)UnicodeString->Length >> 1;
        UnicodeStringa.MaximumLength = v3;
        UnicodeStringa.Length = 0;
        UnicodeStringa.Buffer = &Buffer[v7];
        v8 = RtlConvertSidToUnicodeString(&UnicodeStringa, TokenInformation[0], 0);
        if ( v8 < 0 )
          RtlFreeUnicodeString(UnicodeString);
        else
          UnicodeString->Length += UnicodeStringa.Length;
        return v8;
      }
      else
      {
        return -1073741801;
      }
    }
  }
  return result;
}
