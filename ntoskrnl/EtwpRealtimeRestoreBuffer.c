/*
 * XREFs of EtwpRealtimeRestoreBuffer @ 0x14083F64C
 * Callers:
 *     EtwpRealtimeFlushSavedBuffers @ 0x1406917BC (EtwpRealtimeFlushSavedBuffers.c)
 * Callees:
 *     ZwReadFile @ 0x1404123D0 (ZwReadFile.c)
 */

NTSTATUS __fastcall EtwpRealtimeRestoreBuffer(__int64 a1, _DWORD *Buffer)
{
  LARGE_INTEGER *ByteOffset; // rbx
  __int64 QuadPart; // rdi
  NTSTATUS result; // eax
  NTSTATUS Status; // ecx
  unsigned int v8; // edx
  unsigned int v9; // eax
  __int64 Length; // rdx
  __int64 v11; // r14
  LARGE_INTEGER v12; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-28h] BYREF

  ByteOffset = (LARGE_INTEGER *)(a1 + 392);
  QuadPart = *(_QWORD *)(a1 + 392) + 72LL;
  IoStatusBlock = 0LL;
  if ( QuadPart > *(_QWORD *)(a1 + 400) )
    return -1073741566;
  result = ZwReadFile(*(HANDLE *)(a1 + 360), 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0x48u, ByteOffset, 0LL);
  Status = result;
  if ( result < 0 )
    return result;
  result = IoStatusBlock.Status;
  if ( IoStatusBlock.Status < 0 )
    return result;
  if ( IoStatusBlock.Information != 72 )
    return -1073741807;
  v8 = *(_DWORD *)(a1 + 4);
  if ( *Buffer != v8 )
    return -1073741566;
  v9 = Buffer[12];
  if ( v9 < 0x48 || v9 > v8 )
    return -1073741566;
  *((_WORD *)Buffer + 26) |= 0x10u;
  Length = v9 - 72;
  ByteOffset->QuadPart = QuadPart;
  if ( v9 != 72 )
  {
    v11 = (unsigned int)Length;
    if ( Length + QuadPart <= *(_QWORD *)(a1 + 400) )
    {
      Status = ZwReadFile(*(HANDLE *)(a1 + 360), 0LL, 0LL, 0LL, &IoStatusBlock, Buffer + 18, Length, ByteOffset, 0LL);
      if ( Status >= 0 )
      {
        Status = IoStatusBlock.Status;
        if ( IoStatusBlock.Status >= 0 && IoStatusBlock.Information != v11 )
          Status = -1073741807;
      }
      ByteOffset->QuadPart += v11;
      QuadPart = ByteOffset->QuadPart;
      goto LABEL_15;
    }
    return -1073741566;
  }
LABEL_15:
  v12 = *ByteOffset;
  if ( QuadPart >= *(_QWORD *)(a1 + 400) )
    v12.QuadPart = 72LL;
  *ByteOffset = v12;
  return Status;
}
