NTSTATUS __fastcall PnpOpenFirstMatchingSubKey(
        PCWSTR SourceString,
        void *a2,
        __int64 a3,
        __int64 a4,
        PHANDLE KeyHandle)
{
  const WCHAR *v6; // rbx
  NTSTATUS result; // eax
  __int64 v8; // rcx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF

  v6 = SourceString;
  DestinationString = 0LL;
  if ( !SourceString || !a2 || !KeyHandle )
    return -1073741811;
  *KeyHandle = 0LL;
  result = -1073741772;
  if ( *SourceString )
  {
    do
    {
      RtlInitUnicodeString(&DestinationString, v6);
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      *KeyHandle = 0LL;
      ObjectAttributes.RootDirectory = a2;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      result = ZwOpenKey(KeyHandle, 0x20019u, &ObjectAttributes);
      if ( result >= 0 )
        break;
      *KeyHandle = 0LL;
      v8 = -1LL;
      do
        ++v8;
      while ( v6[v8] );
      v6 += v8 + 1;
    }
    while ( *v6 );
  }
  return result;
}
