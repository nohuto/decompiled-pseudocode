/*
 * XREFs of RtlInitializeBootStatusDataBlackBox @ 0x14079A978
 * Callers:
 *     PoClearTransitionMarker @ 0x14079A638 (PoClearTransitionMarker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwReadFile @ 0x1403F9AE0 (ZwReadFile.c)
 *     memset @ 0x140413800 (memset.c)
 *     RtlpRecordBootStatusData @ 0x14078A454 (RtlpRecordBootStatusData.c)
 */

NTSTATUS __fastcall RtlInitializeBootStatusDataBlackBox(HANDLE FileHandle)
{
  NTSTATUS result; // eax
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-E8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-E0h] BYREF
  _BYTE Buffer[176]; // [rsp+70h] [rbp-C8h] BYREF

  IoStatusBlock = 0LL;
  memset(Buffer, 0, sizeof(Buffer));
  ByteOffset.QuadPart = 0LL;
  result = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0xB0u, &ByteOffset, 0LL);
  if ( result >= 0 )
  {
    result = RtlpRecordBootStatusData(0, (__int64)Buffer, 0LL, 176LL);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
