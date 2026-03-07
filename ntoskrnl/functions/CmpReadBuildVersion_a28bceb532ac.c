__int64 __fastcall CmpReadBuildVersion(struct _PRIVILEGE_SET **a1, ULONG *a2, _DWORD *a3)
{
  struct _PRIVILEGE_SET *v6; // rsi
  struct _PRIVILEGE_SET *Pool; // rdi
  NTSTATUS v8; // ebx
  struct _PRIVILEGE_SET *v9; // rax
  ULONG LowPart; // r14d
  ULONG ResultLength; // [rsp+30h] [rbp-49h] BYREF
  ULONG v13; // [rsp+34h] [rbp-45h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-29h] BYREF
  __int128 KeyValueInformation; // [rsp+80h] [rbp+7h] BYREF
  int v18; // [rsp+90h] [rbp+17h]

  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  v13 = 0;
  ResultLength = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  DestinationString = 0LL;
  v18 = 0;
  KeyValueInformation = 0LL;
  v6 = 0LL;
  Pool = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\MACHINE\\SOFTWARE\\MICROSOFT\\WINDOWS NT\\CURRENTVERSION");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v8 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"CurrentBuildNumber");
    v8 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    if ( v8 == -1073741789 )
    {
      Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(256LL, ResultLength, 808996163LL);
      if ( !Pool )
      {
LABEL_4:
        v8 = -1073741670;
        goto LABEL_11;
      }
      v8 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, Pool, ResultLength, &v13);
      if ( v8 >= 0 )
      {
        v9 = (struct _PRIVILEGE_SET *)CmpAllocatePool(256LL, Pool->Privilege[0].Luid.LowPart, 808996163LL);
        v6 = v9;
        if ( !v9 )
          goto LABEL_4;
        memmove(v9, &Pool->Privilege[0].Luid.HighPart, Pool->Privilege[0].Luid.LowPart);
        LowPart = Pool->Privilege[0].Luid.LowPart;
        RtlInitUnicodeString(&DestinationString, L"UBR");
        v8 = ZwQueryValueKey(
               KeyHandle,
               &DestinationString,
               KeyValuePartialInformation,
               &KeyValueInformation,
               0x14u,
               &v13);
        if ( v8 >= 0 )
        {
          if ( *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
          {
            *a3 = HIDWORD(KeyValueInformation);
            *a1 = v6;
            v6 = 0LL;
            *a2 = LowPart;
          }
          else
          {
            v8 = -1073741762;
          }
        }
      }
    }
  }
LABEL_11:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Pool )
    CmSiFreeMemory(Pool);
  if ( v8 < 0 && v6 )
    CmSiFreeMemory(v6);
  return (unsigned int)v8;
}
