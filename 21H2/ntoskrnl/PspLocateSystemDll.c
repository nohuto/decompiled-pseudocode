/*
 * XREFs of PspLocateSystemDll @ 0x14084565C
 * Callers:
 *     PsLocateSystemDlls @ 0x1408455C8 (PsLocateSystemDlls.c)
 * Callees:
 *     ZwOpenFile @ 0x14041BDC0 (ZwOpenFile.c)
 *     ZwSystemDebugControl @ 0x14041F080 (ZwSystemDebugControl.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MmGetSectionInformation @ 0x14066C980 (MmGetSectionInformation.c)
 *     MmCreateSpecialImageSection @ 0x14066D4BC (MmCreateSpecialImageSection.c)
 *     ObInitializeFastReference @ 0x14070F2D8 (ObInitializeFastReference.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     PspMapSystemDll @ 0x140756AD4 (PspMapSystemDll.c)
 */

NTSTATUS __fastcall PspLocateSystemDll(_QWORD *a1, char a2)
{
  UNICODE_STRING *v2; // rsi
  NTSTATUS result; // eax
  int SpecialImageSection; // eax
  NTSTATUS v7; // eax
  int SectionInformation; // eax
  PVOID v9; // rdx
  __int64 *v10; // rcx
  int v11; // eax
  __int64 v12; // [rsp+30h] [rbp-29h] BYREF
  UNICODE_STRING v13; // [rsp+38h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-1h] BYREF
  HANDLE FileHandle; // [rsp+C0h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp+77h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+7Fh] BYREF

  v2 = (UNICODE_STRING *)(a1 + 2);
  v12 = 0LL;
  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v13 = 0LL;
  Handle = 0LL;
  if ( (NtGlobalFlag & 0x40000) != 0 )
  {
    v13 = *v2;
    ZwSystemDebugControl(38LL, (__int64)&v13);
  }
  ObjectAttributes.ObjectName = v2;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
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
    v7 = ObReferenceObjectByHandle(Handle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
    if ( v7 < 0 )
      KeBugCheckEx(0x6Bu, v7, 4uLL, 0LL, 0LL);
    ObCloseHandle(Handle, 0);
    SectionInformation = MmGetSectionInformation((__int64)Object, 2, (__int64)&v12);
    if ( SectionInformation < 0 )
      KeBugCheckEx(0x6Bu, SectionInformation, 8uLL, 0LL, 0LL);
    v9 = Object;
    v10 = (__int64 *)*a1;
    a1[7] = v12;
    ObInitializeFastReference(v10, (__int64)v9);
    *(_QWORD *)(*a1 + 8LL) = 0LL;
    v11 = PspMapSystemDll(KeGetCurrentThread()->ApcState.Process, (__int64)a1, 0, 1);
    if ( v11 < 0 )
      KeBugCheckEx(0x6Bu, v11, 5uLL, 0LL, 0LL);
    return 0;
  }
  return result;
}
