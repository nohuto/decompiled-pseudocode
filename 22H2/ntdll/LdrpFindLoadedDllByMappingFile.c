/*
 * XREFs of LdrpFindLoadedDllByMappingFile @ 0x1800755A0
 * Callers:
 *     LdrpFindLoadedDllInternal @ 0x18001DBEC (LdrpFindLoadedDllInternal.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180032AD0 (RtlImageNtHeaderEx.c)
 *     LdrpFindLoadedDllByMapping @ 0x1800757C4 (LdrpFindLoadedDllByMapping.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009D9E0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009DA20 (NtUnmapViewOfSection.c)
 *     NtOpenFile @ 0x18009DB40 (NtOpenFile.c)
 *     NtCreateSection @ 0x18009DE20 (NtCreateSection.c)
 */

__int64 __fastcall LdrpFindLoadedDllByMappingFile(_UNICODE_STRING *a1)
{
  ULONG v1; // eax
  NTSTATUS LoadedDllByMapping; // ebx
  HANDLE SectionHandle; // [rsp+50h] [rbp-19h] BYREF
  HANDLE FileHandle; // [rsp+58h] [rbp-11h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+60h] [rbp-9h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-1h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp+Fh] BYREF
  PVOID BaseAddress; // [rsp+D0h] [rbp+67h] BYREF
  ULONG_PTR ViewSize; // [rsp+E8h] [rbp+7Fh] BYREF

  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  v1 = 64;
  if ( !LdrpUseImpersonatedDeviceMap )
    v1 = 2112;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = v1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  LoadedDllByMapping = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
  if ( LoadedDllByMapping >= 0 )
  {
    LoadedDllByMapping = NtCreateSection(&SectionHandle, 4u, 0LL, 0LL, 2u, 0x8000000u, FileHandle);
    if ( LoadedDllByMapping >= 0 )
    {
      BaseAddress = 0LL;
      ViewSize = 0LL;
      LoadedDllByMapping = ZwMapViewOfSection(
                             SectionHandle,
                             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                             &BaseAddress,
                             0LL,
                             0LL,
                             0LL,
                             &ViewSize,
                             ViewShare,
                             0,
                             2u);
      if ( LoadedDllByMapping >= 0 )
      {
        LoadedDllByMapping = RtlImageNtHeaderEx(0, BaseAddress, ViewSize, &OutHeaders);
        if ( LoadedDllByMapping >= 0 )
          LoadedDllByMapping = LdrpFindLoadedDllByMapping(BaseAddress, OutHeaders);
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
      }
      NtClose(SectionHandle);
    }
    NtClose(FileHandle);
  }
  return (unsigned int)LoadedDllByMapping;
}
