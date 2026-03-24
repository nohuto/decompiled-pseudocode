/*
 * XREFs of EtwpFinalizeHeader @ 0x140713010
 * Callers:
 *     EtwpLogger @ 0x1406BE4D0 (EtwpLogger.c)
 *     EtwpCreateLogFile @ 0x14071334C (EtwpCreateLogFile.c)
 *     EtwpBufferingModeFlush @ 0x14093D1D8 (EtwpBufferingModeFlush.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14032EE60 (EtwpQueryUsedProcessorCount.c)
 *     KeQuerySystemTimePrecise @ 0x140341F10 (KeQuerySystemTimePrecise.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwReadFile @ 0x1403F9AE0 (ZwReadFile.c)
 *     ZwWriteFile @ 0x1403F9B20 (ZwWriteFile.c)
 *     ZwSetInformationFile @ 0x1403F9F00 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1403FA340 (ZwQueryVolumeInformationFile.c)
 *     EtwpAddLastDroppedEvent @ 0x1405AB638 (EtwpAddLastDroppedEvent.c)
 *     EtwpAddDebugInfoEvents @ 0x140712E04 (EtwpAddDebugInfoEvents.c)
 *     EtwpIsWow64Logger @ 0x1407141CC (EtwpIsWow64Logger.c)
 *     EtwpAddBinaryInfoEvents @ 0x14093D058 (EtwpAddBinaryInfoEvents.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall EtwpFinalizeHeader(__int64 a1, char a2)
{
  _QWORD *v2; // r13
  char v4; // r12
  NTSTATUS result; // eax
  ULONG Length; // r15d
  unsigned int v7; // esi
  char *Buffer; // rdi
  void *v9; // rcx
  NTSTATUS v10; // r14d
  LARGE_INTEGER v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // edx
  unsigned int v16; // r15d
  unsigned int v17; // eax
  NTSTATUS v18; // eax
  int v19; // ecx
  unsigned int v20; // ecx
  unsigned __int64 v21; // rdx
  void *v22; // rcx
  LARGE_INTEGER ByteOffset; // [rsp+60h] [rbp-21h] BYREF
  int v25; // [rsp+68h] [rbp-19h]
  int v26; // [rsp+6Ch] [rbp-15h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-11h] BYREF
  unsigned __int64 FileInformation; // [rsp+80h] [rbp-1h] BYREF
  struct _IO_STATUS_BLOCK v29; // [rsp+88h] [rbp+7h] BYREF
  __int128 FsInformation; // [rsp+98h] [rbp+17h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+27h]

  v31 = 0LL;
  v2 = (_QWORD *)(a1 + 112);
  FsInformation = 0LL;
  IoStatusBlock = 0LL;
  if ( (_QWORD *)*v2 != v2
    || *(_QWORD *)(a1 + 1024) != a1 + 1024
    || *(_DWORD *)(a1 + 136)
    || (v4 = 0, *(_QWORD *)(a1 + 1288)) )
  {
    v4 = 1;
  }
  result = ZwQueryVolumeInformationFile(
             *(HANDLE *)(a1 + 816),
             &IoStatusBlock,
             &FsInformation,
             0x18u,
             FileFsSizeInformation);
  if ( result >= 0 )
  {
    v25 = HIDWORD(v31);
    Length = ~(HIDWORD(v31) - 1) & (HIDWORD(v31) + 383);
    v26 = ~(HIDWORD(v31) - 1);
    v7 = Length;
    if ( v4 )
      v7 = *(_DWORD *)(a1 + 4);
    Buffer = (char *)ExAllocatePoolWithTag(PagedPool, (v7 + 4095LL) & 0xFFFFFFFFFFFFF000uLL, 0x50777445u);
    if ( !Buffer )
      return -1073741801;
    v9 = *(void **)(a1 + 816);
    ByteOffset.QuadPart = 0LL;
    v10 = ZwReadFile(v9, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
    if ( v10 < 0 )
      goto LABEL_21;
    v11.QuadPart = Length;
    ByteOffset.QuadPart = Length;
    if ( !a2 )
    {
      *((_DWORD *)Buffer + 35) = *(_DWORD *)(a1 + 264);
      *((_DWORD *)Buffer + 29) = EtwpQueryUsedProcessorCount(a1);
      *((_DWORD *)Buffer + 38) += *(_DWORD *)(a1 + 256);
      KeQuerySystemTimePrecise((__int64 *)Buffer + 15, v12, v13, v14);
      if ( (unsigned __int8)EtwpIsWow64Logger(a1, *(unsigned int *)(a1 + 268)) )
        *((_DWORD *)Buffer + 93) += v15;
      else
        *((_DWORD *)Buffer + 95) += v15;
      *((_DWORD *)Buffer + 28) = (unsigned __int16)NtBuildNumber;
      v11 = ByteOffset;
    }
    v16 = *((_DWORD *)Buffer + 1);
    if ( v16 > v11.LowPart )
    {
      if ( !v4 )
      {
LABEL_16:
        ByteOffset.QuadPart = 0LL;
        v17 = *((_DWORD *)Buffer + 12);
        if ( v17 >= v7 )
          v17 = v7;
        v18 = ZwWriteFile(
                *(HANDLE *)(a1 + 816),
                0LL,
                0LL,
                0LL,
                &IoStatusBlock,
                Buffer,
                v26 & (v17 + v25 - 1),
                &ByteOffset,
                0LL);
        v10 = v18;
        if ( !a2 && v18 >= 0 )
        {
          v19 = *(_DWORD *)(a1 + 12);
          if ( (v19 & 0x20) != 0 )
          {
            v21 = *(unsigned int *)(a1 + 4) * (unsigned __int64)*(unsigned int *)(a1 + 264);
            v29 = 0LL;
            if ( v21 < *(unsigned int *)(a1 + 308)
                     * ((-(__int64)((v19 & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000) )
            {
              v22 = *(void **)(a1 + 816);
              FileInformation = v21;
              v10 = ZwSetInformationFile(v22, &v29, &FileInformation, 8u, FileEndOfFileInformation);
            }
          }
        }
LABEL_21:
        ExFreePoolWithTag(Buffer, 0);
        return v10;
      }
      v20 = *((_DWORD *)Buffer + 1);
      if ( v16 >= v7 )
        v20 = v7;
      v10 = ZwReadFile(
              *(HANDLE *)(a1 + 816),
              0LL,
              0LL,
              0LL,
              &IoStatusBlock,
              &Buffer[v11.QuadPart],
              v26 & (v20 - v11.LowPart + v25 - 1),
              &ByteOffset,
              0LL);
      if ( v10 < 0 )
        goto LABEL_21;
    }
    if ( v4 && v16 < v7 && v16 >= 0x178 )
    {
      *((_DWORD *)Buffer + 12) = v16;
      if ( *(_QWORD *)(a1 + 1288) )
        EtwpAddLastDroppedEvent(a1, (__int64)Buffer, v7);
      if ( (_QWORD *)*v2 != v2 || *(_DWORD *)(a1 + 136) )
        EtwpAddDebugInfoEvents(a1, (__int64)Buffer, v7, (__int64 *)Buffer + 11, 3);
      if ( *(_QWORD *)(a1 + 1024) != a1 + 1024 )
        EtwpAddBinaryInfoEvents(a1, Buffer, v7, 2LL);
    }
    goto LABEL_16;
  }
  return result;
}
