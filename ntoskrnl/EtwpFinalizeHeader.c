/*
 * XREFs of EtwpFinalizeHeader @ 0x140771D34
 * Callers:
 *     EtwpLogger @ 0x1406926A0 (EtwpLogger.c)
 *     EtwpCreateLogFile @ 0x140772270 (EtwpCreateLogFile.c)
 *     EtwpBufferingModeFlush @ 0x1408A3088 (EtwpBufferingModeFlush.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140206540 (EtwpQueryUsedProcessorCount.c)
 *     KeQuerySystemTimePrecise @ 0x1402384E0 (KeQuerySystemTimePrecise.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwReadFile @ 0x1404123D0 (ZwReadFile.c)
 *     ZwWriteFile @ 0x140412410 (ZwWriteFile.c)
 *     ZwSetInformationFile @ 0x1404127F0 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x140412C30 (ZwQueryVolumeInformationFile.c)
 *     EtwpAddLastDroppedEvent @ 0x1405FEC24 (EtwpAddLastDroppedEvent.c)
 *     EtwpAddDebugInfoEvents @ 0x140772068 (EtwpAddDebugInfoEvents.c)
 *     EtwpIsWow64Logger @ 0x14077341C (EtwpIsWow64Logger.c)
 *     EtwpAddBinaryInfoEvents @ 0x1409E933C (EtwpAddBinaryInfoEvents.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall EtwpFinalizeHeader(__int64 a1, char a2)
{
  _QWORD *v2; // r13
  char v4; // r12
  NTSTATUS result; // eax
  ULONG Length; // r15d
  unsigned int v7; // esi
  __int64 Buffer; // rdi
  void *v9; // rcx
  NTSTATUS v10; // r14d
  LARGE_INTEGER v11; // rax
  unsigned int v12; // r15d
  unsigned int v13; // ecx
  unsigned int v14; // eax
  NTSTATUS v15; // eax
  int v16; // edx
  int v17; // edx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  void *v20; // rcx
  LARGE_INTEGER ByteOffset; // [rsp+60h] [rbp-21h] BYREF
  int v23; // [rsp+68h] [rbp-19h]
  unsigned __int64 FileInformation; // [rsp+70h] [rbp-11h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK v26; // [rsp+88h] [rbp+7h] BYREF
  __int128 FsInformation; // [rsp+98h] [rbp+17h] BYREF
  __int64 v28; // [rsp+A8h] [rbp+27h]

  v28 = 0LL;
  v2 = (_QWORD *)(a1 + 96);
  FsInformation = 0LL;
  IoStatusBlock = 0LL;
  if ( (_QWORD *)*v2 != v2
    || *(_QWORD *)(a1 + 1040) != a1 + 1040
    || *(_DWORD *)(a1 + 120)
    || (v4 = 0, *(_QWORD *)(a1 + 1304)) )
  {
    v4 = 1;
  }
  result = ZwQueryVolumeInformationFile(
             *(HANDLE *)(a1 + 800),
             &IoStatusBlock,
             &FsInformation,
             0x18u,
             FileFsSizeInformation);
  if ( result >= 0 )
  {
    v23 = HIDWORD(v28);
    Length = ~(HIDWORD(v28) - 1) & (HIDWORD(v28) + 383);
    LODWORD(FileInformation) = ~(HIDWORD(v28) - 1);
    v7 = Length;
    if ( v4 )
      v7 = *(_DWORD *)(a1 + 4);
    Buffer = ExAllocatePool2(256LL, (v7 + 4095LL) & 0xFFFFFFFFFFFFF000uLL, 1350005829LL);
    if ( !Buffer )
      return -1073741801;
    v9 = *(void **)(a1 + 800);
    ByteOffset.QuadPart = 0LL;
    v10 = ZwReadFile(v9, 0LL, 0LL, 0LL, &IoStatusBlock, (PVOID)Buffer, Length, &ByteOffset, 0LL);
    if ( v10 < 0 )
      goto LABEL_26;
    v11.QuadPart = Length;
    ByteOffset.QuadPart = Length;
    if ( !a2 )
    {
      *(_DWORD *)(Buffer + 140) = *(_DWORD *)(a1 + 248);
      *(_DWORD *)(Buffer + 116) = EtwpQueryUsedProcessorCount(a1);
      *(_DWORD *)(Buffer + 152) += *(_DWORD *)(a1 + 240);
      KeQuerySystemTimePrecise((_QWORD *)(Buffer + 120));
      if ( (unsigned __int8)EtwpIsWow64Logger(a1, *(unsigned int *)(a1 + 252)) )
        *(_DWORD *)(Buffer + 372) += v16;
      else
        *(_DWORD *)(Buffer + 380) += v16;
      *(_DWORD *)(Buffer + 112) = (unsigned __int16)NtBuildNumber;
      v11 = ByteOffset;
    }
    v12 = *(_DWORD *)(Buffer + 4);
    if ( v12 > v11.LowPart )
    {
      if ( !v4 )
      {
LABEL_23:
        ByteOffset.QuadPart = 0LL;
        v14 = *(_DWORD *)(Buffer + 48);
        if ( v14 >= v7 )
          v14 = v7;
        v15 = ZwWriteFile(
                *(HANDLE *)(a1 + 800),
                0LL,
                0LL,
                0LL,
                &IoStatusBlock,
                (PVOID)Buffer,
                FileInformation & (v14 + v23 - 1),
                &ByteOffset,
                0LL);
        v10 = v15;
        if ( !a2 && v15 >= 0 )
        {
          v17 = *(_DWORD *)(a1 + 12);
          if ( (v17 & 0x20) != 0 )
          {
            v18 = *(unsigned int *)(a1 + 292)
                * ((-(__int64)((*(_DWORD *)(a1 + 12) & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000);
            v26 = 0LL;
            if ( (v17 & 0x4000000) != 0 && (v17 & 1) != 0 )
              v19 = *(_QWORD *)(a1 + 216);
            else
              v19 = *(unsigned int *)(a1 + 4) * (unsigned __int64)*(unsigned int *)(a1 + 248);
            if ( v19 < v18 )
            {
              v20 = *(void **)(a1 + 800);
              FileInformation = v19;
              v10 = ZwSetInformationFile(v20, &v26, &FileInformation, 8u, FileEndOfFileInformation);
            }
          }
        }
LABEL_26:
        ExFreePoolWithTag((PVOID)Buffer, 0);
        return v10;
      }
      v13 = *(_DWORD *)(Buffer + 4);
      if ( v12 >= v7 )
        v13 = v7;
      v10 = ZwReadFile(
              *(HANDLE *)(a1 + 800),
              0LL,
              0LL,
              0LL,
              &IoStatusBlock,
              (PVOID)(Buffer + v11.QuadPart),
              FileInformation & (v13 - v11.LowPart + v23 - 1),
              &ByteOffset,
              0LL);
      if ( v10 < 0 )
        goto LABEL_26;
    }
    if ( v4 && v12 < v7 && v12 >= 0x178 )
    {
      *(_DWORD *)(Buffer + 48) = v12;
      if ( *(_QWORD *)(a1 + 1304) )
        EtwpAddLastDroppedEvent(a1, Buffer, v7);
      if ( (_QWORD *)*v2 != v2 || *(_DWORD *)(a1 + 120) )
        EtwpAddDebugInfoEvents(a1, Buffer, v7, Buffer + 88, 3);
      if ( *(_QWORD *)(a1 + 1040) != a1 + 1040 )
        EtwpAddBinaryInfoEvents(a1, Buffer, v7, 2LL);
    }
    goto LABEL_23;
  }
  return result;
}
