/*
 * XREFs of IopIsNotNativeDriverImage @ 0x1409420DC
 * Callers:
 *     IopCheckIfNotNativeDriver @ 0x140941674 (IopCheckIfNotNativeDriver.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x14030DF10 (KeStackAttachProcess.c)
 *     RtlImageNtHeader @ 0x14035E820 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x140412810 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x140412850 (ZwUnmapViewOfSection.c)
 *     ZwOpenFile @ 0x140412970 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x140412C50 (ZwCreateSection.c)
 */

bool __fastcall IopIsNotNativeDriverImage(UNICODE_STRING *a1)
{
  bool v1; // bl
  __int64 v3; // rax
  HANDLE FileHandle; // [rsp+58h] [rbp-A0h] BYREF
  HANDLE SectionHandle; // [rsp+60h] [rbp-98h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-88h] BYREF
  ULONG_PTR ViewSize; // [rsp+A0h] [rbp-58h] BYREF
  struct _IO_STATUS_BLOCK v9; // [rsp+A8h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+B8h] [rbp-40h] BYREF

  v1 = 0;
  FileHandle = 0LL;
  v9 = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  SectionHandle = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenFile(&FileHandle, 0x20u, &ObjectAttributes, &v9, 5u, 0) < 0 )
    return 0;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateSection(&SectionHandle, 8u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle) < 0 )
  {
LABEL_4:
    ZwClose(FileHandle);
    return 0;
  }
  BaseAddress = 0LL;
  ViewSize = 0LL;
  KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
  if ( ZwMapViewOfSection(
         SectionHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         0LL,
         0LL,
         &ViewSize,
         ViewShare,
         0,
         2u) < 0 )
  {
    KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
    ZwClose(SectionHandle);
    goto LABEL_4;
  }
  v3 = RtlImageNtHeader((__int64)BaseAddress);
  if ( v3 )
    v1 = *(_WORD *)(v3 + 4) != 0x8664;
  ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
  ZwClose(SectionHandle);
  ZwClose(FileHandle);
  return v1;
}
