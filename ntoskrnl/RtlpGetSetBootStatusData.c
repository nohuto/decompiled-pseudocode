/*
 * XREFs of RtlpGetSetBootStatusData @ 0x14073D77C
 * Callers:
 *     RtlGetSetBootStatusData @ 0x14073D600 (RtlGetSetBootStatusData.c)
 * Callees:
 *     ZwReadFile @ 0x1404123D0 (ZwReadFile.c)
 *     ZwWriteFile @ 0x140412410 (ZwWriteFile.c)
 *     ZwFlushBuffersFile @ 0x140412C70 (ZwFlushBuffersFile.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     RtlBootStatusItemInfo @ 0x14073D958 (RtlBootStatusItemInfo.c)
 *     RtlpRecordBootStatusData @ 0x14073D990 (RtlpRecordBootStatusData.c)
 */

NTSTATUS __fastcall RtlpGetSetBootStatusData(
        HANDLE FileHandle,
        char a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        _DWORD *a6)
{
  NTSTATUS result; // eax
  NTSTATUS v11; // ebx
  __int64 Length; // r14
  int Information; // edi
  __int64 v14; // rcx
  size_t Size; // [rsp+50h] [rbp-30h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+58h] [rbp-28h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-20h] BYREF
  struct _IO_STATUS_BLOCK v18; // [rsp+70h] [rbp-10h] BYREF

  Size = 0LL;
  ByteOffset.QuadPart = 0LL;
  IoStatusBlock = 0LL;
  v18 = 0LL;
  result = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, (char *)&Size + 4, 4u, &ByteOffset, 0LL);
  if ( result >= 0 )
  {
    result = RtlBootStatusItemInfo(a3, &ByteOffset, &Size);
    v11 = result;
    if ( result >= 0 )
    {
      ByteOffset.HighPart = 0;
      Length = (unsigned int)Size;
      Information = Size;
      if ( (unsigned int)Size + (unsigned __int64)ByteOffset.LowPart > HIDWORD(Size) )
        return -1073741735;
      if ( a5 < (unsigned int)Size )
        return -1073741789;
      if ( a2 )
      {
        if ( BootStatFileHandleAcquired && BootStatFileHandle == FileHandle && BootStatDataCache )
        {
          IoStatusBlock.Information = (unsigned int)Size;
          memmove(a4, (char *)BootStatDataCache + ByteOffset.LowPart, (unsigned int)Size);
          goto LABEL_20;
        }
        v11 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, a4, Size, &ByteOffset, 0LL);
      }
      else
      {
        if ( BootStatFileHandleAcquired && BootStatFileHandle == FileHandle && BootStatDataCache )
          memmove((char *)BootStatDataCache + ByteOffset.LowPart, a4, (unsigned int)Size);
        v11 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, a4, Length, &ByteOffset, 0LL);
        if ( v11 >= 0 && !BootStatDisableFlush )
          v11 = ZwFlushBuffersFile(FileHandle, &v18);
        LOBYTE(v14) = 1;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))RtlpRecordBootStatusData)(
          v14,
          a4,
          (LARGE_INTEGER)ByteOffset.QuadPart,
          Length);
      }
      if ( v11 < 0 )
        return v11;
      Information = IoStatusBlock.Information;
LABEL_20:
      if ( a6 )
        *a6 = Information;
      return v11;
    }
  }
  return result;
}
