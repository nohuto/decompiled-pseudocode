/*
 * XREFs of EtwpRealtimeSaveState @ 0x14067F474
 * Callers:
 *     EtwpLogger @ 0x1406926A0 (EtwpLogger.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140206540 (EtwpQueryUsedProcessorCount.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwWriteFile @ 0x140412410 (ZwWriteFile.c)
 *     ZwSetInformationFile @ 0x1404127F0 (ZwSetInformationFile.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall EtwpRealtimeSaveState(__int64 a1)
{
  NTSTATUS v2; // edi
  void *v3; // rcx
  int v5; // ecx
  __int128 v6; // xmm0
  __int64 v7; // rax
  int UsedProcessorCount; // eax
  void *v9; // rcx
  char FileInformation[8]; // [rsp+50h] [rbp-29h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+58h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-19h] BYREF
  _OWORD Buffer[5]; // [rsp+70h] [rbp-9h] BYREF

  v2 = -1073741823;
  IoStatusBlock = 0LL;
  memset(Buffer, 0, 0x48uLL);
  ByteOffset.QuadPart = 0LL;
  if ( (*(_DWORD *)(a1 + 816) & 1) == 0 )
    goto LABEL_2;
  if ( !*(_QWORD *)(a1 + 360) )
    goto LABEL_7;
  v5 = *(_DWORD *)(a1 + 424);
  if ( !v5 )
    goto LABEL_7;
  v6 = *(_OWORD *)(a1 + 432);
  *((_QWORD *)&Buffer[2] + 1) = *(_QWORD *)(a1 + 392);
  *(_QWORD *)&Buffer[3] = *(_QWORD *)(a1 + 384);
  DWORD1(Buffer[2]) = *(_DWORD *)(a1 + 4);
  *((_QWORD *)&Buffer[3] + 1) = *(_QWORD *)(a1 + 400);
  v7 = *(_QWORD *)(a1 + 408);
  LODWORD(Buffer[2]) = v5;
  *(_QWORD *)&Buffer[4] = v7;
  Buffer[1] = v6;
  LODWORD(Buffer[0]) = 1933995090;
  DWORD2(Buffer[0]) = 1;
  UsedProcessorCount = EtwpQueryUsedProcessorCount(a1);
  v9 = *(void **)(a1 + 360);
  DWORD1(Buffer[0]) = 0;
  HIDWORD(Buffer[0]) = UsedProcessorCount;
  v2 = ZwWriteFile(v9, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0x48u, &ByteOffset, 0LL);
  if ( v2 < 0 )
  {
LABEL_7:
    *(_DWORD *)(a1 + 260) += *(_DWORD *)(a1 + 424);
    *(_DWORD *)(a1 + 424) = 0;
    *(_QWORD *)(a1 + 408) = 0LL;
LABEL_2:
    v3 = *(void **)(a1 + 360);
    FileInformation[0] = 1;
    ZwSetInformationFile(v3, &IoStatusBlock, FileInformation, 1u, FileDispositionInformation);
  }
  return (unsigned int)v2;
}
