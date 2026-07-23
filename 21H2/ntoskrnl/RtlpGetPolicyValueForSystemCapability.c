/*
 * XREFs of RtlpGetPolicyValueForSystemCapability @ 0x1409144B4
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x140913DCC (RtlpCapabilityCheckSystemCapability.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x14026D4E0 (RtlAppendUnicodeStringToString.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14035DD70 (ExAllocatePoolWithQuotaTag.c)
 *     ZwQueryLicenseValue @ 0x1403FD000 (ZwQueryLicenseValue.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExpAllocateStringRoutine @ 0x1406006F0 (ExpAllocateStringRoutine.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpGetPolicyValueForSystemCapability(PCUNICODE_STRING Source, PUNICODE_STRING UnicodeString)
{
  PVOID PoolWithQuotaTag; // r14
  unsigned __int16 v5; // bx
  wchar_t *StringRoutine; // rax
  wchar_t *v7; // r15
  NTSTATUS appended; // ebx
  ULONG v9; // esi
  ULONG v10; // r15d
  wchar_t *v11; // rax
  wchar_t *v12; // rsi
  __int64 v13; // rdx
  wchar_t *v14; // rax
  unsigned __int16 v15; // cx
  UNICODE_STRING Destination; // [rsp+30h] [rbp-10h] BYREF
  ULONG DataSize; // [rsp+80h] [rbp+40h] BYREF
  ULONG Type; // [rsp+90h] [rbp+50h] BYREF

  DataSize = 0;
  Type = 0;
  PoolWithQuotaTag = 0LL;
  Destination = 0LL;
  if ( !Source || !UnicodeString )
  {
    appended = -1073741811;
    goto LABEL_20;
  }
  v5 = Source->Length + 56;
  StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v5);
  v7 = StringRoutine;
  if ( !StringRoutine )
  {
LABEL_4:
    appended = -1073741801;
    goto LABEL_21;
  }
  memset(StringRoutine, 0, v5);
  Destination.MaximumLength = v5;
  Destination.Buffer = v7;
  appended = RtlAppendUnicodeStringToString(&Destination, &stru_140009A68);
  if ( appended < 0 )
    goto LABEL_21;
  appended = RtlAppendUnicodeStringToString(&Destination, Source);
  if ( appended < 0 )
    goto LABEL_21;
  appended = ZwQueryLicenseValue(&Destination, &Type, 0LL, 0, &DataSize);
  if ( appended != -1073741789 )
  {
LABEL_20:
    if ( appended >= 0 )
      goto LABEL_25;
    goto LABEL_21;
  }
  v9 = DataSize;
  v10 = DataSize;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, DataSize, 0x62507452u);
  appended = ZwQueryLicenseValue(&Destination, &Type, PoolWithQuotaTag, v9, &DataSize);
  if ( appended < 0 )
    goto LABEL_21;
  if ( Type != 1 || !v9 || (v9 & 1) != 0 )
  {
    appended = -1073741823;
    goto LABEL_21;
  }
  v11 = (wchar_t *)ExpAllocateStringRoutine(v9);
  v12 = v11;
  if ( !v11 )
    goto LABEL_4;
  memmove(v11, PoolWithQuotaTag, v10);
  *UnicodeString = 0LL;
  v13 = 0x7FFFLL;
  v14 = v12;
  do
  {
    if ( !*v14 )
      break;
    ++v14;
    --v13;
  }
  while ( v13 );
  appended = v13 == 0 ? 0xC000000D : 0;
  if ( !v13 )
  {
LABEL_21:
    if ( UnicodeString )
      RtlFreeAnsiString(UnicodeString);
    goto LABEL_23;
  }
  v15 = 2 * (v13 != 0 ? 0x7FFF - v13 : 0);
  UnicodeString->Buffer = v12;
  UnicodeString->Length = v15;
  UnicodeString->MaximumLength = v15 + 2;
  appended = 0;
LABEL_23:
  if ( PoolWithQuotaTag )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
LABEL_25:
  RtlFreeAnsiString(&Destination);
  return (unsigned int)appended;
}
