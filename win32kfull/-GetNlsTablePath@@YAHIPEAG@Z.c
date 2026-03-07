__int64 __fastcall GetNlsTablePath(unsigned int a1, char *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdi
  __int64 v6; // r9
  unsigned __int16 *v7; // rdx
  unsigned __int16 v8; // ax
  unsigned __int16 *v9; // rax
  ULONG Length; // [rsp+30h] [rbp-39h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-31h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-19h] BYREF
  wchar_t Dst[20]; // [rsp+80h] [rbp+17h] BYREF

  v2 = 0;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Nls\\CodePage");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0 )
  {
    Length = 544;
    v5 = Win32AllocPoolZInit(544LL, 1936485959LL);
    if ( v5 )
    {
      swprintf_s(Dst, 0x14uLL, L"%d", a1);
      RtlInitUnicodeString(&DestinationString, Dst);
      if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, (PVOID)v5, Length, &Length) >= 0 )
      {
        v6 = 260LL;
        v7 = (unsigned __int16 *)a2;
        do
        {
          if ( v6 == -2147483386 )
            break;
          v8 = *(unsigned __int16 *)((char *)v7 + (char *)L"\\SystemRoot\\System32\\" - a2);
          if ( !v8 )
            break;
          *v7++ = v8;
          --v6;
        }
        while ( v6 );
        v9 = v7 - 1;
        if ( v6 )
          v9 = v7;
        *v9 = 0;
        if ( v6 )
          LOBYTE(v2) = StringCchCatW((unsigned __int16 *)a2, (__int64)v7, (size_t *)(v5 + 12)) >= 0;
      }
      Win32FreePool((void *)v5);
    }
    ZwClose(KeyHandle);
  }
  return v2;
}
