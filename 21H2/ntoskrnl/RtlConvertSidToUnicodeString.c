/*
 * XREFs of RtlConvertSidToUnicodeString @ 0x140669DD0
 * Callers:
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x140642A44 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     CmpGetVirtualizationID @ 0x140669CBC (CmpGetVirtualizationID.c)
 *     RtlFormatCurrentUserKeyPath @ 0x14066B5D0 (RtlFormatCurrentUserKeyPath.c)
 *     SepValidateReferencedCachedHandles @ 0x140696944 (SepValidateReferencedCachedHandles.c)
 *     PiDqOpenUserObjectRegKey @ 0x1406998CC (PiDqOpenUserObjectRegKey.c)
 *     LocalConvertSidToStringSidW @ 0x1406C85A0 (LocalConvertSidToStringSidW.c)
 *     PspReadUserQuotaLimits @ 0x1406C89B8 (PspReadUserQuotaLimits.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409B9B50 (RtlpGetTokenNamedObjectPath.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x140A084FC (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     AdtpBuildSidListString @ 0x140A1B9F0 (AdtpBuildSidListString.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140A2CF6C (_SysCtxRegOpenCurrentUserKey.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1402A76A0 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcscat_s @ 0x1403E7610 (wcscat_s.c)
 *     wcscpy_s @ 0x1403E76C0 (wcscpy_s.c)
 *     RtlIntegerToUnicode @ 0x140669FB0 (RtlIntegerToUnicode.c)
 *     RtlCreateUnicodeString @ 0x14066A0F0 (RtlCreateUnicodeString.c)
 *     RtlValidSid @ 0x1407B4660 (RtlValidSid.c)
 *     RtlLargeIntegerToUnicode @ 0x1409BA478 (RtlLargeIntegerToUnicode.c)
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
