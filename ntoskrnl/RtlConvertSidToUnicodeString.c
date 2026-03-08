/*
 * XREFs of RtlConvertSidToUnicodeString @ 0x1407479E0
 * Callers:
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x14060D690 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     SepValidateReferencedCachedHandles @ 0x1407448F8 (SepValidateReferencedCachedHandles.c)
 *     PspReadUserQuotaLimits @ 0x140745544 (PspReadUserQuotaLimits.c)
 *     PiDqOpenUserObjectRegKey @ 0x140747298 (PiDqOpenUserObjectRegKey.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140747770 (RtlFormatCurrentUserKeyPath.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x140793848 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     LocalConvertSidToStringSidW @ 0x1408368E8 (LocalConvertSidToStringSidW.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409B9D5C (RtlpGetTokenNamedObjectPath.c)
 *     CmpGetVirtualizationID @ 0x140A1709C (CmpGetVirtualizationID.c)
 *     AdtpBuildSidListString @ 0x140A5852C (AdtpBuildSidListString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A6772C (_SysCtxRegOpenCurrentUserKey.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14030E970 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     wcscat_s @ 0x1403DA170 (wcscat_s.c)
 *     wcscpy_s @ 0x1403DA210 (wcscpy_s.c)
 *     RtlIntegerToUnicode @ 0x140747BC0 (RtlIntegerToUnicode.c)
 *     RtlCreateUnicodeString @ 0x140747D00 (RtlCreateUnicodeString.c)
 *     RtlValidSid @ 0x1407C92A0 (RtlValidSid.c)
 *     RtlLargeIntegerToUnicode @ 0x1409BA5B8 (RtlLargeIntegerToUnicode.c)
 */

NTSTATUS __stdcall RtlConvertSidToUnicodeString(
        PUNICODE_STRING UnicodeString,
        PSID Sid,
        BOOLEAN AllocateDestinationString)
{
  NTSTATUS v6; // edi
  char *v7; // rbx
  NTSTATUS result; // eax
  unsigned __int8 v9; // r14
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  _DWORD v13[2]; // [rsp+20h] [rbp-E0h] BYREF
  UNICODE_STRING SourceString; // [rsp+28h] [rbp-D8h] BYREF
  wchar_t Dst; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v16[4]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v17[496]; // [rsp+4Ch] [rbp-B4h] BYREF
  char v18; // [rsp+23Ch] [rbp+13Ch] BYREF
  char v19; // [rsp+23Eh] [rbp+13Eh] BYREF

  SourceString = 0LL;
  if ( RtlValidSid(Sid) != 1 || *(_BYTE *)Sid != 1 )
    return -1073741704;
  wcscpy_s(&Dst, 0x100uLL, L"S-1-");
  v6 = 0;
  v7 = v16;
  if ( *((_BYTE *)Sid + 2) || *((_BYTE *)Sid + 3) )
  {
    wcscat_s(&Dst, 0x100uLL, L"0x");
    v7 = v17;
    v11 = *((unsigned __int8 *)Sid + 5);
    v13[1] = *((unsigned __int8 *)Sid + 3) + (*((unsigned __int8 *)Sid + 2) << 8);
    v13[0] = *((unsigned __int8 *)Sid + 7)
           + (*((unsigned __int8 *)Sid + 6) << 8)
           + (v11 << 16)
           + (*((unsigned __int8 *)Sid + 4) << 24);
    result = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64, _BYTE *))RtlLargeIntegerToUnicode)(
               v13,
               v12,
               250LL,
               v17);
  }
  else
  {
    result = RtlIntegerToUnicode(
               *((unsigned __int8 *)Sid + 7)
             + (*((unsigned __int8 *)Sid + 6) << 8)
             + (*((unsigned __int8 *)Sid + 5) << 16)
             + (*((unsigned __int8 *)Sid + 4) << 24),
               10LL,
               252LL,
               v16);
  }
  if ( result >= 0 )
  {
    v9 = 0;
    if ( *((_BYTE *)Sid + 1) )
    {
      while ( 1 )
      {
        while ( v7 < &v18 && *(_WORD *)v7 )
          v7 += 2;
        *(_WORD *)v7 = 45;
        v7 += 2;
        result = RtlIntegerToUnicode(
                   *((unsigned int *)Sid + v9 + 2),
                   10LL,
                   256 - (unsigned int)((v7 - (char *)&Dst) >> 1),
                   v7);
        if ( result < 0 )
          break;
        if ( ++v9 >= *((_BYTE *)Sid + 1) )
          goto LABEL_14;
      }
    }
    else
    {
LABEL_14:
      if ( AllocateDestinationString )
        return RtlCreateUnicodeString(UnicodeString, &Dst) == 0 ? 0xC0000017 : 0;
      while ( v7 < &v19 && *(_WORD *)v7 )
        v7 += 2;
      v10 = 2 * ((v7 - (char *)&Dst) >> 1);
      if ( v10 >= UnicodeString->MaximumLength )
        return -2147483643;
      SourceString.Length = v10;
      SourceString.Buffer = &Dst;
      SourceString.MaximumLength = v10 + 2;
      RtlCopyUnicodeString(UnicodeString, &SourceString);
      return v6;
    }
  }
  return result;
}
