/*
 * XREFs of RtlpGetPolicyValueForSystemCapability @ 0x140744670
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x1407445E8 (RtlpCapabilityCheckSystemCapability.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1402447D0 (RtlAppendUnicodeStringToString.c)
 *     ZwQueryLicenseValue @ 0x140414ED0 (ZwQueryLicenseValue.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExpAllocateStringRoutine @ 0x140777DB0 (ExpAllocateStringRoutine.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpGetPolicyValueForSystemCapability(PCUNICODE_STRING Source, PUNICODE_STRING UnicodeString)
{
  void *Pool2; // r14
  unsigned __int16 v5; // bx
  wchar_t *StringRoutine; // rax
  wchar_t *v7; // r15
  int appended; // ebx
  int LicenseValue; // eax
  UNICODE_STRING Destination; // [rsp+30h] [rbp-10h] BYREF
  int v12; // [rsp+90h] [rbp+50h] BYREF

  v12 = 0;
  Pool2 = 0LL;
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
    appended = RtlAppendUnicodeStringToString(&Destination, &stru_140001B70);
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
        Pool2 = (void *)ExAllocatePool2(65LL, 0LL, 1649439826LL);
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
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
LABEL_11:
  RtlFreeUnicodeString(&Destination);
  return (unsigned int)appended;
}
