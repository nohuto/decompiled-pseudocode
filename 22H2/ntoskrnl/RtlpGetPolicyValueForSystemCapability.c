/*
 * XREFs of RtlpGetPolicyValueForSystemCapability @ 0x1409143A4
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x140913CBC (RtlpCapabilityCheckSystemCapability.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1402D37D0 (ExAllocatePoolWithQuotaTag.c)
 *     RtlAppendUnicodeStringToString @ 0x1403480C0 (RtlAppendUnicodeStringToString.c)
 *     ZwQueryLicenseValue @ 0x1403FC4A0 (ZwQueryLicenseValue.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     RtlFreeAnsiString @ 0x140602CB0 (RtlFreeAnsiString.c)
 *     ExpAllocateStringRoutine @ 0x140685CE0 (ExpAllocateStringRoutine.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpGetPolicyValueForSystemCapability(PCUNICODE_STRING Source, PUNICODE_STRING UnicodeString)
{
  PVOID PoolWithQuotaTag; // r14
  unsigned __int16 v5; // bx
  wchar_t *StringRoutine; // rax
  wchar_t *v7; // r15
  int appended; // ebx
  UNICODE_STRING Destination; // [rsp+30h] [rbp-10h] BYREF
  int v11; // [rsp+90h] [rbp+50h] BYREF

  v11 = 0;
  PoolWithQuotaTag = 0LL;
  Destination = 0LL;
  if ( !Source || !UnicodeString )
  {
    appended = -1073741811;
    goto LABEL_11;
  }
  v5 = Source->Length + 56;
  StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v5);
  v7 = StringRoutine;
  if ( StringRoutine )
  {
    memset(StringRoutine, 0, v5);
    Destination.MaximumLength = v5;
    Destination.Buffer = v7;
    appended = RtlAppendUnicodeStringToString(&Destination, &stru_140009A78);
    if ( appended < 0 )
      goto LABEL_12;
    appended = RtlAppendUnicodeStringToString(&Destination, Source);
    if ( appended < 0 )
      goto LABEL_12;
    appended = ZwQueryLicenseValue((__int64)&Destination, (__int64)&v11);
    if ( appended == -1073741789 )
    {
      PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0LL, 0x62507452u);
      appended = ZwQueryLicenseValue((__int64)&Destination, (__int64)&v11);
      if ( appended >= 0 )
        appended = -1073741823;
      goto LABEL_12;
    }
LABEL_11:
    if ( appended >= 0 )
      goto LABEL_16;
    goto LABEL_12;
  }
  appended = -1073741801;
LABEL_12:
  if ( UnicodeString )
    RtlFreeAnsiString(UnicodeString);
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
LABEL_16:
  RtlFreeAnsiString(&Destination);
  return (unsigned int)appended;
}
