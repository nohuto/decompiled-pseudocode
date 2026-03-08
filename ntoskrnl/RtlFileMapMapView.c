/*
 * XREFs of RtlFileMapMapView @ 0x1403ABF40
 * Callers:
 *     AslpFileGetVersionBlock @ 0x1407A0528 (AslpFileGetVersionBlock.c)
 *     AslFileMappingEnsure @ 0x1407A12F0 (AslFileMappingEnsure.c)
 *     AslFileMappingEnsureMappedAs @ 0x140A51A4C (AslFileMappingEnsureMappedAs.c)
 *     AslpFileGetChecksumAttributes @ 0x140A55198 (AslpFileGetChecksumAttributes.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x140412530 (ZwQueryInformationFile.c)
 *     ZwMapViewOfSection @ 0x140412810 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x140412850 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x140412C50 (ZwCreateSection.c)
 *     MmSecureVirtualMemory @ 0x140769000 (MmSecureVirtualMemory.c)
 */

__int64 __fastcall RtlFileMapMapView(__int64 a1, char a2)
{
  NTSTATUS v4; // ebx
  HANDLE v5; // rcx
  HANDLE FileHandle; // [rsp+38h] [rbp-49h]
  HANDLE SectionHandle; // [rsp+58h] [rbp-29h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-21h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-11h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp+1Fh] BYREF
  __int128 FileInformation; // [rsp+B0h] [rbp+2Fh] BYREF
  __int64 v14; // [rsp+C0h] [rbp+3Fh]

  SectionHandle = 0LL;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v14 = 0LL;
  IoStatusBlock = 0LL;
  FileInformation = 0LL;
  if ( *(_QWORD *)(a1 + 24) )
    return (unsigned int)-1073741554;
  v4 = ZwQueryInformationFile(*(HANDLE *)a1, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
  if ( v4 >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    FileHandle = *(HANDLE *)a1;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwCreateSection(
           &SectionHandle,
           0xF0005u,
           &ObjectAttributes,
           0LL,
           2u,
           a2 != 0 ? 285212672 : 0x8000000,
           FileHandle);
    if ( v4 >= 0 )
    {
      v4 = ZwMapViewOfSection(
             SectionHandle,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &BaseAddress,
             0LL,
             0LL,
             0LL,
             &ViewSize,
             ViewUnmap,
             0x500000u,
             2u);
      if ( v4 >= 0 )
      {
        v5 = MmSecureVirtualMemory(BaseAddress, ViewSize, 2u);
        if ( v5 )
        {
          v4 = 0;
          *(_QWORD *)(a1 + 8) = SectionHandle;
          *(_QWORD *)(a1 + 24) = BaseAddress;
          *(_QWORD *)(a1 + 32) = ViewSize;
          *(_QWORD *)(a1 + 16) = *((_QWORD *)&FileInformation + 1);
          *(_WORD *)(a1 + 49) = 257;
          *(_BYTE *)(a1 + 51) = a2;
          *(_QWORD *)(a1 + 40) = v5;
          return (unsigned int)v4;
        }
        v4 = -1073741823;
      }
    }
  }
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  return (unsigned int)v4;
}
