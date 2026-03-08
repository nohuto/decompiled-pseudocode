/*
 * XREFs of NtGetNlsSectionPtr @ 0x14069E7D0
 * Callers:
 *     RtlpInitCodePageTables @ 0x14080EA38 (RtlpInitCodePageTables.c)
 *     RtlpInitUppercaseTables @ 0x14080F214 (RtlpInitUppercaseTables.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenFile @ 0x140412970 (ZwOpenFile.c)
 *     ZwOpenSection @ 0x1404129F0 (ZwOpenSection.c)
 *     ZwCreateSection @ 0x140412C50 (ZwCreateSection.c)
 *     RtlpInitNlsSectionName @ 0x14069EBAC (RtlpInitNlsSectionName.c)
 *     MmMapViewOfSection @ 0x14069EC70 (MmMapViewOfSection.c)
 *     MiMapViewInSystemSpace @ 0x1406A55B8 (MiMapViewInSystemSpace.c)
 *     RtlpInitNlsFileName @ 0x14077F74C (RtlpInitNlsFileName.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall NtGetNlsSectionPtr(unsigned int a1, unsigned int a2, PVOID *a3, _QWORD *a4, _QWORD *a5)
{
  char PreviousMode; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  NTSTATUS result; // eax
  NTSTATUS v14; // ebx
  NTSTATUS v15; // eax
  PVOID Object; // [rsp+58h] [rbp-220h] BYREF
  HANDLE SectionHandle; // [rsp+60h] [rbp-218h] BYREF
  HANDLE FileHandle; // [rsp+68h] [rbp-210h] BYREF
  __int64 v19; // [rsp+70h] [rbp-208h] BYREF
  __int64 v20; // [rsp+78h] [rbp-200h] BYREF
  __int64 v21; // [rsp+80h] [rbp-1F8h] BYREF
  __int64 v22; // [rsp+88h] [rbp-1F0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-1E0h] BYREF
  __int128 v24; // [rsp+C8h] [rbp-1B0h] BYREF
  __int128 v25; // [rsp+D8h] [rbp-1A0h] BYREF
  OBJECT_ATTRIBUTES v26; // [rsp+E8h] [rbp-190h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+118h] [rbp-160h] BYREF
  _BYTE v28[128]; // [rsp+130h] [rbp-148h] BYREF
  _BYTE v29[128]; // [rsp+1B0h] [rbp-C8h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v24 = 0LL;
  FileHandle = 0LL;
  SectionHandle = 0LL;
  IoStatusBlock = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  if ( !a4 && !a3 )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( a4 )
    {
      v11 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
        v11 = (__int64)a4;
      *(_QWORD *)v11 = *(_QWORD *)v11;
    }
    if ( a5 )
    {
      v12 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v12 = (__int64)a5;
      *(_QWORD *)v12 = *(_QWORD *)v12;
    }
    if ( a3 )
    {
      if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
        v10 = (__int64)a3;
      *(_QWORD *)v10 = *(_QWORD *)v10;
    }
    if ( a3 )
      return -1073741583;
  }
  result = RtlpInitNlsSectionName(a1, a2, v28);
  if ( result >= 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 720;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v24;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ((a1 - 11) & 0xFFFFFFFC) != 0 || a1 == 13 )
    {
      v14 = -1073741823;
    }
    else
    {
      v14 = ZwOpenSection(&SectionHandle, 4u, &ObjectAttributes);
      if ( v14 < 0 )
      {
        *(&v26.Length + 1) = 0;
        *(&v26.Attributes + 1) = 0;
        v25 = 0LL;
        result = RtlpInitNlsFileName(a1, a2, v29);
        if ( result < 0 )
          return result;
        v26.Length = 48;
        v26.RootDirectory = 0LL;
        v26.Attributes = 576;
        v26.ObjectName = (PUNICODE_STRING)&v25;
        *(_OWORD *)&v26.SecurityDescriptor = 0LL;
        result = ZwOpenFile(&FileHandle, 0x100000u, &v26, &IoStatusBlock, 1u, 0);
        if ( result < 0 )
          return result;
        v14 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
        ZwClose(FileHandle);
      }
    }
    if ( v14 >= 0 )
    {
      Object = 0LL;
      v14 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
      ZwClose(SectionHandle);
      if ( v14 >= 0 )
      {
        if ( a4 )
        {
          v21 = 0LL;
          if ( PreviousMode )
          {
            v15 = MmMapViewOfSection(
                    Object,
                    KeGetCurrentThread()->ApcState.Process,
                    &v19,
                    0LL,
                    0LL,
                    &v21,
                    &v20,
                    1,
                    0x400000,
                    2);
          }
          else
          {
            v22 = 0LL;
            v15 = MiMapViewInSystemSpace(
                    (_DWORD)Object,
                    (unsigned int)&v19,
                    (unsigned int)&v20,
                    (unsigned int)&v22,
                    0LL,
                    0LL);
          }
          v14 = v15;
        }
        if ( !a3 )
          ObfDereferenceObject(Object);
        if ( v14 >= 0 )
        {
          if ( a4 )
            *a4 = v19;
          if ( a5 )
            *a5 = v20;
          if ( a3 )
            *a3 = Object;
        }
      }
    }
    return v14;
  }
  return result;
}
