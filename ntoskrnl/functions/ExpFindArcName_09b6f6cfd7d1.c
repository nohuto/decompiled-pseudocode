__int64 __fastcall ExpFindArcName(const UNICODE_STRING *a1, wchar_t **a2)
{
  BOOLEAN v2; // r12
  wchar_t *Pool2; // rax
  WCHAR *v4; // rbx
  NTSTATUS v6; // edi
  UNICODE_STRING *v7; // rdi
  int DirectoryObject; // eax
  wchar_t *v9; // rax
  wchar_t *v10; // rsi
  unsigned int v11; // ebx
  rsize_t v12; // r13
  NTSTATUS v13; // ebx
  HANDLE DirectoryHandle; // [rsp+48h] [rbp-41h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-39h] BYREF
  UNICODE_STRING String2; // [rsp+60h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-19h] BYREF
  unsigned int v20; // [rsp+100h] [rbp+77h]

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  DirectoryHandle = 0LL;
  v20 = 0;
  String2 = 0LL;
  v2 = 0;
  Pool2 = (wchar_t *)ExAllocatePool2(64LL, 18LL, 1920364101LL);
  v4 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  wcscpy_s(Pool2, 9uLL, L"\\ArcName");
  RtlInitUnicodeString(&DestinationString, v4);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  ExFreePoolWithTag(v4, 0);
  if ( v6 < 0 )
    return (unsigned int)v6;
  v7 = 0LL;
  RtlInitUnicodeString(&String2, L"SymbolicLink");
  while ( 1 )
  {
    DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)v7);
    if ( DirectoryObject == -1073741789 )
    {
      if ( v7 )
        ExFreePoolWithTag(v7, 0);
      v7 = (UNICODE_STRING *)ExAllocatePool2(64LL, v20, 1920364101LL);
      if ( !v7 )
      {
        v13 = -1073741670;
        goto LABEL_28;
      }
      DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)v7);
    }
    if ( DirectoryObject < 0 )
      break;
    if ( RtlEqualUnicodeString(v7 + 1, &String2, 0) )
    {
      v20 = v7->Length + 18;
      v9 = (wchar_t *)ExAllocatePool2(64LL, v20 + 2LL, 1920364101LL);
      v10 = v9;
      if ( !v9 )
      {
        v13 = -1073741670;
        goto LABEL_26;
      }
      v11 = v7->Length >> 1;
      wcscpy_s(v9, ((unsigned __int64)v20 >> 1) + 1, L"\\ArcName\\");
      v12 = v11;
      wcsncat_s(v10, ((unsigned __int64)v20 >> 1) + 1, v7->Buffer, v11);
      v10[(unsigned __int64)v20 >> 1] = 0;
      v13 = ExpTranslateSymbolicLink(v10, &DestinationString);
      if ( v13 < 0 )
      {
        ExFreePoolWithTag(v10, 0);
        goto LABEL_26;
      }
      v2 = RtlEqualUnicodeString(&DestinationString, a1, 1u);
      ExFreePoolWithTag(DestinationString.Buffer, 0);
      if ( v2 == 1 )
      {
        wcsncpy_s(v10, ((unsigned __int64)v20 >> 1) + 1, v7->Buffer, v12);
        v10[v12] = 0;
        *a2 = v10;
        goto LABEL_26;
      }
      ExFreePoolWithTag(v10, 0);
    }
  }
  v13 = 0;
  if ( DirectoryObject != -2147483622 )
    v13 = DirectoryObject;
  if ( v13 >= 0 && !v2 )
    v13 = -1073741766;
LABEL_26:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
LABEL_28:
  ZwClose(DirectoryHandle);
  return (unsigned int)v13;
}
