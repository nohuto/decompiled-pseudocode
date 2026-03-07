__int64 __fastcall TelemetryData_pWriteDumpFile(__int64 a1)
{
  int v2; // edi
  int v3; // eax
  __int128 v4; // xmm0
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-10h] BYREF
  HANDLE FileHandle; // [rsp+78h] [rbp+18h] BYREF

  IoStatusBlock = 0LL;
  FileHandle = 0LL;
  v2 = TelemetryData_pCreateDumpFile(a1, &FileHandle);
  if ( v2 >= 0 )
  {
    v3 = *(_DWORD *)(a1 + 24);
    if ( v3 && *(_QWORD *)(a1 + 16) )
    {
      *(_QWORD *)(*(_QWORD *)a1 + 4000LL) = (unsigned int)(v3 + 262192);
      *(_DWORD *)(a1 + 44) = 1886221636;
      *(_DWORD *)(a1 + 48) = 1651469378;
      *(_DWORD *)(a1 + 52) = 16;
      *(_DWORD *)(a1 + 56) = NtBuildNumber;
      *(_DWORD *)(a1 + 60) = 32;
      v4 = *(_OWORD *)(a1 + 28);
      *(_QWORD *)(a1 + 84) = 0LL;
      *(_OWORD *)(a1 + 64) = v4;
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 24);
    }
    v2 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, *(PVOID *)a1, *(_DWORD *)(a1 + 8), 0LL, 0LL);
    if ( v2 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 24) )
      {
        v2 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, (PVOID)(a1 + 44), 0x10u, 0LL, 0LL);
        if ( v2 >= 0 )
        {
          v2 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, (PVOID)(a1 + 60), 0x20u, 0LL, 0LL);
          if ( v2 >= 0 )
            v2 = ZwWriteFile(
                   FileHandle,
                   0LL,
                   0LL,
                   0LL,
                   &IoStatusBlock,
                   *(PVOID *)(a1 + 16),
                   *(_DWORD *)(a1 + 24),
                   0LL,
                   0LL);
        }
      }
    }
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v2;
}
