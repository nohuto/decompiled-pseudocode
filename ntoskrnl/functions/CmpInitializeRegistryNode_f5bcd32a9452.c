NTSTATUS __fastcall CmpInitializeRegistryNode(__int64 a1, void *a2, HANDLE *a3, int a4, int a5, __int64 a6)
{
  int *v6; // rbx
  ULONG v10; // esi
  UNICODE_STRING *v11; // rax
  NTSTATUS result; // eax
  __int64 v13; // rax
  unsigned __int16 v14; // dx
  HANDLE v15; // rbx
  NTSTATUS v16; // r14d
  NTSTATUS v17; // ebx
  const void *v18; // rdx
  _DWORD *v19; // rcx
  unsigned int v20; // eax
  size_t v21; // r8
  char *v22; // rcx
  char *Pool2; // rbx
  PUNICODE_STRING Class; // [rsp+20h] [rbp-C1h]
  HANDLE KeyHandle; // [rsp+40h] [rbp-A1h] BYREF
  ULONG Disposition; // [rsp+48h] [rbp-99h] BYREF
  UNICODE_STRING ValueName; // [rsp+50h] [rbp-91h] BYREF
  UNICODE_STRING v28; // [rsp+60h] [rbp-81h] BYREF
  STRING DestinationString; // [rsp+70h] [rbp-71h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-61h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-51h] BYREF
  char SourceString[16]; // [rsp+C0h] [rbp-21h] BYREF
  char v33; // [rsp+D0h] [rbp-11h] BYREF

  v6 = (int *)(a1 + 28);
  v10 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v28 = 0LL;
  KeyHandle = 0LL;
  ValueName = 0LL;
  Disposition = 0;
  UnicodeString = 0LL;
  DestinationString = 0LL;
  if ( !*(_DWORD *)(a1 + 24) )
    *v6 = 0;
  v11 = &CmTypeName + *v6;
  ObjectAttributes.RootDirectory = a2;
  ObjectAttributes.ObjectName = v11;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
  if ( result >= 0 )
  {
    if ( *(_DWORD *)(a1 + 24) )
    {
      v13 = *v6;
      if ( (unsigned int)v13 >= 0x2A )
      {
        v14 = 0;
      }
      else
      {
        v14 = *(_WORD *)(a6 + 2 * v13);
        *(_WORD *)(a6 + 2LL * *v6) = v14 + 1;
      }
      RtlIntegerToChar(v14, 0xAu, 12, SourceString);
      RtlInitAnsiString(&DestinationString, SourceString);
      *(_DWORD *)&v28.Length = 1572864;
      v28.Buffer = (wchar_t *)&v33;
      RtlAnsiStringToUnicodeString(&v28, &DestinationString, 0);
      v15 = KeyHandle;
      ObjectAttributes.ObjectName = &v28;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v16 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
      ZwClose(v15);
      if ( v16 < 0 )
        return v16;
    }
    RtlInitUnicodeString(&ValueName, L"Component Information");
    v17 = ZwSetValueKey(KeyHandle, &ValueName, 0, 3u, (PVOID)(a1 + 32), 0x10u);
    if ( v17 < 0 )
      goto LABEL_23;
    if ( *(_DWORD *)(a1 + 52) )
    {
      RtlInitUnicodeString(&ValueName, L"Identifier");
      RtlInitAnsiString(&DestinationString, *(PCSZ *)(a1 + 56));
      v17 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
      if ( v17 < 0 )
        goto LABEL_23;
      v17 = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, UnicodeString.Buffer, UnicodeString.Length + 2);
      RtlFreeUnicodeString(&UnicodeString);
      if ( v17 < 0 )
        goto LABEL_23;
    }
    RtlInitUnicodeString(&ValueName, L"Configuration Data");
    v18 = *(const void **)(a1 + 64);
    if ( !v18 )
    {
LABEL_13:
      if ( !*(_QWORD *)(a1 + 64) )
      {
        v10 = 16;
        *((_QWORD *)CmpConfigurationData + 1) = 0LL;
      }
      v19 = CmpConfigurationData;
      Class = (PUNICODE_STRING)CmpConfigurationData;
      *(_DWORD *)CmpConfigurationData = a4;
      v19[1] = a5;
      v17 = ZwSetValueKey(KeyHandle, &ValueName, 0, 9u, Class, v10);
      if ( v17 >= 0 )
      {
        *a3 = KeyHandle;
        return 0;
      }
LABEL_23:
      ZwClose(KeyHandle);
      return v17;
    }
    v20 = *(_DWORD *)(a1 + 48);
    v10 = v20 + 8;
    if ( v20 + 8 > CmpConfigurationAreaSize )
    {
      Pool2 = (char *)ExAllocatePool2(256LL, v10, 538987843LL);
      if ( !Pool2 )
      {
        *(_DWORD *)(a1 + 48) = 0;
        *(_QWORD *)(a1 + 64) = 0LL;
        goto LABEL_13;
      }
      CmpConfigurationAreaSize = v10;
      ExFreePoolWithTag(CmpConfigurationData, 0);
      v21 = *(unsigned int *)(a1 + 48);
      v22 = Pool2 + 8;
      v18 = *(const void **)(a1 + 64);
      CmpConfigurationData = Pool2;
    }
    else
    {
      v21 = v20;
      v22 = (char *)CmpConfigurationData + 8;
    }
    memmove(v22, v18, v21);
    goto LABEL_13;
  }
  return result;
}
