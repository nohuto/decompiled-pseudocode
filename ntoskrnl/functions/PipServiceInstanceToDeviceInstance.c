NTSTATUS __fastcall PipServiceInstanceToDeviceInstance(
        void *a1,
        UNICODE_STRING *a2,
        unsigned int a3,
        UNICODE_STRING *a4)
{
  NTSTATUS result; // eax
  NTSTATUS RegistryValue; // ebx
  _WORD *v8; // rdi
  unsigned int v9; // edx
  _WORD *v10; // rcx
  PVOID P; // [rsp+30h] [rbp-59h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-51h] BYREF
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-39h] BYREF
  wchar_t pszDest[20]; // [rsp+80h] [rbp-9h] BYREF

  P = 0LL;
  KeyHandle = 0LL;
  SourceString = 0LL;
  if ( a1 )
  {
    ObjectAttributes.RootDirectory = a1;
    SourceString.Buffer = L"Enum";
    *(_DWORD *)&SourceString.Length = 655368;
    ObjectAttributes.ObjectName = &SourceString;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  }
  else
  {
    result = PipOpenServiceEnumKeys(a2, 0x20019u, 0LL, &KeyHandle, 0);
  }
  if ( result >= 0 )
  {
    RtlStringCbPrintfW(pszDest, 0x28uLL, L"%u", a3);
    RegistryValue = IopGetRegistryValue(KeyHandle, pszDest, 100, &P);
    ZwClose(KeyHandle);
    if ( RegistryValue >= 0 )
    {
      v8 = P;
      if ( *((_DWORD *)P + 1) == 1 )
      {
        v9 = *((_DWORD *)P + 3);
        v10 = (char *)P + *((unsigned int *)P + 2);
        LODWORD(P) = 0;
        PnpRegSzToString(v10, v9, (int *)&P);
        SourceString.Length = (unsigned __int16)P;
        SourceString.MaximumLength = v8[6];
        SourceString.Buffer = (_WORD *)((char *)v8 + *((unsigned int *)v8 + 2));
        if ( !(_WORD)P )
          RegistryValue = -1073741766;
        if ( RegistryValue >= 0 )
        {
          if ( a4 )
            RegistryValue = PnpConcatenateUnicodeStrings(a4, &SourceString);
        }
      }
      else
      {
        RegistryValue = -1073741215;
      }
      ExFreePoolWithTag(v8, 0);
    }
    return RegistryValue;
  }
  return result;
}
