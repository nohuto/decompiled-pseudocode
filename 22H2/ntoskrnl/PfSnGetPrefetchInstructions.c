/*
 * XREFs of PfSnGetPrefetchInstructions @ 0x14062D440
 * Callers:
 *     PfSnBeginScenario @ 0x140630458 (PfSnBeginScenario.c)
 * Callees:
 *     SmDecompressBuffer @ 0x14026D3DC (SmDecompressBuffer.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x140347B60 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     NtQueryInformationFile @ 0x1405FAEA0 (NtQueryInformationFile.c)
 *     NtOpenFile @ 0x14060B820 (NtOpenFile.c)
 *     PfVerifyScenarioBuffer @ 0x14062C430 (PfVerifyScenarioBuffer.c)
 *     NtClose @ 0x14063E0A0 (NtClose.c)
 *     NtReadFile @ 0x1406C9BE0 (NtReadFile.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfSnGetPrefetchInstructions(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v3; // rbx
  char *v7; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // ebx
  wchar_t *PoolWithTag; // r14
  int v11; // ebx
  ULONG Length; // edi
  char *v13; // rax
  _DWORD *v14; // rdi
  _DWORD *v16; // [rsp+50h] [rbp-89h] BYREF
  unsigned int v17; // [rsp+58h] [rbp-81h] BYREF
  HANDLE FileHandle; // [rsp+60h] [rbp-79h] BYREF
  __int64 v19; // [rsp+68h] [rbp-71h] BYREF
  int v20; // [rsp+70h] [rbp-69h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-61h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-51h] BYREF
  __int64 v23[2]; // [rsp+98h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-31h] BYREF
  __int128 FileInformation; // [rsp+D8h] [rbp-1h] BYREF
  __int64 v26; // [rsp+E8h] [rbp+Fh]

  v20 = 0;
  DestinationString = 0LL;
  v26 = 0LL;
  v3 = -1LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  FileHandle = 0LL;
  v17 = 0;
  v7 = 0LL;
  IoStatusBlock = 0LL;
  v16 = 0LL;
  FileInformation = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)qword_140C502B8, 0LL);
  do
    ++v3;
  while ( word_140C50150[v3] );
  v9 = 2 * v3 + 102;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v9, 0x46506343u);
  if ( !PoolWithTag )
  {
    v11 = -1073741670;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_140C502B8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)qword_140C502B8);
    KeAbPostRelease((ULONG_PTR)qword_140C502B8);
    KeLeaveCriticalRegion();
    goto LABEL_25;
  }
  RtlStringCbPrintfW(PoolWithTag, v9, L"%s\\%ws-%08X.%ws", word_140C50150, a1, *(_DWORD *)(a1 + 60), L"pf");
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_140C502B8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)qword_140C502B8);
  KeAbPostRelease((ULONG_PTR)qword_140C502B8);
  KeLeaveCriticalRegion();
  RtlInitUnicodeString(&DestinationString, PoolWithTag);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = NtOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 0, 0x20u);
  if ( v11 < 0
    || (v11 = NtQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation),
        v11 < 0) )
  {
LABEL_25:
    v14 = v16;
    goto LABEL_16;
  }
  Length = DWORD2(FileInformation);
  LODWORD(v19) = 0x10000000;
  if ( (unsigned int)(DWORD2(FileInformation) - 1) > 0xFFFFFFF || HIDWORD(FileInformation) )
  {
    v11 = -1073741823;
    goto LABEL_25;
  }
  v13 = (char *)ExAllocatePoolWithTag(PagedPool, DWORD2(FileInformation), 0x70506343u);
  v7 = v13;
  if ( !v13 )
  {
    v11 = -1073741670;
    goto LABEL_25;
  }
  v11 = NtReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, v13, Length, 0LL, 0LL);
  if ( v11 < 0 )
    goto LABEL_25;
  v23[0] = (__int64)PfSnScenarioAlloc;
  v23[1] = (__int64)SC_ENV::Free;
  v11 = SmDecompressBuffer(v7, Length, &v16, &v17, &v19, (__int64 (__fastcall **)(_QWORD))v23);
  if ( v11 < 0 )
    goto LABEL_25;
  v14 = v16;
  if ( (unsigned __int8)PfVerifyScenarioBuffer((unsigned __int64)v16, v17, &v20) )
  {
    if ( v14[20] == a2 )
    {
      *a3 = v14;
      v11 = 0;
      v14 = 0LL;
    }
    else
    {
      v11 = -1073741823;
    }
  }
  else
  {
    v11 = -1073741701;
  }
LABEL_16:
  if ( FileHandle )
    NtClose(FileHandle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  return (unsigned int)v11;
}
