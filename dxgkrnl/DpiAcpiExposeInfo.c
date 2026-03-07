__int64 __fastcall DpiAcpiExposeInfo(__int64 a1)
{
  struct _UNICODE_STRING *v1; // rsi
  __int64 result; // rax
  NTSTATUS v3; // ebx
  wchar_t *Buffer; // rax
  CHAR *Pool2; // rax
  wchar_t *v6; // rax
  unsigned int v7; // r14d
  wchar_t *v8; // rdi
  struct _STRING Destination; // [rsp+40h] [rbp-79h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-61h] BYREF
  struct _STRING DestinationString; // [rsp+60h] [rbp-59h] BYREF
  STRING Source; // [rsp+70h] [rbp-49h] BYREF
  _QWORD v14[2]; // [rsp+80h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-29h] BYREF
  _OWORD v16[2]; // [rsp+C0h] [rbp+7h] BYREF
  int v17; // [rsp+E0h] [rbp+27h]
  wchar_t v18; // [rsp+E4h] [rbp+2Bh]

  v1 = *(struct _UNICODE_STRING **)(a1 + 64);
  *(_QWORD *)&Source.Length = 65537LL;
  Source.Buffer = (PCHAR)File;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  result = DpiAcpiPrepareAcpiChildNameList((__int64)v1);
  v3 = result;
  if ( (int)result >= 0 )
  {
    Buffer = v1[206].Buffer;
    if ( *(_DWORD *)Buffer == 1198089537 && *((_DWORD *)Buffer + 1) )
    {
      Destination.MaximumLength = 4096;
      Pool2 = (CHAR *)ExAllocatePool2(256LL, 4096LL, 1953656900LL);
      Destination.Buffer = Pool2;
      if ( Pool2 )
      {
        memset(Pool2, 0, Destination.MaximumLength);
        v6 = v1[206].Buffer;
        v7 = 1;
        v8 = v6 + 4;
        if ( *((_DWORD *)v6 + 1) > 1u )
        {
          do
          {
            v8 = (wchar_t *)((char *)v8 + *((unsigned int *)v8 + 1) + 8);
            if ( (*(_BYTE *)v8 & 1) == 0 )
            {
              DestinationString = 0LL;
              RtlInitAnsiString(&DestinationString, (PCSZ)v8 + 8);
              RtlAppendStringToString(&Destination, &DestinationString);
              RtlAppendStringToString(&Destination, &Source);
            }
            ++v7;
          }
          while ( v7 < *((_DWORD *)v1[206].Buffer + 1) );
        }
        if ( !Destination.Buffer )
          return (unsigned int)v3;
        if ( Destination.Length )
        {
          v17 = *(_DWORD *)L"FO";
          v18 = aDisplayAcpiInf[18];
          v14[0] = 2490404LL;
          v14[1] = v16;
          v16[0] = *(_OWORD *)L"_DISPLAY_ACPI_INFO";
          *(_QWORD *)&DestinationString.Length = 0LL;
          DestinationString.Buffer = 0LL;
          KeyHandle = 0LL;
          v16[1] = *(_OWORD *)L"_ACPI_INFO";
          Handle = 0LL;
          *(_QWORD *)&ObjectAttributes.Length = 48LL;
          *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.ObjectName = v1 + 32;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v3 = ZwOpenKey(&KeyHandle, 0x20006u, &ObjectAttributes);
          if ( v3 >= 0 )
          {
            ObjectAttributes.RootDirectory = KeyHandle;
            ObjectAttributes.ObjectName = (PUNICODE_STRING)v14;
            ObjectAttributes.Length = 48;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            v3 = ZwCreateKey(&Handle, 0x20006u, &ObjectAttributes, 0, 0LL, 1u, 0LL);
            ZwClose(KeyHandle);
            if ( v3 >= 0 )
            {
              v3 = ZwSetValueKey(
                     Handle,
                     (PUNICODE_STRING)&DestinationString,
                     0,
                     3u,
                     Destination.Buffer,
                     Destination.Length);
              ZwClose(Handle);
            }
          }
        }
      }
      else
      {
        v3 = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
      }
    }
    else
    {
      v3 = -1072431089;
    }
    if ( Destination.Buffer )
      ExFreePoolWithTag(Destination.Buffer, 0);
    return (unsigned int)v3;
  }
  return result;
}
