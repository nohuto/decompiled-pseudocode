/*
 * XREFs of ExpWnfGetPermanentPerUserDataStoreHandle @ 0x14095CD7C
 * Callers:
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x1407C9A88 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14032EAB0 (RtlAppendUnicodeToString.c)
 *     ZwCreateKey @ 0x1403F9DC0 (ZwCreateKey.c)
 *     RtlConvertSidToUnicodeString @ 0x1406ED390 (RtlConvertSidToUnicodeString.c)
 *     RtlLengthSidAsUnicodeString @ 0x1406EFBC8 (RtlLengthSidAsUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall ExpWnfGetPermanentPerUserDataStoreHandle(PSID Sid, PHANDLE KeyHandle)
{
  NTSTATUS result; // eax
  unsigned __int16 v5; // si
  unsigned __int16 v6; // r14
  wchar_t *PoolWithTag; // rax
  wchar_t *v8; // rbx
  NTSTATUS v9; // edi
  UNICODE_STRING Destination; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  ULONG StringLength; // [rsp+D0h] [rbp+77h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_DWORD *)(&UnicodeString.MaximumLength + 1) = 0;
  StringLength = 0;
  result = RtlLengthSidAsUnicodeString(Sid, &StringLength);
  if ( result >= 0 )
  {
    v5 = StringLength;
    v6 = StringLength + 82;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, StringLength + 82, 0x20666E57u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_QWORD *)&Destination.Length = 0LL;
      Destination.MaximumLength = v6;
      Destination.Buffer = PoolWithTag;
      RtlAppendUnicodeToString(&Destination, L"\\Registry\\User\\");
      UnicodeString.Length = 0;
      UnicodeString.MaximumLength = v5;
      UnicodeString.Buffer = &Destination.Buffer[(unsigned __int64)Destination.Length >> 1];
      v9 = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 0);
      if ( v9 >= 0 )
      {
        Destination.Length += UnicodeString.Length;
        RtlAppendUnicodeToString(&Destination, L"_Classes\\NotificationData");
        ObjectAttributes.ObjectName = &Destination;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v9 = ZwCreateKey(KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
      }
      ExFreePoolWithTag(v8, 0x20666E57u);
      return v9;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
