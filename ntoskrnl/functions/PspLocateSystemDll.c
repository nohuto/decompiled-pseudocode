NTSTATUS __fastcall PspLocateSystemDll(UNICODE_STRING *a1, char a2)
{
  NTSTATUS result; // eax
  int SpecialImageSection; // eax
  NTSTATUS v6; // eax
  int SectionInformation; // eax
  PVOID v8; // rdx
  __int64 *v9; // rcx
  int v10; // eax
  wchar_t *v11; // [rsp+30h] [rbp-29h] BYREF
  UNICODE_STRING v12; // [rsp+38h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-1h] BYREF
  HANDLE FileHandle; // [rsp+C0h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp+77h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+7Fh] BYREF

  v11 = 0LL;
  FileHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  IoStatusBlock = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v12 = 0LL;
  Handle = 0LL;
  if ( (NtGlobalFlag & 0x40000) != 0 )
  {
    v12 = a1[1];
    ZwSystemDebugControl(38LL, (__int64)&v12);
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = a1 + 1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenFile(&FileHandle, 0x100020u, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( result >= 0 )
  {
    ObjectAttributes.ObjectName = 0LL;
    SpecialImageSection = MmCreateSpecialImageSection(
                            (__int64 *)&Handle,
                            (int)&ObjectAttributes,
                            0LL,
                            12,
                            (__int64)FileHandle,
                            a2 | 2u);
    if ( SpecialImageSection < 0 )
      KeBugCheckEx(0x6Bu, SpecialImageSection, 3uLL, 0LL, 0LL);
    ObCloseHandle(FileHandle, 0);
    Object = 0LL;
    v6 = ObReferenceObjectByHandle(Handle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
    if ( v6 < 0 )
      KeBugCheckEx(0x6Bu, v6, 4uLL, 0LL, 0LL);
    ObCloseHandle(Handle, 0);
    SectionInformation = MmGetSectionInformation((__int64)Object, 2, (__int64)&v11);
    if ( SectionInformation < 0 )
      KeBugCheckEx(0x6Bu, SectionInformation, 8uLL, 0LL, 0LL);
    v8 = Object;
    v9 = *(__int64 **)&a1->Length;
    a1[3].Buffer = v11;
    ObInitializeFastReference(v9, (__int64)v8);
    *(_QWORD *)(*(_QWORD *)&a1->Length + 8LL) = 0LL;
    v10 = PspMapSystemDll(KeGetCurrentThread()->ApcState.Process, (__int64)a1, 0, 1);
    if ( v10 < 0 )
      KeBugCheckEx(0x6Bu, v10, 5uLL, 0LL, 0LL);
    return 0;
  }
  return result;
}
