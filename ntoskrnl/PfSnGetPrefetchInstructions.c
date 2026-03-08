/*
 * XREFs of PfSnGetPrefetchInstructions @ 0x1407E1BA4
 * Callers:
 *     PfSnBeginScenario @ 0x1407E4764 (PfSnBeginScenario.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1402078E4 (RtlStringCbPrintfW.c)
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     SmDecompressBuffer @ 0x14035AD38 (SmDecompressBuffer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     NtQueryInformationFile @ 0x1406EAEB0 (NtQueryInformationFile.c)
 *     NtClose @ 0x1407C00E0 (NtClose.c)
 *     PfVerifyScenarioBuffer @ 0x1407E0090 (PfVerifyScenarioBuffer.c)
 *     NtReadFile @ 0x1407E0B30 (NtReadFile.c)
 *     NtOpenFile @ 0x1407E1EC0 (NtOpenFile.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnGetPrefetchInstructions(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  void *v8; // rsi
  unsigned int v9; // ebx
  wchar_t *Pool2; // r14
  int v11; // ebx
  ULONG Length; // edi
  void *v13; // rax
  _DWORD *v14; // rdi
  _DWORD *v16; // [rsp+50h] [rbp-89h] BYREF
  unsigned int v17; // [rsp+58h] [rbp-81h] BYREF
  HANDLE FileHandle; // [rsp+60h] [rbp-79h] BYREF
  int v19; // [rsp+68h] [rbp-71h] BYREF
  int v20; // [rsp+70h] [rbp-69h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-61h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-51h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-21h] BYREF
  _QWORD v24[2]; // [rsp+C8h] [rbp-11h] BYREF
  __int128 FileInformation; // [rsp+D8h] [rbp-1h] BYREF
  __int64 v26; // [rsp+E8h] [rbp+Fh]

  v20 = 0;
  DestinationString = 0LL;
  v3 = -1LL;
  memset(&ObjectAttributes, 0, 44);
  v26 = 0LL;
  IoStatusBlock = 0LL;
  FileHandle = 0LL;
  v17 = 0;
  FileInformation = 0LL;
  CurrentThread = KeGetCurrentThread();
  v16 = 0LL;
  v8 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)qword_140C64C08, 0LL);
  do
    ++v3;
  while ( word_140C64AA0[v3] );
  v9 = 2 * v3 + 102;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, v9, 1179673411LL);
  if ( !Pool2 )
  {
    v11 = -1073741670;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_140C64C08, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)qword_140C64C08);
    KeAbPostRelease((ULONG_PTR)qword_140C64C08);
    KeLeaveCriticalRegion();
    goto LABEL_25;
  }
  RtlStringCbPrintfW(Pool2, v9, L"%s\\%ws-%08X.%ws", word_140C64AA0, a1, *(_DWORD *)(a1 + 60), L"pf");
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_140C64C08, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)qword_140C64C08);
  KeAbPostRelease((ULONG_PTR)qword_140C64C08);
  KeLeaveCriticalRegion();
  RtlInitUnicodeString(&DestinationString, Pool2);
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
  v19 = 0x10000000;
  if ( (unsigned int)(DWORD2(FileInformation) - 1) > 0xFFFFFFF || HIDWORD(FileInformation) )
  {
    v11 = -1073741823;
    goto LABEL_25;
  }
  v13 = (void *)ExAllocatePool2(256LL, DWORD2(FileInformation), 1884316483LL);
  v8 = v13;
  if ( !v13 )
  {
    v11 = -1073741670;
    goto LABEL_25;
  }
  v11 = NtReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, v13, Length, 0LL, 0LL);
  if ( v11 < 0 )
    goto LABEL_25;
  v24[0] = PfSnScenarioAlloc;
  v24[1] = SC_ENV::Free;
  v11 = SmDecompressBuffer((__int64)v8, Length, &v16, &v17, &v19, (__int64)v24);
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
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  return (unsigned int)v11;
}
