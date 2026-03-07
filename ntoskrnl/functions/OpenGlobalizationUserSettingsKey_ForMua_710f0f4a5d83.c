__int64 __fastcall OpenGlobalizationUserSettingsKey_ForMua(__int64 a1, __int64 a2, HANDLE *a3, _DWORD *a4)
{
  int v6; // r15d
  void *Pool2; // r14
  __int64 v8; // rcx
  NTSTATUS InformationToken; // ebx
  _DWORD *v10; // rax
  unsigned __int16 v11; // bx
  wchar_t *v12; // rax
  wchar_t *v13; // rdi
  ULONG ReturnLength[2]; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING Destination; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  WCHAR Source[264]; // [rsp+A0h] [rbp-60h] BYREF

  UnicodeString = 0LL;
  v6 = 0;
  memset(&ObjectAttributes, 0, 44);
  Pool2 = (void *)ExAllocatePool2(256LL, 84LL, 5131347LL);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  ReturnLength[0] = 0;
  InformationToken = ZwQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, TokenUser, Pool2, 0x54u, ReturnLength);
  if ( InformationToken >= 0 )
  {
    v10 = *(_DWORD **)Pool2;
    LOBYTE(v8) = *(_BYTE *)(*(_QWORD *)Pool2 + 1LL);
    if ( (unsigned __int8)v8 < 2u || (_BYTE)v8 == 5 && v10[2] == 21 && v10[6] == 503 )
    {
      *a4 = 0;
LABEL_21:
      InformationToken = OpenGlobalizationUserSettingsKey_ForSingleUserModel(v8, a3);
      goto LABEL_22;
    }
    InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, v10, 1u);
    if ( InformationToken >= 0 )
    {
      ReturnLength[0] = 0;
      InformationToken = RtlGetPersistedStateLocation(L"GlobalizationUserSettings", Source, 520, (__int64)ReturnLength);
      if ( InformationToken >= 0 )
      {
        v11 = LOWORD(ReturnLength[0]) + UnicodeString.Length + 4;
        v12 = (wchar_t *)ExAllocatePool2(256LL, v11, 5131347LL);
        v13 = v12;
        if ( v12 )
        {
          *(_QWORD *)&Destination.Length = 0LL;
          Destination.MaximumLength = v11;
          Destination.Buffer = v12;
          InformationToken = RtlAppendUnicodeToString(&Destination, Source);
          if ( InformationToken >= 0 )
          {
            InformationToken = RtlAppendUnicodeToString(&Destination, L"\\");
            if ( InformationToken >= 0 )
            {
              InformationToken = RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
              if ( InformationToken >= 0 )
              {
                ObjectAttributes.RootDirectory = 0LL;
                *(_QWORD *)ReturnLength = 0LL;
                ObjectAttributes.ObjectName = &Destination;
                ObjectAttributes.Length = 48;
                ObjectAttributes.Attributes = 576;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                if ( ZwOpenKey((PHANDLE)ReturnLength, 0x20019u, &ObjectAttributes) < 0 )
                {
                  *a4 = 1;
                  v6 = 1;
                }
                else
                {
                  ZwClose(*(HANDLE *)ReturnLength);
                  *a4 = 2;
                  InformationToken = ZwOpenKey(a3, 8u, &ObjectAttributes);
                }
              }
            }
          }
          ExFreePoolWithTag(v13, 0x4E4C53u);
        }
        else
        {
          InformationToken = -1073741801;
        }
      }
      RtlFreeUnicodeString(&UnicodeString);
    }
  }
  if ( v6 )
    goto LABEL_21;
LABEL_22:
  ExFreePoolWithTag(Pool2, 0x4E4C53u);
  return (unsigned int)InformationToken;
}
