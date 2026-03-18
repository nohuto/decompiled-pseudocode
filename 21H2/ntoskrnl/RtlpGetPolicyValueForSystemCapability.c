/*
 * XREFs of RtlpGetPolicyValueForSystemCapability @ 0x140660F7C
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x140660EF4 (RtlpCapabilityCheckSystemCapability.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     ZwQueryLicenseValue @ 0x14041E2C0 (ZwQueryLicenseValue.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExpAllocateStringRoutine @ 0x1406BE560 (ExpAllocateStringRoutine.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpGetPolicyValueForSystemCapability(PCUNICODE_STRING Source, PUNICODE_STRING UnicodeString)
{
  PVOID PoolWithQuotaTag; // rsi
  unsigned __int16 v5; // bx
  wchar_t *StringRoutine; // rax
  wchar_t *v7; // r15
  int appended; // ebx
  int LicenseValue; // eax
  UNICODE_STRING Destination; // [rsp+30h] [rbp-10h] BYREF
  int v12; // [rsp+90h] [rbp+50h] BYREF

  v12 = 0;
  PoolWithQuotaTag = 0LL;
  Destination = 0LL;
  if ( !Source || !UnicodeString )
  {
    appended = -1073741811;
LABEL_8:
    if ( !UnicodeString )
      goto LABEL_11;
    goto LABEL_9;
  }
  v5 = Source->Length + 56;
  StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v5);
  v7 = StringRoutine;
  if ( StringRoutine )
  {
    memset(StringRoutine, 0, v5);
    Destination.MaximumLength = v5;
    Destination.Buffer = v7;
    appended = RtlAppendUnicodeStringToString(&Destination, &stru_1400010A8);
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeStringToString(&Destination, Source);
      if ( appended >= 0 )
      {
        LicenseValue = ZwQueryLicenseValue((__int64)&Destination, (__int64)&v12);
        appended = LicenseValue;
        if ( LicenseValue != -1073741789 )
        {
          if ( LicenseValue >= 0 )
            goto LABEL_11;
          goto LABEL_8;
        }
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0LL, 0x62507452u);
        appended = ZwQueryLicenseValue((__int64)&Destination, (__int64)&v12);
        if ( appended >= 0 )
          appended = -1073741823;
      }
    }
  }
  else
  {
    appended = -1073741801;
  }
LABEL_9:
  RtlFreeUnicodeString(UnicodeString);
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
LABEL_11:
  RtlFreeUnicodeString(&Destination);
  return (unsigned int)appended;
}
