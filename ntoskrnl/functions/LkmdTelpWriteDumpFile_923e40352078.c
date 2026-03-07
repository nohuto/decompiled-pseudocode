__int64 __fastcall LkmdTelpWriteDumpFile(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  NTSTATUS v4; // edi
  int v5; // eax
  __int128 v6; // xmm0
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-10h] BYREF
  HANDLE FileHandle; // [rsp+70h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 96);
  IoStatusBlock = 0LL;
  FileHandle = 0LL;
  v3 = WerLiveKernelOpenDumpFile(v2, &FileHandle);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = *(_DWORD *)(a1 + 24);
    if ( v5 && *(_QWORD *)(a1 + 16) )
    {
      *(_QWORD *)(*(_QWORD *)a1 + 4000LL) = (unsigned int)(v5 + 262192);
      *(_DWORD *)(a1 + 44) = 1886221636;
      *(_DWORD *)(a1 + 48) = 1651469378;
      *(_DWORD *)(a1 + 52) = 16;
      *(_DWORD *)(a1 + 56) = NtBuildNumber;
      *(_DWORD *)(a1 + 60) = 32;
      v6 = *(_OWORD *)(a1 + 28);
      *(_QWORD *)(a1 + 84) = 0LL;
      *(_OWORD *)(a1 + 64) = v6;
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 24);
    }
    v4 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, *(PVOID *)a1, *(_DWORD *)(a1 + 8), 0LL, 0LL);
    if ( v4 >= 0 )
    {
      if ( *(_DWORD *)(a1 + 24) )
      {
        v4 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, (PVOID)(a1 + 44), 0x10u, 0LL, 0LL);
        if ( v4 >= 0 )
        {
          v4 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, (PVOID)(a1 + 60), 0x20u, 0LL, 0LL);
          if ( v4 >= 0 )
            v4 = ZwWriteFile(
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
  else
  {
    DbgPrintEx(5u, 0, "LKMDTEL: LkmdTelpWriteDumpFile: WerLiveKernelOpenDumpFile failed, status 0x%X\n", v3);
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v4;
}
